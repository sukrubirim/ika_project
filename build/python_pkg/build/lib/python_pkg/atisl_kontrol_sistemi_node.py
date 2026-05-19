#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from std_msgs.msg import Bool
from cv_bridge import CvBridge, CvBridgeError
import cv2
import numpy as np
import time

# Not: YOLO kütüphanesinin kurulu olduğunu varsayıyoruz (pip install ultralytics)
from ultralytics import YOLO

class PIDController:
    """Gelişmiş iki eksenli hedefleme için hassas PID Kontrolcü Sınıfı."""
    def __init__(self, kp, ki, kd, setpoint=0.0):
        self.kp = kp
        self.ki = ki
        self.kd = kd
        self.setpoint = setpoint
        self.prev_error = 0.0
        self.integral = 0.0
        self.last_time = time.time()

    def compute(self, current_value):
        current_time = time.time()
        dt = current_time - self.last_time
        if dt <= 0.0:
            dt = 1e-3  # Sıfıra bölme hatasını engellemek için minimum dt

        error = self.setpoint - current_value
        self.integral += error * dt
        derivative = (error - self.prev_error) / dt

        output = (self.kp * error) + (self.ki * self.integral) + (self.kd * derivative)

        self.prev_error = error
        self.last_time = current_time
        return output

    def reset(self):
        self.prev_error = 0.0
        self.integral = 0.0


