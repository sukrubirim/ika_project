import cv2
import numpy as np
import config  # Az önce oluşturduğumuz ayar dosyasını içeri aktarıyoruz

class SignDetector:
    def __init__(self):
        # Parametreleri doğrudan config dosyasından çekiyoruz
        self.lower_blue = config.LOWER_BLUE
        self.upper_blue = config.UPPER_BLUE
        
        self.param1 = config.HOUGH_PARAM1
        self.param2 = config.HOUGH_PARAM2
        self.min_radius = config.MIN_RADIUS
        self.max_radius = config.MAX_RADIUS
        
        self.real_world_width = config.REAL_WORLD_SIGN_WIDTH
        self.focal_length = config.FOCAL_LENGTH
        
        self.required_frames = config.REQUIRED_FRAMES
        self.detection_counter = 0

    def apply_color_mask(self, frame):
        """Görüntüdeki hedef rengi (mavi/kırmızı) filtreler."""
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
        mask = cv2.inRange(hsv, self.lower_blue, self.upper_blue)
        
        # Morfolojik temizlik (Gürültüleri yok eder)
        kernel = np.ones((5,5), np.uint8)
        mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
        mask = cv2.dilate(mask, kernel, iterations=1)
        
        return mask

    def estimate_distance(self, pixel_radius):
        """Piksel yarıçapını kullanarak mesafeyi cm cinsinden hesaplar."""
        pixel_width = pixel_radius * 2
        if pixel_width == 0: return 0
        # Mesafe Formülü: (Gerçek Genişlik * Odak Uzaklığı) / Piksel Genişliği
        distance = (self.real_world_width * self.focal_length) / pixel_width
        return round(distance, 2)

    def process_frame(self, frame):
        """Kareyi işler, tabelayı bulur ve mesafeyi hesaplar."""
        # 1. Renk maskesi uygula
        mask = self.apply_color_mask(frame)
        
        # 2. Daireleri tespit et (Hough Circle Transform)
        # Sadece maskelenmiş alanda arama yaparak performansı artırıyoruz
        gray = cv2.medianBlur(mask, 5)
        
        circles = cv2.HoughCircles(
            gray, cv2.HOUGH_GRADIENT, dp=1.2, 
            minDist=100,
            param1=self.param1, 
            param2=self.param2, 
            minRadius=self.min_radius, 
            maxRadius=self.max_radius
        )

        if circles is not None:
            self.detection_counter += 1
            circles = np.uint16(np.around(circles))
            
            # Birden fazla daire varsa en büyüğüne (en yakındakine) odaklan
            best_circle = max(circles[0, :], key=lambda c: c[2])
            
            # Kararlılık kontrolü: Arka arkaya belirli sayıda karede görüldü mü?
            if self.detection_counter >= self.required_frames:
                distance = self.estimate_distance(best_circle[2])
                return best_circle, distance, True
        else:
            # Tabela kaybolursa sayacı sıfırla
            self.detection_counter = 0
            
        return None, 0, False