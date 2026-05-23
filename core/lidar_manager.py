import config
from rplidar import RPLidar
import threading
import time
import numpy as np

class LidarManager:
    def __init__(self, port='/dev/ttyUSB1', baudrate=115200):
        try:
            self.lidar = RPLidar(port, baudrate=baudrate)
            self.lidar.connect()
            self.lidar.start_motor()
            print("LiDAR Başarıyla Başlatıldı.")
        except Exception as e:
            print(f"LiDAR Bağlantı Hatası: {e}")
            self.lidar = None

        # Güvenlik ve Açı Parametreleri
        self.danger_distance = 1500.0  # mm (1.5 Metre)
        self.angle_limit = 30.0        # Ön bölge tarama açısı (+30 ve -30 derece)
        
        # P-Kontrolcü Kazancı (Gerektiğinde hassasiyeti artırmak/azaltmak için config'e taşınabilir)
        self.Kp = 1.2 

        # Thread Güvenliği Değişkenleri
        self.is_obstacle = False
        self.error_x = 0.0
        self.running = True
        self.lock = threading.Lock()

        if self.lidar:
            self.thread = threading.Thread(target=self._lidar_scan_loop, args=())
            self.thread.daemon = True
            self.thread.start()
            print("[SİSTEM] LiDAR P-Kontrolör asenkron takip modülü aktif.")

    def _lidar_scan_loop(self):
        """LiDAR verilerini dinamik P-Kontrolcü formülü ile işleyen döngü."""
        while self.running and self.lidar:
            try:
                for scan in self.lidar.iter_scans(max_buf_meas=500):
                    if not self.running:
                        break
                    
                    tmp_obstacle = False
                    max_calculated_error = 0.0
                    
                    for (_, angle, distance) in scan:
                        if distance == 0 or distance > self.danger_distance: 
                            continue 
                        
                        # Açıyı -180 ile +180 arasına normalize et (0 derece tam önümüz)
                        # LiDAR 0-360 arası verir. 330-360 arasını negatif açılara (-30 to 0) çeviriyoruz.
                        norm_angle = angle if angle <= 180 else angle - 360
                        
                        # Sadece önümüzdeki koridoru (-30 ile +30 derece arası) kontrol et
                        if abs(norm_angle) <= self.angle_limit:
                            tmp_obstacle = True
                            
                            # 1. MESAFE FAKTÖRÜ: Engel yaklaştıkça 0'dan 1'e doğru büyür
                            distance_factor = (self.danger_distance - distance) / self.danger_distance
                            
                            # 2. AÇI FAKTÖRÜ: Engel merkeze (0 dereceye) yaklaştıkça 0'dan 1'e doğru büyür
                            angle_factor = (self.angle_limit - abs(norm_angle)) / self.angle_limit
                            
                            # Bileşke Tehlike Ağırlığı
                            danger_weight = distance_factor * angle_factor * self.Kp
                            
                            # Yön Belirleme: Engel SAĞDAYSA (norm_angle > 0) SOLA(-), SOLDAYSA (+) kır.
                            # Tarama boyunca en yüksek tehlike üreten noktanın kaçış hatasını baz alalım
                            current_error = -danger_weight if norm_angle > 0 else danger_weight
                            
                            if abs(current_error) > abs(max_calculated_error):
                                max_calculated_error = current_error
                    
                    # Hesaplanan hatayı -1.0 ile 1.0 arasında sınırla (Saturasyon)
                    max_calculated_error = np.clip(max_calculated_error, -1.0, 1.0)
                    
                    # Veriyi güvenli bir şekilde ana döngünün erişimine sun
                    with self.lock:
                        self.is_obstacle = tmp_obstacle
                        # Gürültü engelleme: Eğer engel yoksa hatayı sıfırla, varsa yuvarla
                        self.error_x = round(max_calculated_error, 2) if tmp_obstacle else 0.0
                        
            except Exception as e:
                print(f"[LIDAR THREAD UYARISI] P-Kontrolör senkronizasyon hatası: {e}")
                time.sleep(0.1)

    def check_obstacle(self):
        with self.lock:
            return self.is_obstacle, self.error_x

    def release(self):
        self.running = False
        if hasattr(self, 'thread'):
            self.thread.join(timeout=1.0)
        if self.lidar:
            try:
                self.lidar.stop_motor()
                self.lidar.disconnect()
            except:
                pass
        print("[SİSTEM] LiDAR donanımı güvenli bir şekilde sonlandırıldı.")