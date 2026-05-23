import pytesseract
import cv2

# Windows kullanıyorsan tesseract_cmd yolunu belirtmelisin:
# pytesseract.pytesseract.tesseract_cmd = r'C:\Program Files\Tesseract-OCR\tesseract.exe'

def read_text(processed_roi):
    """
    İşlenmiş tabela görüntüsünden metin çıkarımı yapar.
    """
    if processed_roi is None or processed_roi.size == 0:
        return ""

    try:
        # Tesseract Konfigürasyonu:
        # --psm 6: Görüntüyü tek bir metin bloğu olarak varsay.
        # -c tessedit_char_whitelist: Sadece belirli karakterleri tanıması için (Opsiyonel)
        custom_config = r'--psm 6 --oem 3'
        
        text = pytesseract.image_to_string(processed_roi, config=custom_config, lang='tur+eng')
        
        # Gereksiz boşlukları ve karakterleri temizle
        clean_text = text.strip().upper()
        
        return clean_text
    except Exception as e:
        print(f"OCR Hatası: {e}")
        return ""