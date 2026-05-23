import pytest
import numpy as np
import cv2
import sys
import os

# Kök dizini yola ekle
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from core.detector import SignDetector
from core.tracker import LaneTracker
from utils.image_processing import prepare_for_ocr

def test_lane_tracker_straight_line():
    """Şerit takip modülünün düz yolda sıfıra yakın hata ürettiğini test eder."""
    tracker = LaneTracker()
    
    # Alt kısmı tamamen beyaz (şerit olan) yapay bir yol karesi oluştur
    mock_frame = np.zeros((480, 640, 3), dtype=np.uint8)
    mock_frame[300:480, :] = 255 # Yol beyaz zemine sahip olsun
    
    error, center = tracker.track_lane(mock_frame)
    
    # Tam ortalanmış yolda hata 0 olmalıdır
    assert abs(error) <= 0.1
    assert center is not None

def test_image_processing_binary_conversion():
    """ Hazırlık filtresinin resmi binary (siyah/beyaz) yapısını kontrol eder."""
    # Rastgele bir ROI matrisi oluştur
    mock_roi = np.random.randint(0, 255, (100, 100, 3), dtype=np.uint8)
    
    processed = prepare_for_ocr(mock_roi)
    
    # Çıktı tek kanallı gri/binary olmalıdır
    assert len(processed.shape) == 2
    # Değerler sadece 0 veya 255 olmalıdır (Otsu Thresholding sonucu)
    assert np.all((processed == 0) | (processed == 255))

def test_sign_detector_no_circles_on_blank_frame():
    """Görüntüde tabela yoksa detector'ın kararlı şekilde None döndüğünü doğrular."""
    detector = SignDetector()
    blank_frame = np.zeros((480, 640, 3), dtype=np.uint8)
    
    circle = detector.process_frame(blank_frame)
    assert circle is None