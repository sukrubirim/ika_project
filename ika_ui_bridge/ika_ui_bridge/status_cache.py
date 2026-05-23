import threading
import time
import json

class StatusCache:
    def __init__(self):
        self.lock = threading.Lock()
        self.data = {
            'mode': 'MANUAL',
            'mission_state': 'STARTUP',
            'battery': {},
            'gps': {},
            'imu': {},
            'laser': {},
            'sensors': {},
            'emergency_stop': False,
            'data_logger': {}
        }

    def update(self, key, value):
        with self.lock:
            self.data[key] = value

    def get_snapshot(self):
        with self.lock:
            return json.loads(json.dumps(self.data))
