# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ika_msgs:action/AimAndFire.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AimAndFire_Goal(type):
    """Metaclass of message 'AimAndFire_Goal'."""

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
                'ika_msgs.action.AimAndFire_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__aim_and_fire__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__aim_and_fire__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__aim_and_fire__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__aim_and_fire__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__aim_and_fire__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AimAndFire_Goal(metaclass=Metaclass_AimAndFire_Goal):
    """Message class 'AimAndFire_Goal'."""

    __slots__ = [
        '_target_x',
        '_target_y',
        '_target_distance_m',
        '_max_attempts',
        '_aim_timeout_sec',
        '_fire_duration_sec',
    ]

    _fields_and_field_types = {
        'target_x': 'float',
        'target_y': 'float',
        'target_distance_m': 'float',
        'max_attempts': 'uint8',
        'aim_timeout_sec': 'float',
        'fire_duration_sec': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_x = kwargs.get('target_x', float())
        self.target_y = kwargs.get('target_y', float())
        self.target_distance_m = kwargs.get('target_distance_m', float())
        self.max_attempts = kwargs.get('max_attempts', int())
        self.aim_timeout_sec = kwargs.get('aim_timeout_sec', float())
        self.fire_duration_sec = kwargs.get('fire_duration_sec', float())

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
        if self.target_x != other.target_x:
            return False
        if self.target_y != other.target_y:
            return False
        if self.target_distance_m != other.target_distance_m:
            return False
        if self.max_attempts != other.max_attempts:
            return False
        if self.aim_timeout_sec != other.aim_timeout_sec:
            return False
        if self.fire_duration_sec != other.fire_duration_sec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_x(self):
        """Message field 'target_x'."""
        return self._target_x

    @target_x.setter
    def target_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_x = value

    @builtins.property
    def target_y(self):
        """Message field 'target_y'."""
        return self._target_y

    @target_y.setter
    def target_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_y = value

    @builtins.property
    def target_distance_m(self):
        """Message field 'target_distance_m'."""
        return self._target_distance_m

    @target_distance_m.setter
    def target_distance_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_distance_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_distance_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_distance_m = value

    @builtins.property
    def max_attempts(self):
        """Message field 'max_attempts'."""
        return self._max_attempts

    @max_attempts.setter
    def max_attempts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_attempts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'max_attempts' field must be an unsigned integer in [0, 255]"
        self._max_attempts = value

    @builtins.property
    def aim_timeout_sec(self):
        """Message field 'aim_timeout_sec'."""
        return self._aim_timeout_sec

    @aim_timeout_sec.setter
    def aim_timeout_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aim_timeout_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aim_timeout_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aim_timeout_sec = value

    @builtins.property
    def fire_duration_sec(self):
        """Message field 'fire_duration_sec'."""
        return self._fire_duration_sec

    @fire_duration_sec.setter
    def fire_duration_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fire_duration_sec' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fire_duration_sec' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fire_duration_sec = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_AimAndFire_Result(type):
    """Metaclass of message 'AimAndFire_Result'."""

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
                'ika_msgs.action.AimAndFire_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__aim_and_fire__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__aim_and_fire__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__aim_and_fire__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__aim_and_fire__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__aim_and_fire__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AimAndFire_Result(metaclass=Metaclass_AimAndFire_Result):
    """Message class 'AimAndFire_Result'."""

    __slots__ = [
        '_success',
        '_attempts_used',
        '_final_error_x',
        '_final_error_y',
        '_result_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'attempts_used': 'uint8',
        'final_error_x': 'float',
        'final_error_y': 'float',
        'result_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.attempts_used = kwargs.get('attempts_used', int())
        self.final_error_x = kwargs.get('final_error_x', float())
        self.final_error_y = kwargs.get('final_error_y', float())
        self.result_message = kwargs.get('result_message', str())

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
        if self.success != other.success:
            return False
        if self.attempts_used != other.attempts_used:
            return False
        if self.final_error_x != other.final_error_x:
            return False
        if self.final_error_y != other.final_error_y:
            return False
        if self.result_message != other.result_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def attempts_used(self):
        """Message field 'attempts_used'."""
        return self._attempts_used

    @attempts_used.setter
    def attempts_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attempts_used' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'attempts_used' field must be an unsigned integer in [0, 255]"
        self._attempts_used = value

    @builtins.property
    def final_error_x(self):
        """Message field 'final_error_x'."""
        return self._final_error_x

    @final_error_x.setter
    def final_error_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_error_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'final_error_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._final_error_x = value

    @builtins.property
    def final_error_y(self):
        """Message field 'final_error_y'."""
        return self._final_error_y

    @final_error_y.setter
    def final_error_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_error_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'final_error_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._final_error_y = value

    @builtins.property
    def result_message(self):
        """Message field 'result_message'."""
        return self._result_message

    @result_message.setter
    def result_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result_message' field must be of type 'str'"
        self._result_message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_AimAndFire_Feedback(type):
    """Metaclass of message 'AimAndFire_Feedback'."""

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
                'ika_msgs.action.AimAndFire_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__aim_and_fire__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__aim_and_fire__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__aim_and_fire__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__aim_and_fire__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__aim_and_fire__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AimAndFire_Feedback(metaclass=Metaclass_AimAndFire_Feedback):
    """Message class 'AimAndFire_Feedback'."""

    __slots__ = [
        '_current_error_x',
        '_current_error_y',
        '_target_locked',
        '_current_attempt',
        '_feedback_message',
    ]

    _fields_and_field_types = {
        'current_error_x': 'float',
        'current_error_y': 'float',
        'target_locked': 'boolean',
        'current_attempt': 'uint8',
        'feedback_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_error_x = kwargs.get('current_error_x', float())
        self.current_error_y = kwargs.get('current_error_y', float())
        self.target_locked = kwargs.get('target_locked', bool())
        self.current_attempt = kwargs.get('current_attempt', int())
        self.feedback_message = kwargs.get('feedback_message', str())

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
        if self.current_error_x != other.current_error_x:
            return False
        if self.current_error_y != other.current_error_y:
            return False
        if self.target_locked != other.target_locked:
            return False
        if self.current_attempt != other.current_attempt:
            return False
        if self.feedback_message != other.feedback_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_error_x(self):
        """Message field 'current_error_x'."""
        return self._current_error_x

    @current_error_x.setter
    def current_error_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_error_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_error_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_error_x = value

    @builtins.property
    def current_error_y(self):
        """Message field 'current_error_y'."""
        return self._current_error_y

    @current_error_y.setter
    def current_error_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_error_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_error_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_error_y = value

    @builtins.property
    def target_locked(self):
        """Message field 'target_locked'."""
        return self._target_locked

    @target_locked.setter
    def target_locked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'target_locked' field must be of type 'bool'"
        self._target_locked = value

    @builtins.property
    def current_attempt(self):
        """Message field 'current_attempt'."""
        return self._current_attempt

    @current_attempt.setter
    def current_attempt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_attempt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_attempt' field must be an unsigned integer in [0, 255]"
        self._current_attempt = value

    @builtins.property
    def feedback_message(self):
        """Message field 'feedback_message'."""
        return self._feedback_message

    @feedback_message.setter
    def feedback_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'feedback_message' field must be of type 'str'"
        self._feedback_message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AimAndFire_SendGoal_Request(type):
    """Metaclass of message 'AimAndFire_SendGoal_Request'."""

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
                'ika_msgs.action.AimAndFire_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__aim_and_fire__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__aim_and_fire__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__aim_and_fire__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__aim_and_fire__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__aim_and_fire__send_goal__request

            from ika_msgs.action import AimAndFire
            if AimAndFire.Goal.__class__._TYPE_SUPPORT is None:
                AimAndFire.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AimAndFire_SendGoal_Request(metaclass=Metaclass_AimAndFire_SendGoal_Request):
    """Message class 'AimAndFire_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'ika_msgs/AimAndFire_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ika_msgs', 'action'], 'AimAndFire_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ika_msgs.action._aim_and_fire import AimAndFire_Goal
        self.goal = kwargs.get('goal', AimAndFire_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from ika_msgs.action._aim_and_fire import AimAndFire_Goal
            assert \
                isinstance(value, AimAndFire_Goal), \
                "The 'goal' field must be a sub message of type 'AimAndFire_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AimAndFire_SendGoal_Response(type):
    """Metaclass of message 'AimAndFire_SendGoal_Response'."""

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
                'ika_msgs.action.AimAndFire_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__aim_and_fire__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__aim_and_fire__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__aim_and_fire__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__aim_and_fire__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__aim_and_fire__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AimAndFire_SendGoal_Response(metaclass=Metaclass_AimAndFire_SendGoal_Response):
    """Message class 'AimAndFire_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_AimAndFire_SendGoal(type):
    """Metaclass of service 'AimAndFire_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ika_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ika_msgs.action.AimAndFire_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__aim_and_fire__send_goal

            from ika_msgs.action import _aim_and_fire
            if _aim_and_fire.Metaclass_AimAndFire_SendGoal_Request._TYPE_SUPPORT is None:
                _aim_and_fire.Metaclass_AimAndFire_SendGoal_Request.__import_type_support__()
            if _aim_and_fire.Metaclass_AimAndFire_SendGoal_Response._TYPE_SUPPORT is None:
                _aim_and_fire.Metaclass_AimAndFire_SendGoal_Response.__import_type_support__()


class AimAndFire_SendGoal(metaclass=Metaclass_AimAndFire_SendGoal):
    from ika_msgs.action._aim_and_fire import AimAndFire_SendGoal_Request as Request
    from ika_msgs.action._aim_and_fire import AimAndFire_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AimAndFire_GetResult_Request(type):
    """Metaclass of message 'AimAndFire_GetResult_Request'."""

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
                'ika_msgs.action.AimAndFire_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__aim_and_fire__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__aim_and_fire__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__aim_and_fire__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__aim_and_fire__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__aim_and_fire__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AimAndFire_GetResult_Request(metaclass=Metaclass_AimAndFire_GetResult_Request):
    """Message class 'AimAndFire_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AimAndFire_GetResult_Response(type):
    """Metaclass of message 'AimAndFire_GetResult_Response'."""

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
                'ika_msgs.action.AimAndFire_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__aim_and_fire__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__aim_and_fire__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__aim_and_fire__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__aim_and_fire__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__aim_and_fire__get_result__response

            from ika_msgs.action import AimAndFire
            if AimAndFire.Result.__class__._TYPE_SUPPORT is None:
                AimAndFire.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AimAndFire_GetResult_Response(metaclass=Metaclass_AimAndFire_GetResult_Response):
    """Message class 'AimAndFire_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'ika_msgs/AimAndFire_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ika_msgs', 'action'], 'AimAndFire_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from ika_msgs.action._aim_and_fire import AimAndFire_Result
        self.result = kwargs.get('result', AimAndFire_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from ika_msgs.action._aim_and_fire import AimAndFire_Result
            assert \
                isinstance(value, AimAndFire_Result), \
                "The 'result' field must be a sub message of type 'AimAndFire_Result'"
        self._result = value


class Metaclass_AimAndFire_GetResult(type):
    """Metaclass of service 'AimAndFire_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ika_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ika_msgs.action.AimAndFire_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__aim_and_fire__get_result

            from ika_msgs.action import _aim_and_fire
            if _aim_and_fire.Metaclass_AimAndFire_GetResult_Request._TYPE_SUPPORT is None:
                _aim_and_fire.Metaclass_AimAndFire_GetResult_Request.__import_type_support__()
            if _aim_and_fire.Metaclass_AimAndFire_GetResult_Response._TYPE_SUPPORT is None:
                _aim_and_fire.Metaclass_AimAndFire_GetResult_Response.__import_type_support__()


class AimAndFire_GetResult(metaclass=Metaclass_AimAndFire_GetResult):
    from ika_msgs.action._aim_and_fire import AimAndFire_GetResult_Request as Request
    from ika_msgs.action._aim_and_fire import AimAndFire_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AimAndFire_FeedbackMessage(type):
    """Metaclass of message 'AimAndFire_FeedbackMessage'."""

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
                'ika_msgs.action.AimAndFire_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__aim_and_fire__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__aim_and_fire__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__aim_and_fire__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__aim_and_fire__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__aim_and_fire__feedback_message

            from ika_msgs.action import AimAndFire
            if AimAndFire.Feedback.__class__._TYPE_SUPPORT is None:
                AimAndFire.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AimAndFire_FeedbackMessage(metaclass=Metaclass_AimAndFire_FeedbackMessage):
    """Message class 'AimAndFire_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'ika_msgs/AimAndFire_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ika_msgs', 'action'], 'AimAndFire_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ika_msgs.action._aim_and_fire import AimAndFire_Feedback
        self.feedback = kwargs.get('feedback', AimAndFire_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from ika_msgs.action._aim_and_fire import AimAndFire_Feedback
            assert \
                isinstance(value, AimAndFire_Feedback), \
                "The 'feedback' field must be a sub message of type 'AimAndFire_Feedback'"
        self._feedback = value


class Metaclass_AimAndFire(type):
    """Metaclass of action 'AimAndFire'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ika_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ika_msgs.action.AimAndFire')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__aim_and_fire

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from ika_msgs.action import _aim_and_fire
            if _aim_and_fire.Metaclass_AimAndFire_SendGoal._TYPE_SUPPORT is None:
                _aim_and_fire.Metaclass_AimAndFire_SendGoal.__import_type_support__()
            if _aim_and_fire.Metaclass_AimAndFire_GetResult._TYPE_SUPPORT is None:
                _aim_and_fire.Metaclass_AimAndFire_GetResult.__import_type_support__()
            if _aim_and_fire.Metaclass_AimAndFire_FeedbackMessage._TYPE_SUPPORT is None:
                _aim_and_fire.Metaclass_AimAndFire_FeedbackMessage.__import_type_support__()


class AimAndFire(metaclass=Metaclass_AimAndFire):

    # The goal message defined in the action definition.
    from ika_msgs.action._aim_and_fire import AimAndFire_Goal as Goal
    # The result message defined in the action definition.
    from ika_msgs.action._aim_and_fire import AimAndFire_Result as Result
    # The feedback message defined in the action definition.
    from ika_msgs.action._aim_and_fire import AimAndFire_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from ika_msgs.action._aim_and_fire import AimAndFire_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from ika_msgs.action._aim_and_fire import AimAndFire_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from ika_msgs.action._aim_and_fire import AimAndFire_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
