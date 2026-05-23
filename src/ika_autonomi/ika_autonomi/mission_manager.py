# mission_manager.py
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math

class MissionManager(Node):
    def __init__(self):
        super().__init__('mission_manager')
        
        # PUBLISHER BURADA TANIMLANIYOR
        # geometry_msgs/Twist tipinde, '/cmd_vel' adında bir topik açıyoruz.
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        
        # Saniyede 10 kez (0.1 sn) karar döngüsünü çalıştıran bir timer
        self.timer = self.create_timer(0.1, self.control_loop)
        
        self.get_logger().info("Mission Manager başlatıldı. /cmd_vel'e veri basılıyor...")

    def control_loop(self):
        # Gerçek bir senaryoda burada sensör (Lidar, Kamera) verileri işlenir
        # Biz demo amaçlı robotu düz ve hafif kavisli sürecek bir hız komutu oluşturuyoruz
        
        msg = Twist()
        msg.linear.x = 0.5  # İleri doğru 0.5 m/s
        msg.angular.z = 0.1 # Saat yönünün tersine 0.1 rad/s dönüş
        
        # Veriyi topiğe yayınlıyoruz
        self.cmd_vel_pub.publish(msg)
        # self.get_logger().info(f'Yayınlanan Hız -> Lineer: {msg.linear.x}, Açısal: {msg.angular.z}')

def main(args=None):
    rclpy.init(args=args)
    node = MissionManager()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()