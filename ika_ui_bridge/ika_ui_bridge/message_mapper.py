"""Map ROS messages to JSON-friendly dicts"""
import math

def battery_to_dict(msg):
    # expects sensor_msgs/BatteryState
    return {
        'percentage': getattr(msg, 'percentage', None),
        'voltage': getattr(msg, 'voltage', None),
        'current': getattr(msg, 'current', None),
        'status': 'NORMAL'
    }

def imu_to_dict(msg):
    # expects sensor_msgs/Imu
    # for demo we assume orientation in quaternion; mapping is up to implementer
    return {
        'roll': getattr(msg, 'roll', 0.0),
        'pitch': getattr(msg, 'pitch', 0.0),
        'yaw': getattr(msg, 'yaw', 0.0)
    }

def gps_to_dict(msg):
    return {
        'latitude': getattr(msg, 'latitude', None) or getattr(msg, 'lat', None),
        'longitude': getattr(msg, 'longitude', None) or getattr(msg, 'lon', None),
        'altitude': getattr(msg, 'altitude', None) or getattr(msg, 'alt', None),
        'fix': True,
        'satellites': getattr(msg, 'satellites', None) or 0
    }
