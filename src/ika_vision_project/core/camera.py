import cv2
import time
import config

class CameraManager:
    def __init__(self):
        # Config dosyasından ayarları alıyoruz
        self.camera_id = config.CAMERA_ID
        self.width = config.FRAME_WIDTH
        self.height = config.FRAME_HEIGHT
        
        # Kamera başlatma
        self.cap = cv2.VideoCapture(self.camera_id)
        
        # Kamera özelliklerini set etme (Donanım destekliyorsa)
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.width)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.height)
        
        # FPS Hesaplama değişkenleri
        self.prev_frame_time = 0
        self.new_frame_time = 0

    def get_frame(self):
        """Kameradan bir kare okur ve başarısızlık durumunda kontrol eder."""
        ret, frame = self.cap.read()
        
        if not ret:
            print("Hata: Kameradan görüntü alınamıyor!")
            return None
        
        return frame

    def calculate_fps(self):
        """Saniye başına kare hızını (FPS) hesaplar."""
        self.new_frame_time = time.time()
        fps = 1 / (self.new_frame_time - self.prev_frame_time)
        self.prev_frame_time = self.new_frame_time
        return int(fps)

    def draw_info(self, frame, status="Otonom"):
        """Görüntü üzerine FPS ve Durum bilgisi yazar."""
        fps = self.calculate_fps()
        color = (0, 255, 0) # Yeşil
        
        # Sol üst köşeye FPS yaz
        cv2.putText(frame, f"FPS: {fps}", (10, 30), 
                    cv2.FONT_HERSHEY_SIMPLEX, 0.7, color, 2)
        
        # Sağ üst köşeye Durum yaz
        cv2.putText(frame, f"Mod: {status}", (self.width - 150, 30), 
                    cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 0, 0), 2)
        
        return frame

    def release(self):
        """Kamerayı güvenli bir şekilde kapatır."""
        self.cap.release()