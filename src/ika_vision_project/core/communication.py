import serial
import time

class ControllerBridge:
    def __init__(self, port='/dev/ttyUSB0', baudrate=115200):
        """
        Robotun ana kontrolcüsü ile seri haberleşmeyi başlatır.
        """
        try:
            self.ser = serial.Serial(
                port=port,
                baudrate=baudrate,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                bytesize=serial.EIGHTBITS,
                timeout=1
            )
            print(f"Haberleşme Başarılı: {port}")
        except Exception as e:
            print(f"Bağlantı Kurulamadı: {e}")
            self.ser = None

    def send_target_info(self, type_flag, value):
        """
        Paket Formatı Örneği: "[T,HIZLANMA,120]\n" 
        T: Tip (Tabela), HIZLANMA: İçerik, 120: Mesafe (cm)
        """
        if self.ser and self.ser.is_open:
            packet = f"[{type_flag},{value}]\n"
            self.ser.write(packet.encode('utf-8'))
            # Debug için ekrana bas
            # print(f"Giden Paket: {packet}")

    def close(self):
        if self.ser:
            self.ser.close()