class FireControlTargetingNode(Node):
    def __init__(self):
        super().__init__('fire_control_targeting_node')
        
        # --- PARAMETRELER ---
        self.declare_parameter('yolo_model_path', 'yolov8n.pt')
        self.declare_parameter('target_class_id', 0)  # Yarışmadaki hedef sınıf ID'si
        self.declare_parameter('pixel_tolerance', 15.0)  # Merkezleme toleransı (piksel)
        self.declare_parameter('required_lock_frames', 10)  # Lazer için gereken ardışık kilitlenme kare sayısı

        model_path = self.get_parameter('yolo_model_path').get_parameter_value().string_value
        self.target_class = self.get_parameter('target_class_id').get_parameter_value().integer_value
        self.tolerance = self.get_parameter('pixel_tolerance').get_parameter_value().double_value
        self.req_lock_frames = self.get_parameter('required_lock_frames').get_parameter_value().integer_value

        # --- MODEL VE CV_BRIDGE KURULUMU ---
        try:
            self.model = YOLO(model_path)
            self.get_logger().info(f"YOLO Modeli başarıyla yüklendi: {model_path}")
        except Exception as e:
            self.get_logger().error(f"YOLO yükleme hatası: {str(e)}")
            
        self.bridge = CvBridge()

        # --- PID KONTROLCÜLERİ ---
        # Pan (Yatay Eksen) ve Tilt (Dikey Eksen) için PID kazançları
        self.pid_pan = PIDController(kp=0.005, ki=0.001, kd=0.0002, setpoint=0.0)
        self.pid_tilt = PIDController(kp=0.005, ki=0.001, kd=0.0002, setpoint=0.0)

        # --- ABONELİKLER VE YAYINCILAR ---
        # Kamera görüntüsünü dinle (Raspberry Pi 5 / Panoramik Kamera)
        self.img_sub = self.create_subscription(
            Image,
            '/camera/image_raw',
            self.image_callback,
            10
        )

        # Aktüatör / ros2_control veya motor sürücüye yönelim komutu gönder (Twist veya Custom Eksen Mesajı)
        self.cmd_pub = self.create_publisher(Twist, '/turret/cmd_vel', 10)
        
        # Lazer Tetikleyici Düğümüne (Röle/GPIO kontrolcüye) sinyal gönder
        self.laser_pub = self.create_publisher(Bool, '/targeting/laser_trigger', 10)

        # --- SİSTEM DURUM DEĞİŞKENLERİ ---
        self.lock_counter = 0
        self.laser_state = False

    def image_callback(self, msg):
        try:
            # ROS2 Görüntü mesajını OpenCV formatına dönüştür
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        except CvBridgeError as e:
            self.get_logger().error(f"CvBridge Hatası: {str(e)}")
            return

        height, width, _ = frame.shape
        cam_center_x = width / 2.0
        cam_center_y = height / 2.0

        # 1. YOLO ile Nesne Tespiti (Inference)
        results = self.model(frame, verbose=False)
        target_detected = False
        target_box = None

        for result in results:
            boxes = result.boxes
            for box in boxes:
                if int(box.cls[0]) == self.target_class:
                    target_detected = True
                    target_box = box.xyxy[0].cpu().numpy()  # [xmin, ymin, xmax, ymax]
                    break
            if target_detected:
                break

        cmd_msg = Twist()
        laser_msg = Bool()

        if target_detected:
            # 2. OpenCV ile Hedef Koordinat Çıkarımı ve Merkez Hesaplama
            xmin, ymin, xmax, ymax = target_box
            target_center_x = (xmin + xmax) / 2.0
            target_center_y = (ymin + ymax) / 2.0

            # İsteğe bağlı: OpenCV ile ROI içinde çember/kontur analizi ile merkezi rafine etme
            roi = frame[int(ymin):int(ymax), int(xmin):int(xmax)]
            # Burada hassas merkezleme için OpenCV Moments veya HoughCircles uygulanabilir.

            # Optik merkez ile hedef merkezi arasındaki piksel hatası (Error)
            error_x = target_center_x - cam_center_x
            error_y = cam_center_y - target_center_y  # Görüntü koordinatlarında Y aşağı doğrudur

            # 3. PID Hesaplamaları ile Hız/Açı Komut üretimi
            pan_effort = self.pid_pan.compute(error_x)
            tilt_effort = self.pid_tilt.compute(error_y)

            # Aktüatör sınırlandırması (Doyum/Saturation)
            cmd_msg.angular.z = float(np.clip(pan_effort, -1.0, 1.0))  # Pan hızı
            cmd_msg.linear.z = float(np.clip(tilt_effort, -1.0, 1.0))   # Tilt hızı

            # Görüntü üzerine çizim yap (Debug & Arayüz için)
            cv2.rectangle(frame, (int(xmin), int(ymin)), (int(xmax), int(ymax)), (0, 255, 0), 2)
            cv2.circle(frame, (int(target_center_x), int(target_center_y)), 5, (0, 0, 255), -1)
            
            # 4. Hedef Merkezleme Mantığı ve Kilitlenme Kontrolü
            distance_to_center = np.hypot(error_x, error_y)
            if distance_to_center <= self.tolerance:
                self.lock_counter += 1
                if self.lock_counter >= self.req_lock_frames:
                    self.laser_state = True
                    self.get_logger().info("HEDEF KİLİTLENDİ! Lazer Aktif.", throttle_duration_sec=1.0)
            else:
                self.lock_counter = max(0, self.lock_counter - 1)
                self.laser_state = False

        else:
            # Hedef kaybedildiyse dur ve PID'leri sıfırla
            self.pid_pan.reset()
            self.pid_tilt.reset()
            self.lock_counter = 0
            self.laser_state = False
            cmd_msg.angular.z = 0.0
            cmd_msg.linear.z = 0.0

        # 5. Komutları ROS2 Ağına Gönder (Publish)
        self.cmd_pub.publish(cmd_msg)
        laser_msg.data = self.laser_state
        self.laser_pub.publish(laser_msg)

        # Görsel izleme için hedef dairesi ve merkez toleransını çiz
        cv2.circle(frame, (int(cam_center_x), int(cam_center_y)), int(self.tolerance), (255, 0, 0), 1)
        cv2.imshow("Atis Kontrol Sistemi Ekran Alintisi", frame)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    node = FireControlTargetingNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Atış kontrol sistemi kapatılıyor...")
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()