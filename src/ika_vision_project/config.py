import cv2
import numpy as np

# --- KAMERA AYARLARI ---
CAMERA_ID = 0           # USB kamera için genelde 0 veya 1
FRAME_WIDTH = 640       # İşlem hızı için 640x480 idealdir
FRAME_HEIGHT = 480

# --- RENK FİLTRELEME (HSV) ---
# Yarışma sahasındaki ışığa göre bu değerler "HsvPicker" ile güncellenmelidir.
LOWER_BLUE = np.array([100, 150, 50])
UPPER_BLUE = np.array([140, 255, 255])

# --- TABELA GEOMETRİSİ ---
REAL_WORLD_SIGN_WIDTH = 60.0  # Şartnameye göre tabela dış çapı (cm)
FOCAL_LENGTH = 600.0          # Kamera odak uzaklığı (Kalibrasyon ile ölçülür)

# --- ALGILAMA PARAMETRELERİ ---
MIN_RADIUS = 20
MAX_RADIUS = 250
HOUGH_PARAM1 = 100
HOUGH_PARAM2 = 35             # Hassasiyet: Düşerse daha çok daire bulur ama hata artar.
REQUIRED_FRAMES = 5           # Titreşim engelleme için doğrulama sayısı

# --- HABERLEŞME ---
SERIAL_PORT = '/dev/ttyUSB0'  # Windows için 'COM3' vb.
BAUD_RATE = 115200

# --- OCR AYARLARI ---
TESSERACT_PATH = r'C:\Program Files\Tesseract-OCR\tesseract.exe' # Windows ise gerekli
OCR_CONFIG = '--psm 6 --oem 3'