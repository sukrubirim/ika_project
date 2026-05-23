import cv2
import numpy as np

def prepare_for_ocr(roi):
    """
    Tabela içerisindeki metni okumak için görüntüyü hazırlar.
    """
    if roi is None or roi.size == 0:
        return None
        
    # 1. Gri tonlamaya çevir
    gray = cv2.cvtColor(roi, cv2.COLOR_BGR2GRAY)
    
    # 2. Kontrastı artırmak için CLAHE (Adaptif Eşikleme) uygula
    clahe = cv2.createCLAHE(clipLimit=2.0, tileGridSize=(8,8))
    enhanced = clahe.apply(gray)
    
    # 3. Gürültü giderme (Median Blur)
    blurred = cv2.medianBlur(enhanced, 3)
    
    # 4. Otsu Thresholding ile siyah-beyaz (binary) hale getir
    # Arial Black kalın bir yazı tipi olduğu için binary dönüştürme çok iyi sonuç verir
    _, binary = cv2.threshold(blurred, 0, 255, cv2.THRESH_BINARY + cv2.THRESH_OTSU)
    
    return binary