class SafetyManager:
    def __init__(self, status_cache):
        self.status_cache = status_cache
        self.emergency_active = False

    def set_emergency(self, active: bool):
        self.emergency_active = active
        self.status_cache.update('emergency_stop', active)

    def is_safe_to_fire(self):
        s = self.status_cache.get_snapshot()
        return (not self.emergency_active) and s.get('laser', {}).get('ready', False) and s.get('laser', {}).get('locked', False)
