import cv2
import numpy as np
import config
from core.camera import CameraManager
from core.detector import SignDetector
from core.tracker import SignTracker, LaneTracker
from core.lidar_manager import LidarManager
from core.communication import ControllerBridge
from utils.image_processing import prepare_for_ocr
from utils.ocr_helper import read_text

class AutonomousSystem:
    def __init__(self):
        print("--- Otonom Sistem Modülleri Başlatılıyor ---")
        
        # 1. Donanım ve Kamera Yönetimi
        self.cam = CameraManager()
        
        # 2. LiDAR Sensör Yönetimi (Port çakışmasını önlemek için /dev/ttyUSB1)
        self.lidar_mgr = LidarManager(port='/dev/ttyUSB1') 
        
        # 3. Algılama ve Takip Modülleri
        self.detector = SignDetector()
        self.sign_tracker = SignTracker()
        self.lane_tracker = LaneTracker()
        
        # 4. Alt Kontrolcü Seri Haberleşme Köprüsü
        # config.py'de BAUD_RATE tanımlı değilse varsayılan 115200 kullanılır
        baud_rate = getattr(config, 'BAUD_RATE', 115200)
        self.bridge = ControllerBridge(port=config.SERIAL_PORT, baudrate=baud_rate)
        
        self.is_running = True

    def run(self):
        print("\n--- LiDAR ve Yapay Zeka Destekli Öncelikli Otonom Sistem Sürüşe Hazır ---")
        print("Çıkış yapmak için görüntü penceresindeyken 'q' tuşuna basınız.\n")

        while self.is_running:
            # Kameradan anlık kareyi al
            frame = self.cam.get_frame()
            if frame is None:
                print("Kritik Hata: Kameradan görüntü akışı kesildi!")
                break

            # Varsayılan sürüş parametreleri
            steering_error = 0.0
            current_mode = "LANE_FOLLOWING" # Varsayılan mod: Şerit Takibi
            distance_to_sign = 0.0
            ocr_result = ""

            # =========================================================================
            # KATMAN 1: YÜKSEK ÖNCELİKLİ LiDAR ENGEL KONTROLÜ (Güvenlik Katmanı)
            # =========================================================================
            is_obstacle, lidar_error = self.lidar_mgr.check_obstacle()
            if is_obstacle:
                current_mode = "OBSTACLE_AVOIDANCE"
                steering_error = lidar_error
                print(f"[LiDAR UYARISI] Engel Tespit Edildi! Kaçış Direksiyon Hatası: {steering_error}")

            # =========================================================================
            # KATMAN 2: YAPAY ZEKA VE KLASİK CV TABELA/HEDEF ANALİZİ (Görev Katmanı)
            # =========================================================================
            if current_mode != "OBSTACLE_AVOIDANCE":
                
                # 2A. YOLOv8 ile Nesne Tespiti (Koni, Kayar Engel, Hedef Tahtası)
                yolo_results = self.detector.detect_objects(frame)
                for obj in yolo_results:
                    xmin, ymin, xmax, ymax = map(int, obj["box"])
                    cls_id = obj["class_id"]
                    conf = obj["confidence"]
                    
                    # Tespit edilen nesneleri ekrana çiz
                    label = f"ID: {cls_id} ({int(conf*100)}%)"
                    cv2.rectangle(frame, (xmin, ymin), (xmax, ymax), (0, 255, 255), 2)
                    cv2.putText(frame, label, (xmin, ymin - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 255), 2)

                # 2B. Klasik CV ile Dairesel Aşama Tabelası Takibi
                circle = self.detector.process_frame(frame)
                tabela_sapma, track_status = self.sign_tracker.track(circle)

                if track_status and circle is not None:
                    current_mode = "SIGN_TRACKING"
                    steering_error = tabela_sapma
                    
                    # detector.py'deki yeni mimariye uygun olarak daire parametrelerini açıyoruz
                    x, y, r = map(int, circle)
                    
                    # Mesafeyi dinamik olarak hesapla
                    distance_to_sign = self.detector.estimate_distance(r)
                    
                    # Tabela etrafına görsel geri bildirim çiz
                    cv2.circle(frame, (x, y), r, (0, 255, 0), 3)
                    cv2.circle(frame, (x, y), 2, (0, 0, 255), 3)
                    
                    # 2C. Tabela Yakınsa Metin Okuma (OCR) İşlemini Tetikle
                    # Tabela 1.5 metreden (150 cm) yakınsa OCR çalıştır
                    if distance_to_sign < 150.0 and distance_to_sign > 0:
                        h, w, _ = frame.shape
                        # Güvenli bir ROI (İlgi Alanı) kırpması yapıyoruz
                        ymin, ymax = max(0, y - r), min(h, y + r)
                        xmin, xmax = max(0, x - r), min(w, x + r)
                        tabela_roi = frame[ymin:ymax, xmin:xmax]
                        
                        if tabela_roi.size > 0:
                            processed_roi = prepare_for_ocr(tabela_roi)
                            ocr_result = read_text(processed_roi)
                            
                            # Okunan metni ekrana bas
                            if ocr_result:
                                cv2.putText(frame, f"TEXT: {ocr_result}", (xmin, ymax + 25), 
                                            cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)

                    # Alt kontrolcüye tabela mesafe ve içerik bilgisini paketle
                    # Eğer OCR metni varsa metni, yoksa standart "TABELA" bayrağını gönderir
                    info_payload = ocr_result if ocr_result else "TABELA"
                    self.bridge.send_target_info(f"SIGN_{info_payload}", distance_to_sign)

            # =========================================================================
            # KATMAN 3: VARSAYILAN ŞERİT TAKİBİ (Seyir Katmanı)
            # =========================================================================
            if current_mode == "LANE_FOLLOWING":
                lane_error, lane_center = self.lane_tracker.track_lane(frame)
                steering_error = lane_error
                if lane_center is not None:
                    cv2.circle(frame, lane_center, 8, (255, 0, 0), -1)

            # =========================================================================
            # ALT KONTROLCÜYE AKTİF DİREKSİYON VERİSİNİ GÖNDER
            # =========================================================================
            self.bridge.send_target_info("STEER", steering_error)
            
            # -------------------------------------------------------------------------
            # GÖRSEL ARAYÜZÜN GÜNCELLENMESİ VE EKRANA BASILMASI
            # -------------------------------------------------------------------------
            status_label = f"MOD: {current_mode} | Sapma: {steering_error:.2f} | Tabela: {distance_to_sign}cm"
            frame = self.cam.draw_info(frame, status=status_label)
            
            # Robotun tam merkez referans çizgisi (Kırmızı dikey çizgi)
            cv2.line(frame, (config.FRAME_WIDTH // 2, 0), (config.FRAME_WIDTH // 2, config.FRAME_HEIGHT), (0, 0, 255), 1)
            
            # Canlı akışı göster
            cv2.imshow("TEKNOFEST IKA 2026 - Otonom Kontrol Merkezi", frame)

            # 'q' tuşuna basılırsa döngüden çık
            if cv2.waitKey(1) & 0xFF == ord('q'):
                self.is_running = False

        self.cleanup()

    def cleanup(self):
        print("\nSistem kapatılıyor, donanım bağlantıları sonlandırılıyor...")
        self.cam.release()
        if hasattr(self.lidar_mgr, 'release'):
            self.lidar_mgr.release()
        self.bridge.close()
        cv2.destroyAllWindows()
        print("Güvenli kapatma tamamlandı.")

if __name__ == "__main__":
    system = AutonomousSystem()
    try:
        system.run()
    except KeyboardInterrupt:
        system.cleanup()