# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/SteeringCmd.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SteeringCmd(type):
    """Metaclass of message 'SteeringCmd'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CMD_ANGLE': 0,
        'CMD_TORQUE': 1,
        'ANGLE_MAX': 9.6,
        'VELOCITY_MAX': 17.5,
        'TORQUE_MAX': 8.0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dbw_ford_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dbw_ford_msgs.msg.SteeringCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__steering_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__steering_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__steering_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__steering_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__steering_cmd

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CMD_ANGLE': cls.__constants['CMD_ANGLE'],
            'CMD_TORQUE': cls.__constants['CMD_TORQUE'],
            'ANGLE_MAX': cls.__constants['ANGLE_MAX'],
            'VELOCITY_MAX': cls.__constants['VELOCITY_MAX'],
            'TORQUE_MAX': cls.__constants['TORQUE_MAX'],
        }

    @property
    def CMD_ANGLE(self):
        """Message constant 'CMD_ANGLE'."""
        return Metaclass_SteeringCmd.__constants['CMD_ANGLE']

    @property
    def CMD_TORQUE(self):
        """Message constant 'CMD_TORQUE'."""
        return Metaclass_SteeringCmd.__constants['CMD_TORQUE']

    @property
    def ANGLE_MAX(self):
        """Message constant 'ANGLE_MAX'."""
        return Metaclass_SteeringCmd.__constants['ANGLE_MAX']

    @property
    def VELOCITY_MAX(self):
        """Message constant 'VELOCITY_MAX'."""
        return Metaclass_SteeringCmd.__constants['VELOCITY_MAX']

    @property
    def TORQUE_MAX(self):
        """Message constant 'TORQUE_MAX'."""
        return Metaclass_SteeringCmd.__constants['TORQUE_MAX']


class SteeringCmd(metaclass=Metaclass_SteeringCmd):
    """
    Message class 'SteeringCmd'.

    Constants:
      CMD_ANGLE
      CMD_TORQUE
      ANGLE_MAX
      VELOCITY_MAX
      TORQUE_MAX
    """

    __slots__ = [
        '_header',
        '_steering_wheel_angle_cmd',
        '_steering_wheel_angle_velocity',
        '_steering_wheel_torque_cmd',
        '_cmd_type',
        '_enable',
        '_clear',
        '_ignore',
        '_quiet',
        '_alert',
        '_count',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'steering_wheel_angle_cmd': 'float',
        'steering_wheel_angle_velocity': 'float',
        'steering_wheel_torque_cmd': 'float',
        'cmd_type': 'uint8',
        'enable': 'boolean',
        'clear': 'boolean',
        'ignore': 'boolean',
        'quiet': 'boolean',
        'alert': 'boolean',
        'count': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.steering_wheel_angle_cmd = kwargs.get('steering_wheel_angle_cmd', float())
        self.steering_wheel_angle_velocity = kwargs.get('steering_wheel_angle_velocity', float())
        self.steering_wheel_torque_cmd = kwargs.get('steering_wheel_torque_cmd', float())
        self.cmd_type = kwargs.get('cmd_type', int())
        self.enable = kwargs.get('enable', bool())
        self.clear = kwargs.get('clear', bool())
        self.ignore = kwargs.get('ignore', bool())
        self.quiet = kwargs.get('quiet', bool())
        self.alert = kwargs.get('alert', bool())
        self.count = kwargs.get('count', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.steering_wheel_angle_cmd != other.steering_wheel_angle_cmd:
            return False
        if self.steering_wheel_angle_velocity != other.steering_wheel_angle_velocity:
            return False
        if self.steering_wheel_torque_cmd != other.steering_wheel_torque_cmd:
            return False
        if self.cmd_type != other.cmd_type:
            return False
        if self.enable != other.enable:
            return False
        if self.clear != other.clear:
            return False
        if self.ignore != other.ignore:
            return False
        if self.quiet != other.quiet:
            return False
        if self.alert != other.alert:
            return False
        if self.count != other.count:
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
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def steering_wheel_angle_cmd(self):
        """Message field 'steering_wheel_angle_cmd'."""
        return self._steering_wheel_angle_cmd

    @steering_wheel_angle_cmd.setter
    def steering_wheel_angle_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_angle_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_angle_cmd = value

    @builtins.property
    def steering_wheel_angle_velocity(self):
        """Message field 'steering_wheel_angle_velocity'."""
        return self._steering_wheel_angle_velocity

    @steering_wheel_angle_velocity.setter
    def steering_wheel_angle_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_angle_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_angle_velocity = value

    @builtins.property
    def steering_wheel_torque_cmd(self):
        """Message field 'steering_wheel_torque_cmd'."""
        return self._steering_wheel_torque_cmd

    @steering_wheel_torque_cmd.setter
    def steering_wheel_torque_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_torque_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_torque_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_torque_cmd = value

    @builtins.property
    def cmd_type(self):
        """Message field 'cmd_type'."""
        return self._cmd_type

    @cmd_type.setter
    def cmd_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cmd_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cmd_type' field must be an unsigned integer in [0, 255]"
        self._cmd_type = value

    @builtins.property
    def enable(self):
        """Message field 'enable'."""
        return self._enable

    @enable.setter
    def enable(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable' field must be of type 'bool'"
        self._enable = value

    @builtins.property
    def clear(self):
        """Message field 'clear'."""
        return self._clear

    @clear.setter
    def clear(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'clear' field must be of type 'bool'"
        self._clear = value

    @builtins.property
    def ignore(self):
        """Message field 'ignore'."""
        return self._ignore

    @ignore.setter
    def ignore(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'ignore' field must be of type 'bool'"
        self._ignore = value

    @builtins.property
    def quiet(self):
        """Message field 'quiet'."""
        return self._quiet

    @quiet.setter
    def quiet(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'quiet' field must be of type 'bool'"
        self._quiet = value

    @builtins.property
    def alert(self):
        """Message field 'alert'."""
        return self._alert

    @alert.setter
    def alert(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'alert' field must be of type 'bool'"
        self._alert = value

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'count' field must be an unsigned integer in [0, 255]"
        self._count = value
