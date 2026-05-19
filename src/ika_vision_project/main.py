import cv2
import config
from core.camera import CameraManager
from core.detector import SignDetector
from core.tracker import SignTracker, LaneTracker
from core.communication import ControllerBridge
from utils.ocr_helper import metin_oku

class AutonomousSystem:
    def __init__(self):
        # Tüm alt modüllerin nesnelerini oluşturuyoruz
        self.cam = CameraManager()
        self.detector = SignDetector()
        self.sign_tracker = SignTracker()
        self.lane_tracker = LaneTracker()
        self.bridge = ControllerBridge(port=config.SERIAL_PORT, baudrate=config.BAUD_RATE)
        self.is_running = True

    def run(self):
        print("--- Gelişmiş Otonom Sistem Başlatıldı ---")
        print("Çıkış için görüntü penceresindeyken 'q' tuşuna basınız.")

        while self.is_running:
            frame = self.cam.get_frame()
            if frame is None:
                break

            # Varsayılan değerleri tanımlayalım
            steering_error = 0.0
            current_mode = "LANE_FOLLOWING"

            # 1. Tabela Arama İşlemi
            circle, distance, is_sign_valid = self.detector.process_frame(frame)
            
            # 2. Tabela Takip Algoritması (Hafıza desteği ile)
            sign_error, target_acquired = self.sign_tracker.track(circle)

            if target_acquired:
                # Ekranda tabela veya hafızası varsa tabelaya yönel
                current_mode = "SIGN_TARGETING"
                steering_error = sign_error
                
                # Eğer tabela gerçekten o an ekrandaysa (hafızadan değilse) OCR çalıştır
                if is_sign_valid and circle is not None:
                    x, y, r = circle
                    roi = frame[max(0,y-r):y+r, max(0,x-r):x+r]
                    tabela_metni = metin_oku(roi)
                    
                    if tabela_metni:
                        # Kontrolcüye tabela görevini ve mesafesini bildir
                        self.bridge.send_target_info("SIGN", f"{tabela_metni},{distance}")
                        
                        # Yeşil Kilitleme Çemberi çiz
                        cv2.circle(frame, (x, y), r, (0, 255, 0), 3)
                        cv2.putText(frame, f"HEDEF: {tabela_metni} | {distance}cm", (x-r, y-r-10),
                                    cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)
            else:
                # Tabela yoksa şerit/yol takibi moduna geç
                lane_error, lane_center = self.lane_tracker.track_lane(frame)
                steering_error = lane_error
                
                if lane_center is not None:
                    # Yolun merkez noktasını ekranda mavi bir daire ile göster
                    cv2.circle(frame, lane_center, 8, (255, 0, 0), -1)

            # 3. Kontrol Kartına (STM32/Arduino) Direksiyon Açısı için Sapma Bilgisini Gönder
            # Kontrol kartındaki yazılımcı arkadaşınız bu değere göre motorların hız farkını (Diferansiyel) ayarlar.
            self.bridge.send_target_info("STEER", steering_error)

            # 4. Arayüzü Güncelle ve Ekrana Bas
            status_label = f"{current_mode} | Sapma: {steering_error}"
            frame = self.cam.draw_info(frame, status=status_label)
            
            # Ekranın tam ortasına kırmızı bir referans çizgisi çiz (Robotun merkez çizgisi)
            cv2.line(frame, (config.FRAME_WIDTH // 2, 0), (config.FRAME_WIDTH // 2, config.FRAME_HEIGHT), (0, 0, 255), 1)

            cv2.imshow("TEKNOFEST IKA 2026 - Otonom Kontrol Merkezi", frame)

            if cv2.waitKey(1) & 0xFF == ord('q'):
                self.is_running = False

        self.cleanup()

    def cleanup(self):
        print("Sistem kapatılıyor...")
        self.cam.release()
        self.bridge.close()
        cv2.destroyAllWindows()

if __name__ == "__main__":
    app = AutonomousSystem()
    try:
        app.run()
    except KeyboardInterrupt:
        app.cleanup()