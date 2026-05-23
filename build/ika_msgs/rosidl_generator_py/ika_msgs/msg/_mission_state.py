# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ika_msgs:msg/MissionState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionState(type):
    """Metaclass of message 'MissionState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_MANUAL': 0,
        'MODE_AUTONOMOUS': 1,
        'MODE_TEST': 2,
        'STATUS_IDLE': 0,
        'STATUS_RUNNING': 1,
        'STATUS_PAUSED': 2,
        'STATUS_COMPLETED': 3,
        'STATUS_ERROR': 4,
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
                'ika_msgs.msg.MissionState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_MANUAL': cls.__constants['MODE_MANUAL'],
            'MODE_AUTONOMOUS': cls.__constants['MODE_AUTONOMOUS'],
            'MODE_TEST': cls.__constants['MODE_TEST'],
            'STATUS_IDLE': cls.__constants['STATUS_IDLE'],
            'STATUS_RUNNING': cls.__constants['STATUS_RUNNING'],
            'STATUS_PAUSED': cls.__constants['STATUS_PAUSED'],
            'STATUS_COMPLETED': cls.__constants['STATUS_COMPLETED'],
            'STATUS_ERROR': cls.__constants['STATUS_ERROR'],
        }

    @property
    def MODE_MANUAL(self):
        """Message constant 'MODE_MANUAL'."""
        return Metaclass_MissionState.__constants['MODE_MANUAL']

    @property
    def MODE_AUTONOMOUS(self):
        """Message constant 'MODE_AUTONOMOUS'."""
        return Metaclass_MissionState.__constants['MODE_AUTONOMOUS']

    @property
    def MODE_TEST(self):
        """Message constant 'MODE_TEST'."""
        return Metaclass_MissionState.__constants['MODE_TEST']

    @property
    def STATUS_IDLE(self):
        """Message constant 'STATUS_IDLE'."""
        return Metaclass_MissionState.__constants['STATUS_IDLE']

    @property
    def STATUS_RUNNING(self):
        """Message constant 'STATUS_RUNNING'."""
        return Metaclass_MissionState.__constants['STATUS_RUNNING']

    @property
    def STATUS_PAUSED(self):
        """Message constant 'STATUS_PAUSED'."""
        return Metaclass_MissionState.__constants['STATUS_PAUSED']

    @property
    def STATUS_COMPLETED(self):
        """Message constant 'STATUS_COMPLETED'."""
        return Metaclass_MissionState.__constants['STATUS_COMPLETED']

    @property
    def STATUS_ERROR(self):
        """Message constant 'STATUS_ERROR'."""
        return Metaclass_MissionState.__constants['STATUS_ERROR']


class MissionState(metaclass=Metaclass_MissionState):
    """
    Message class 'MissionState'.

    Constants:
      MODE_MANUAL
      MODE_AUTONOMOUS
      MODE_TEST
      STATUS_IDLE
      STATUS_RUNNING
      STATUS_PAUSED
      STATUS_COMPLETED
      STATUS_ERROR
    """

    __slots__ = [
        '_header',
        '_mission_mode',
        '_current_stage',
        '_mission_status',
        '_stage_name',
        '_status_text',
        '_autonomous_enabled',
        '_emergency_stop_active',
        '_elapsed_time_sec',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mission_mode': 'uint8',
        'current_stage': 'uint8',
        'mission_status': 'uint8',
        'stage_name': 'string',
        'status_text': 'string',
        'autonomous_enabled': 'boolean',
        'emergency_stop_active': 'boolean',
        'elapsed_time_sec': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.mission_mode = kwargs.get('mission_mode', int())
        self.current_stage = kwargs.get('current_stage', int())
        self.mission_status = kwargs.get('mission_status', int())
        self.stage_name = kwargs.get('stage_name', str())
        self.status_text = kwargs.get('status_text', str())
        self.autonomous_enabled = kwargs.get('autonomous_enabled', bool())
        self.emergency_stop_active = kwargs.get('emergency_stop_active', bool())
        self.elapsed_time_sec = kwargs.get('elapsed_time_sec', float())

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
        if self.mission_mode != other.mission_mode:
            return False
        if self.current_stage != other.current_stage:
            return False
        if self.mission_status != other.mission_status:
            return False
        if self.stage_name != other.stage_name:
            return False
        if self.status_text != other.status_text:
            return False
        if self.autonomous_enabled != other.autonomous_enabled:
            return False
        if self.emergency_stop_active != other.emergency_stop_active:
            return False
        if self.elapsed_time_sec != other.elapsed_time_sec:
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
    def mission_mode(self):
        """Message field 'mission_mode'."""
        return self._mission_mode

    @mission_mode.setter
    def mission_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mission_mode' field must be an unsigned integer in [0, 255]"
        self._mission_mode = value

    @builtins.property
    def current_stage(self):
        """Message field 'current_stage'."""
        return self._current_stage

    @current_stage.setter
    def current_stage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_stage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_stage' field must be an unsigned integer in [0, 255]"
        self._current_stage = value

    @builtins.property
    def mission_status(self):
        """Message field 'mission_status'."""
        return self._mission_status

    @mission_status.setter
    def mission_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mission_status' field must be an unsigned integer in [0, 255]"
        self._mission_status = value

    @builtins.property
    def stage_name(self):
        """Message field 'stage_name'."""
        return self._stage_name

    @stage_name.setter
    def stage_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stage_name' field must be of type 'str'"
        self._stage_name = value

    @builtins.property
    def status_text(self):
        """Message field 'status_text'."""
        return self._status_text

    @status_text.setter
    def status_text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_text' field must be of type 'str'"
        self._status_text = value

    @builtins.property
    def autonomous_enabled(self):
        """Message field 'autonomous_enabled'."""
        return self._autonomous_enabled

    @autonomous_enabled.setter
    def autonomous_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'autonomous_enabled' field must be of type 'bool'"
        self._autonomous_enabled = value

    @builtins.property
    def emergency_stop_active(self):
        """Message field 'emergency_stop_active'."""
        return self._emergency_stop_active

    @emergency_stop_active.setter
    def emergency_stop_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stop_active' field must be of type 'bool'"
        self._emergency_stop_active = value

    @builtins.property
    def elapsed_time_sec(self):
        """Message field 'elapsed_time_sec'."""
        return self._elapsed_time_sec

    @elapsed_time_sec.setter
    def elapsed_time_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elapsed_time_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'elapsed_time_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._elapsed_time_sec = value
