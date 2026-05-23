# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ika_msgs:msg/EnvironmentData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnvironmentData(type):
    """Metaclass of message 'EnvironmentData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ika_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ika_msgs.msg.EnvironmentData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__environment_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__environment_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__environment_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__environment_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__environment_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnvironmentData(metaclass=Metaclass_EnvironmentData):
    """Message class 'EnvironmentData'."""

    __slots__ = [
        '_header',
        '_temperature_celsius',
        '_relative_humidity_percent',
        '_pressure_pa',
        '_altitude_m',
        '_rain_detected',
        '_water_detected',
        '_sensor_status',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'temperature_celsius': 'float',
        'relative_humidity_percent': 'float',
        'pressure_pa': 'float',
        'altitude_m': 'float',
        'rain_detected': 'boolean',
        'water_detected': 'boolean',
        'sensor_status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.temperature_celsius = kwargs.get('temperature_celsius', float())
        self.relative_humidity_percent = kwargs.get('relative_humidity_percent', float())
        self.pressure_pa = kwargs.get('pressure_pa', float())
        self.altitude_m = kwargs.get('altitude_m', float())
        self.rain_detected = kwargs.get('rain_detected', bool())
        self.water_detected = kwargs.get('water_detected', bool())
        self.sensor_status = kwargs.get('sensor_status', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.temperature_celsius != other.temperature_celsius:
            return False
        if self.relative_humidity_percent != other.relative_humidity_percent:
            return False
        if self.pressure_pa != other.pressure_pa:
            return False
        if self.altitude_m != other.altitude_m:
            return False
        if self.rain_detected != other.rain_detected:
            return False
        if self.water_detected != other.water_detected:
            return False
        if self.sensor_status != other.sensor_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def temperature_celsius(self):
        """Message field 'temperature_celsius'."""
        return self._temperature_celsius

    @temperature_celsius.setter
    def temperature_celsius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_celsius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature_celsius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature_celsius = value

    @builtins.property
    def relative_humidity_percent(self):
        """Message field 'relative_humidity_percent'."""
        return self._relative_humidity_percent

    @relative_humidity_percent.setter
    def relative_humidity_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'relative_humidity_percent' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'relative_humidity_percent' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._relative_humidity_percent = value

    @builtins.property
    def pressure_pa(self):
        """Message field 'pressure_pa'."""
        return self._pressure_pa

    @pressure_pa.setter
    def pressure_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pressure_pa' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pressure_pa' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pressure_pa = value

    @builtins.property
    def altitude_m(self):
        """Message field 'altitude_m'."""
        return self._altitude_m

    @altitude_m.setter
    def altitude_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude_m = value

    @builtins.property
    def rain_detected(self):
        """Message field 'rain_detected'."""
        return self._rain_detected

    @rain_detected.setter
    def rain_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rain_detected' field must be of type 'bool'"
        self._rain_detected = value

    @builtins.property
    def water_detected(self):
        """Message field 'water_detected'."""
        return self._water_detected

    @water_detected.setter
    def water_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'water_detected' field must be of type 'bool'"
        self._water_detected = value

    @builtins.property
    def sensor_status(self):
        """Message field 'sensor_status'."""
        return self._sensor_status

    @sensor_status.setter
    def sensor_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_status' field must be of type 'str'"
        self._sensor_status = value
