import serial
import time

class ControllerBridge:
    def __init__(self, port='/dev/ttyUSB0', baudrate=115200):
        try:
            self.ser = serial.Serial(
                port=port,
                baudrate=baudrate,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                bytesize=serial.EIGHTBITS,
                timeout=1
            )
            print(f"[HABERLEŞME] Başarılı: {port} | Baud: {baudrate}")
        except Exception as e:
            print(f"[HABERLEŞME HATASI] Alt kontrolcüye bağlanılamadı: {e}")
            self.ser = None

    def calculate_checksum(self, payload: str) -> str:
        """
        Gövde metnindeki (payload) tüm karakterleri XOR işlemine sokarak 
        2 haneli büyük harf bir Hex string üretir (Örn: '2A').
        """
        checksum = 0
        for char in payload:
            checksum ^= ord(char)
        return f"{checksum:02X}"

    def send_target_info(self, type_flag, value):
        """
        Güvenli Paket Formatı: "[TIPI,DEGER*CHECKSUM]\n"
        Örnek Çıktı: "[STEER,-0.12*4E]\n"
        """
        if self.ser and self.ser.is_open:
            try:
                # Ana veri gövdesini oluştur
                payload = f"{type_flag},{value}"
                
                # Checksum hesapla
                chk = self.calculate_checksum(payload)
                
                # Paketi birleştir ve paketle
                packet = f"[{payload}*{chk}]\n"
                
                # Seri porttan byte dizisi olarak gönder
                self.ser.write(packet.encode('utf-8'))
                
            except Exception as e:
                print(f"[HABERLEŞME GÖNDERİM HATASI] Paket iletilemedi: {e}")

    def close(self):
        if self.ser:
            self.ser.close()
            print("[HABERLEŞME] Seri port bağlantısı kapatıldı.")