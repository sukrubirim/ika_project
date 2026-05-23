import cv2
import numpy as np
import config
from core.camera import CameraManager
from core.detector import SignDetector

# Kalibrasyon Sabitleri
KNOWN_DISTANCE = 100.0  # Tabelanın yerleştirildiği net mesafe (cm)
REAL_SIGN_WIDTH = 60.0  # Şartnamedeki tabela çapı (cm)

cam = CameraManager()
detector = SignDetector()

print("\n=== Odak Uzakligi (Focal Length) Kalibrasyon Aracı ===")
print(f"Lütfen mavi tabelayı kameranın tam önüne ve net {KNOWN_DISTANCE} cm uzağa yerleştirin.")
print("Kararlı bir değer gördükten sonra 'q' ile çıkıp değeri config.py'ye yazın.\n")

while True:
    frame = cam.get_frame()
    if frame is None:
        continue

    # Daireyi tespit et
    circle = detector.process_frame(frame)
    
    if circle is not None:
        x, y, r = map(int, circle)
        pixel_width = 2 * r # Dairenin ekrandaki piksel cinsinden çapı
        
        # Odak Uzaklığı Formülü: F = (Piksel Çapı * Gerçek Mesafe) / Gerçek Çap
        calculated_focal_length = (pixel_width * KNOWN_DISTANCE) / REAL_SIGN_WIDTH
        
        # Ekrana çizim yap ve değeri yaz
        cv2.circle(frame, (x, y), r, (0, 255, 0), 2)
        cv2.putText(frame, f"Hesaplanan FOCAL_LENGTH: {calculated_focal_length:.2f}", (10, 40),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 255), 2)
        cv2.putText(frame, "Cikis ve Onay icin 'q' basiniz.", (10, 70),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 1)
        
        # Anlık log bas
        print(f"\rAnlık Ölçülen Odak Uzaklığı: {calculated_focal_length:.2f}", end="")
    else:
        cv2.putText(frame, "Tabela Tespit Edilemedi! HSV veya Hizalama Kontrolü Yapın.", (10, 40),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 0, 255), 2)

    cv2.imshow("Kamera Odak Uzakligi Kalibrasyonu", frame)
    
    if cv2.waitKey(1) & 0xFF == ord('q'):
        print("\n\nKalibrasyon Sonlandırıldı.")
        break

cam.release()
cv2.destroyAllWindows()