import cv2
import config

class SignTracker:
    def __init__(self):
        self.screen_center_x = config.FRAME_WIDTH // 2
        self.last_known_pos = None
        self.lost_frame_count = 0
        # Tabela anlık kaybolursa kaç kare boyunca son konumunda varsayılacağını belirler
        self.max_lost_frames = config.REQUIRED_FRAMES * 2 

    def track(self, circle):
        """
        Tabelanın ekran merkezine göre yatay sapmasını (hata payını) hesaplar.
        Dönen değer: -1.0 (en sol) ile +1.0 (en sağ) arasındadır. 0.0 tam merkezdir.
        """
        if circle is not None:
            x, y, r = circle
            self.last_known_pos = (x, y, r)
            self.lost_frame_count = 0
            
            # Merkezden sapma (Hata) hesaplama
            error_x = (x - self.screen_center_x) / (config.FRAME_WIDTH / 2)
            return round(error_x, 2), True
        
        else:
            # Tabela anlık olarak gözden kaçtıysa hafızayı devreye sok
            self.lost_frame_count += 1
            if self.lost_frame_count <= self.max_lost_frames and self.last_known_pos is not None:
                x, y, r = self.last_known_pos
                error_x = (x - self.screen_center_x) / (config.FRAME_WIDTH / 2)
                return round(error_x, 2), True  # Geçici olarak hedef var kabul ediliyor
            else:
                self.last_known_pos = None
                return 0.0, False

class LaneTracker:
    def __init__(self):
        self.screen_center_x = config.FRAME_WIDTH // 2

    def track_lane(self, frame):
        """
        Yolun/Şeridin ağırlık merkezini bularak rotadan sapma miktarını hesaplar.
        """
        h, w, _ = frame.shape
        # Kameranın sadece alt %40'lık alanına (yola) odaklanıyoruz (Region of Interest)
        roi = frame[int(h * 0.6):h, 0:w]
        
        gray = cv2.cvtColor(roi, cv2.COLOR_BGR2GRAY)
        # Basit ikili eşikleme (Yarışma pistindeki zemin/çizgi rengine göre kalibre edilmelidir)
        _, thresh = cv2.threshold(gray, 120, 255, cv2.THRESH_BINARY)
        
        # Görüntünün pikselsel ağırlık merkezini (Moments) hesapla
        M = cv2.moments(thresh)
        if M["m00"] > 0:
            cx = int(M["m10"] / M["m00"])
            # Sapma miktarını -1 ile 1 arasında normalize et
            error_x = (cx - self.screen_center_x) / (config.FRAME_WIDTH / 2)
            return round(error_x, 2), (cx, int(h * 0.8))
        
        return 0.0, None