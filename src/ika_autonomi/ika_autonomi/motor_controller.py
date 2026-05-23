# motor_control_pkg.py
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import serial
import json

class MotorController(Node):
    def __init__(self):
        super().__init__('motor_controller')
        
        # LISTENER (SUBSCRIBER) BURADA TANIMLANIYOR
        # '/cmd_vel' topiğindeki Twist mesajlarını dinleyip 'cmd_vel_callback' fonksiyonuna atar.
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10
        )
        
        # Arduino Mega ile seri haberleşme (Port bilgisini sistemine göre örn: /dev/ttyACM0 yapmalısın)
        try:
            self.arduino = serial.Serial('/dev/ttyUSB0', 115200, timeout=1)
            self.get_logger().info("Arduino bağlantısı başarılı.")
        except serial.SerialException:
            self.arduino = None
            self.get_logger().warn("Arduino bulunamadı! Kod simülasyon modunda çalışıyor.")

        self.get_logger().info("Motor Controller başlatıldı. /cmd_vel dinleniyor...")

    def cmd_vel_callback(self, msg):
        # Subsciber veriyi yakaladığında bu fonksiyon tetiklenir
        v_x = msg.linear.x
        omega_z = msg.angular.z
        
        self.get_logger().info(f'Alınan Komut -> V: {v_x}, W: {omega_z}')
        
        # Diferansiyel sürüş veya kinematik hesaplamalar genelde burada veya Arduino'da yapılır.
        # En temizi veriyi Arduino'ya JSON veya virgülle ayrılmış string olarak yollamaktır.
        if self.arduino:
            command = f"{v_x},{omega_z}\n"
            self.arduino.write(command.encode('utf-8'))

def main(args=None):
    rclpy.init(args=args)
    node = MotorController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node.arduino:
            node.arduino.close()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()