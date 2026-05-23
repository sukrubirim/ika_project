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
        Yarışma çadırı altındaki gölge ve anlık parlama değişimlerini 
        tolere edebilen adaptif şerit takip algoritması.
        """
        h, w, _ = frame.shape
        # Kameranın alt %40'lık alanına (yola) odaklan (ROI)
        roi = frame[int(h * 0.6):h, 0:w]
        
        # 1. Gri tonlamaya çevir ve pürüzleri engellemek için hafifçe bulanıklaştır
        gray = cv2.cvtColor(roi, cv2.COLOR_BGR2GRAY)
        blurred = cv2.GaussianBlur(gray, (5, 5), 0)
        
        # 2. ADAPTİF EŞİKLEME (Işık değişimlerine bağışıklık sağlayan sihirli kısım)
        # Sabit bir 120 değeri yerine, her pikselin etrafındaki 11x11'lik komşuluğun ortalamasına bakılır.
        thresh = cv2.adaptiveThreshold(
            blurred, 255, 
            cv2.ADAPTIVE_THRESH_GAUSSIAN_C, 
            cv2.THRESH_BINARY_INV, # Şeritleri beyaz, zemini siyah yapmak için ters çeviriyoruz
            11, 2
        )
        
        # Opsiyonel: Gürültü gidermek için küçük morfolojik temizlik
        kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (3, 3))
        thresh = cv2.morphologyEx(thresh, cv2.MORPH_OPEN, kernel)

        # 3. Şeridin Ağırlık Merkezini Hesapla (Moments Analizi)
        M = cv2.moments(thresh)
        if M["m00"] != 0:
            cx = int(M["m10"] / M["m00"])
            # Kırptığımız ROI yüksekliğini global koordinata geri ekliyoruz
            cy = int(M["m01"] / M["m00"]) + int(h * 0.6) 
            
            # Merkezden sapma hatasını normalize et (-1.0 ile 1.0 arası)
            lane_error = (cx - self.screen_center_x) / (config.FRAME_WIDTH / 2)
            return round(lane_error, 2), (cx, cy)
            
        # Şerit tamamen kaybolursa (Örn: Keskin viraj veya parkur sonu) sıfır hatayla koru
        return 0.0, None