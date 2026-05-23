import cv2
import threading
import time
import config

class CameraManager:
    def __init__(self):
        self.camera_id = config.CAMERA_ID
        self.width = config.FRAME_WIDTH
        self.height = config.FRAME_HEIGHT
        
        self.cap = cv2.VideoCapture(self.camera_id)
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.width)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.height)
        
        self.frame = None
        self.ret = False
        self.running = True
        
        # FPS Hesaplama Değişkenleri
        self.prev_frame_time = 0
        self.new_frame_time = 0
        
        # Paylaşılan kaynağı (görüntü matrisini) korumak için Thread Kilidi (Lock)
        self.lock = threading.Lock()
        
        # Arka plan iş parçacığını (Thread) başlatıyoruz
        self.thread = threading.Thread(target=self._update_loop, args=())
        self.thread.daemon = True # Ana program kapandığında thread otomatik kapansın
        self.thread.start()
        print("[SİSTEM] Kamera arka plan iş parçacığı başarıyla başlatıldı.")

    def _update_loop(self):
        """Kameradan sürekli görüntü okuyan arka plan döngüsü."""
        while self.running:
            ret, frame = self.cap.read()
            if ret:
                with self.lock:
                    self.frame = frame
                    self.ret = ret
            time.sleep(0.01) # CPU'yu gereksiz yormamak için kısa bir dinlenme (100 FPS sınırı)

    def get_frame(self):
        """Main.py'nin donanımı beklemeden anlık kareyi çektiği güvenli metot."""
        with self.lock:
            if self.frame is not None:
                return self.frame.copy() # Orijinal matrisin bozulmaması için kopyasını dönüyoruz
            return None

    def calculate_fps(self):
        self.new_frame_time = time.time()
        fps = 1 / (self.new_frame_time - self.prev_frame_time) if (self.new_frame_time - self.prev_frame_time) > 0 else 30
        self.prev_frame_time = self.new_frame_time
        return int(fps)

    def draw_info(self, frame, status="Otonom"):
        fps = self.calculate_fps()
        cv2.putText(frame, f"FPS: {fps}", (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 255, 0), 2)
        cv2.putText(frame, status, (10, 60), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (255, 255, 0), 2)
        return frame

    def release(self):
        self.running = False
        if hasattr(self, 'thread'):
            self.thread.join(timeout=1.0)
        self.cap.release()
        print("[SİSTEM] Kamera donanımı güvenli bir şekilde kapatıldı.")