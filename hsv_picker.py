import cv2
import numpy as np
from core.camera import CameraManager

def nothing(x):
    pass

# Kamera modülünü başlat
cam = CameraManager()

# Ayar Penceresini Oluştur
cv2.namedWindow("HSV Kalibrasyon Paneli")
cv2.createTrackbar("H Min", "HSV Kalibrasyon Paneli", 0, 179, nothing)
cv2.createTrackbar("S Min", "HSV Kalibrasyon Paneli", 0, 255, nothing)
cv2.createTrackbar("V Min", "HSV Kalibrasyon Paneli", 0, 255, nothing)
cv2.createTrackbar("H Max", "HSV Kalibrasyon Paneli", 179, 179, nothing)
cv2.createTrackbar("S Max", "HSV Kalibrasyon Paneli", 255, 255, nothing)
cv2.createTrackbar("V Max", "HSV Kalibrasyon Paneli", 255, 255, nothing)

print("\n=== HSV Renk Kalibrasyon Aracı Başlatıldı ===")
print("Şerit veya tabela rengini izole edene kadar barları kaydırın.")
print("Çıkmak ve değerleri yazdırmak için 'q' tuşuna basın.\n")

while True:
    frame = cam.get_frame()
    if frame is None:
        continue
        
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    
    # Trackbar değerlerini oku
    h_min = cv2.getTrackbarPos("H Min", "HSV Kalibrasyon Paneli")
    s_min = cv2.getTrackbarPos("S Min", "HSV Kalibrasyon Paneli")
    v_min = cv2.getTrackbarPos("V Min", "HSV Kalibrasyon Paneli")
    h_max = cv2.getTrackbarPos("H Max", "HSV Kalibrasyon Paneli")
    s_max = cv2.getTrackbarPos("S Max", "HSV Kalibrasyon Paneli")
    v_max = cv2.getTrackbarPos("V Max", "HSV Kalibrasyon Paneli")
    
    lower_bound = np.array([h_min, s_min, v_min])
    upper_bound = np.array([h_max, s_max, v_max])
    
    # Maskeleme uygula
    mask = cv2.inRange(hsv, lower_bound, upper_bound)
    # Maskelenmiş görüntüyü renklendir (Görsel analiz için)
    result = cv2.bitwise_and(frame, frame, mask=mask)
    
    # Görüntüleri birleştirip göster
    combined = np.hstack((frame, result))
    cv2.imshow("Canli Akis vs Maskelenmis Goruntu", combined)
    
    if cv2.waitKey(1) & 0xFF == ord('q'):
        print("\n--- Kalibre Edilen Değerler (config.py için) ---")
        print(f"LOWER_VALUE = np.array([{h_min}, {s_min}, {v_min}])")
        print(f"UPPER_VALUE = np.array([{h_max}, {s_max}, {v_max}])\n")
        break

cam.release()
cv2.destroyAllWindows()