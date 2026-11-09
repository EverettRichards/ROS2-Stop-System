# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/SteeringReport.idl
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


class Metaclass_SteeringReport(type):
    """Metaclass of message 'SteeringReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CMD_ANGLE': 0,
        'CMD_TORQUE': 1,
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
                'dbw_ford_msgs.msg.SteeringReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__steering_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__steering_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__steering_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__steering_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__steering_report

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
        }

    @property
    def CMD_ANGLE(self):
        """Message constant 'CMD_ANGLE'."""
        return Metaclass_SteeringReport.__constants['CMD_ANGLE']

    @property
    def CMD_TORQUE(self):
        """Message constant 'CMD_TORQUE'."""
        return Metaclass_SteeringReport.__constants['CMD_TORQUE']


class SteeringReport(metaclass=Metaclass_SteeringReport):
    """
    Message class 'SteeringReport'.

    Constants:
      CMD_ANGLE
      CMD_TORQUE
    """

    __slots__ = [
        '_header',
        '_steering_wheel_angle',
        '_steering_wheel_cmd',
        '_steering_wheel_torque',
        '_steering_wheel_cmd_type',
        '_speed',
        '_enabled',
        '_override',
        '_timeout',
        '_fault_wdc',
        '_fault_bus1',
        '_fault_bus2',
        '_fault_calibration',
        '_fault_power',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'steering_wheel_angle': 'float',
        'steering_wheel_cmd': 'float',
        'steering_wheel_torque': 'float',
        'steering_wheel_cmd_type': 'uint8',
        'speed': 'float',
        'enabled': 'boolean',
        'override': 'boolean',
        'timeout': 'boolean',
        'fault_wdc': 'boolean',
        'fault_bus1': 'boolean',
        'fault_bus2': 'boolean',
        'fault_calibration': 'boolean',
        'fault_power': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.steering_wheel_angle = kwargs.get('steering_wheel_angle', float())
        self.steering_wheel_cmd = kwargs.get('steering_wheel_cmd', float())
        self.steering_wheel_torque = kwargs.get('steering_wheel_torque', float())
        self.steering_wheel_cmd_type = kwargs.get('steering_wheel_cmd_type', int())
        self.speed = kwargs.get('speed', float())
        self.enabled = kwargs.get('enabled', bool())
        self.override = kwargs.get('override', bool())
        self.timeout = kwargs.get('timeout', bool())
        self.fault_wdc = kwargs.get('fault_wdc', bool())
        self.fault_bus1 = kwargs.get('fault_bus1', bool())
        self.fault_bus2 = kwargs.get('fault_bus2', bool())
        self.fault_calibration = kwargs.get('fault_calibration', bool())
        self.fault_power = kwargs.get('fault_power', bool())

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
        if self.steering_wheel_angle != other.steering_wheel_angle:
            return False
        if self.steering_wheel_cmd != other.steering_wheel_cmd:
            return False
        if self.steering_wheel_torque != other.steering_wheel_torque:
            return False
        if self.steering_wheel_cmd_type != other.steering_wheel_cmd_type:
            return False
        if self.speed != other.speed:
            return False
        if self.enabled != other.enabled:
            return False
        if self.override != other.override:
            return False
        if self.timeout != other.timeout:
            return False
        if self.fault_wdc != other.fault_wdc:
            return False
        if self.fault_bus1 != other.fault_bus1:
            return False
        if self.fault_bus2 != other.fault_bus2:
            return False
        if self.fault_calibration != other.fault_calibration:
            return False
        if self.fault_power != other.fault_power:
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
    def steering_wheel_angle(self):
        """Message field 'steering_wheel_angle'."""
        return self._steering_wheel_angle

    @steering_wheel_angle.setter
    def steering_wheel_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_angle = value

    @builtins.property
    def steering_wheel_cmd(self):
        """Message field 'steering_wheel_cmd'."""
        return self._steering_wheel_cmd

    @steering_wheel_cmd.setter
    def steering_wheel_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_cmd = value

    @builtins.property
    def steering_wheel_torque(self):
        """Message field 'steering_wheel_torque'."""
        return self._steering_wheel_torque

    @steering_wheel_torque.setter
    def steering_wheel_torque(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'steering_wheel_torque' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_wheel_torque' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_wheel_torque = value

    @builtins.property
    def steering_wheel_cmd_type(self):
        """Message field 'steering_wheel_cmd_type'."""
        return self._steering_wheel_cmd_type

    @steering_wheel_cmd_type.setter
    def steering_wheel_cmd_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'steering_wheel_cmd_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steering_wheel_cmd_type' field must be an unsigned integer in [0, 255]"
        self._steering_wheel_cmd_type = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def override(self):
        """Message field 'override'."""
        return self._override

    @override.setter
    def override(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'override' field must be of type 'bool'"
        self._override = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'timeout' field must be of type 'bool'"
        self._timeout = value

    @builtins.property
    def fault_wdc(self):
        """Message field 'fault_wdc'."""
        return self._fault_wdc

    @fault_wdc.setter
    def fault_wdc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_wdc' field must be of type 'bool'"
        self._fault_wdc = value

    @builtins.property
    def fault_bus1(self):
        """Message field 'fault_bus1'."""
        return self._fault_bus1

    @fault_bus1.setter
    def fault_bus1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_bus1' field must be of type 'bool'"
        self._fault_bus1 = value

    @builtins.property
    def fault_bus2(self):
        """Message field 'fault_bus2'."""
        return self._fault_bus2

    @fault_bus2.setter
    def fault_bus2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_bus2' field must be of type 'bool'"
        self._fault_bus2 = value

    @builtins.property
    def fault_calibration(self):
        """Message field 'fault_calibration'."""
        return self._fault_calibration

    @fault_calibration.setter
    def fault_calibration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_calibration' field must be of type 'bool'"
        self._fault_calibration = value

    @builtins.property
    def fault_power(self):
        """Message field 'fault_power'."""
        return self._fault_power

    @fault_power.setter
    def fault_power(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_power' field must be of type 'bool'"
        self._fault_power = value
