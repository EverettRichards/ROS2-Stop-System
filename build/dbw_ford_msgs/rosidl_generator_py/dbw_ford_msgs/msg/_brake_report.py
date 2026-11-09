# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/BrakeReport.idl
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


class Metaclass_BrakeReport(type):
    """Metaclass of message 'BrakeReport'."""

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
            module = import_type_support('dbw_ford_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dbw_ford_msgs.msg.BrakeReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brake_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brake_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brake_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brake_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brake_report

            from dbw_ford_msgs.msg import WatchdogCounter
            if WatchdogCounter.__class__._TYPE_SUPPORT is None:
                WatchdogCounter.__class__.__import_type_support__()

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


class BrakeReport(metaclass=Metaclass_BrakeReport):
    """Message class 'BrakeReport'."""

    __slots__ = [
        '_header',
        '_pedal_input',
        '_pedal_cmd',
        '_pedal_output',
        '_torque_input',
        '_torque_cmd',
        '_torque_output',
        '_decel_cmd',
        '_decel_output',
        '_boo_cmd',
        '_enabled',
        '_override',
        '_driver',
        '_timeout',
        '_watchdog_counter',
        '_watchdog_braking',
        '_fault_wdc',
        '_fault_ch1',
        '_fault_ch2',
        '_fault_power',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pedal_input': 'float',
        'pedal_cmd': 'float',
        'pedal_output': 'float',
        'torque_input': 'float',
        'torque_cmd': 'float',
        'torque_output': 'float',
        'decel_cmd': 'float',
        'decel_output': 'float',
        'boo_cmd': 'boolean',
        'enabled': 'boolean',
        'override': 'boolean',
        'driver': 'boolean',
        'timeout': 'boolean',
        'watchdog_counter': 'dbw_ford_msgs/WatchdogCounter',
        'watchdog_braking': 'boolean',
        'fault_wdc': 'boolean',
        'fault_ch1': 'boolean',
        'fault_ch2': 'boolean',
        'fault_power': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'WatchdogCounter'),  # noqa: E501
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
        self.pedal_input = kwargs.get('pedal_input', float())
        self.pedal_cmd = kwargs.get('pedal_cmd', float())
        self.pedal_output = kwargs.get('pedal_output', float())
        self.torque_input = kwargs.get('torque_input', float())
        self.torque_cmd = kwargs.get('torque_cmd', float())
        self.torque_output = kwargs.get('torque_output', float())
        self.decel_cmd = kwargs.get('decel_cmd', float())
        self.decel_output = kwargs.get('decel_output', float())
        self.boo_cmd = kwargs.get('boo_cmd', bool())
        self.enabled = kwargs.get('enabled', bool())
        self.override = kwargs.get('override', bool())
        self.driver = kwargs.get('driver', bool())
        self.timeout = kwargs.get('timeout', bool())
        from dbw_ford_msgs.msg import WatchdogCounter
        self.watchdog_counter = kwargs.get('watchdog_counter', WatchdogCounter())
        self.watchdog_braking = kwargs.get('watchdog_braking', bool())
        self.fault_wdc = kwargs.get('fault_wdc', bool())
        self.fault_ch1 = kwargs.get('fault_ch1', bool())
        self.fault_ch2 = kwargs.get('fault_ch2', bool())
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
        if self.pedal_input != other.pedal_input:
            return False
        if self.pedal_cmd != other.pedal_cmd:
            return False
        if self.pedal_output != other.pedal_output:
            return False
        if self.torque_input != other.torque_input:
            return False
        if self.torque_cmd != other.torque_cmd:
            return False
        if self.torque_output != other.torque_output:
            return False
        if self.decel_cmd != other.decel_cmd:
            return False
        if self.decel_output != other.decel_output:
            return False
        if self.boo_cmd != other.boo_cmd:
            return False
        if self.enabled != other.enabled:
            return False
        if self.override != other.override:
            return False
        if self.driver != other.driver:
            return False
        if self.timeout != other.timeout:
            return False
        if self.watchdog_counter != other.watchdog_counter:
            return False
        if self.watchdog_braking != other.watchdog_braking:
            return False
        if self.fault_wdc != other.fault_wdc:
            return False
        if self.fault_ch1 != other.fault_ch1:
            return False
        if self.fault_ch2 != other.fault_ch2:
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
    def pedal_input(self):
        """Message field 'pedal_input'."""
        return self._pedal_input

    @pedal_input.setter
    def pedal_input(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pedal_input' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pedal_input' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pedal_input = value

    @builtins.property
    def pedal_cmd(self):
        """Message field 'pedal_cmd'."""
        return self._pedal_cmd

    @pedal_cmd.setter
    def pedal_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pedal_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pedal_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pedal_cmd = value

    @builtins.property
    def pedal_output(self):
        """Message field 'pedal_output'."""
        return self._pedal_output

    @pedal_output.setter
    def pedal_output(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pedal_output' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pedal_output' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pedal_output = value

    @builtins.property
    def torque_input(self):
        """Message field 'torque_input'."""
        return self._torque_input

    @torque_input.setter
    def torque_input(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'torque_input' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'torque_input' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._torque_input = value

    @builtins.property
    def torque_cmd(self):
        """Message field 'torque_cmd'."""
        return self._torque_cmd

    @torque_cmd.setter
    def torque_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'torque_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'torque_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._torque_cmd = value

    @builtins.property
    def torque_output(self):
        """Message field 'torque_output'."""
        return self._torque_output

    @torque_output.setter
    def torque_output(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'torque_output' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'torque_output' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._torque_output = value

    @builtins.property
    def decel_cmd(self):
        """Message field 'decel_cmd'."""
        return self._decel_cmd

    @decel_cmd.setter
    def decel_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'decel_cmd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'decel_cmd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._decel_cmd = value

    @builtins.property
    def decel_output(self):
        """Message field 'decel_output'."""
        return self._decel_output

    @decel_output.setter
    def decel_output(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'decel_output' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'decel_output' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._decel_output = value

    @builtins.property
    def boo_cmd(self):
        """Message field 'boo_cmd'."""
        return self._boo_cmd

    @boo_cmd.setter
    def boo_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'boo_cmd' field must be of type 'bool'"
        self._boo_cmd = value

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
    def driver(self):
        """Message field 'driver'."""
        return self._driver

    @driver.setter
    def driver(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'driver' field must be of type 'bool'"
        self._driver = value

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
    def watchdog_counter(self):
        """Message field 'watchdog_counter'."""
        return self._watchdog_counter

    @watchdog_counter.setter
    def watchdog_counter(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import WatchdogCounter
            assert \
                isinstance(value, WatchdogCounter), \
                "The 'watchdog_counter' field must be a sub message of type 'WatchdogCounter'"
        self._watchdog_counter = value

    @builtins.property
    def watchdog_braking(self):
        """Message field 'watchdog_braking'."""
        return self._watchdog_braking

    @watchdog_braking.setter
    def watchdog_braking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'watchdog_braking' field must be of type 'bool'"
        self._watchdog_braking = value

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
    def fault_ch1(self):
        """Message field 'fault_ch1'."""
        return self._fault_ch1

    @fault_ch1.setter
    def fault_ch1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_ch1' field must be of type 'bool'"
        self._fault_ch1 = value

    @builtins.property
    def fault_ch2(self):
        """Message field 'fault_ch2'."""
        return self._fault_ch2

    @fault_ch2.setter
    def fault_ch2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_ch2' field must be of type 'bool'"
        self._fault_ch2 = value

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
