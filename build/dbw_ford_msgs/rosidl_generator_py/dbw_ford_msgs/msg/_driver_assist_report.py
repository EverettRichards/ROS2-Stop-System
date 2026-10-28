# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/DriverAssistReport.idl
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


class Metaclass_DriverAssistReport(type):
    """Metaclass of message 'DriverAssistReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DECEL_NONE': 0,
        'DECEL_AEB': 1,
        'DECEL_ACC': 2,
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
                'dbw_ford_msgs.msg.DriverAssistReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__driver_assist_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__driver_assist_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__driver_assist_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__driver_assist_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__driver_assist_report

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DECEL_NONE': cls.__constants['DECEL_NONE'],
            'DECEL_AEB': cls.__constants['DECEL_AEB'],
            'DECEL_ACC': cls.__constants['DECEL_ACC'],
        }

    @property
    def DECEL_NONE(self):
        """Message constant 'DECEL_NONE'."""
        return Metaclass_DriverAssistReport.__constants['DECEL_NONE']

    @property
    def DECEL_AEB(self):
        """Message constant 'DECEL_AEB'."""
        return Metaclass_DriverAssistReport.__constants['DECEL_AEB']

    @property
    def DECEL_ACC(self):
        """Message constant 'DECEL_ACC'."""
        return Metaclass_DriverAssistReport.__constants['DECEL_ACC']


class DriverAssistReport(metaclass=Metaclass_DriverAssistReport):
    """
    Message class 'DriverAssistReport'.

    Constants:
      DECEL_NONE
      DECEL_AEB
      DECEL_ACC
    """

    __slots__ = [
        '_header',
        '_decel',
        '_decel_src',
        '_fcw_enabled',
        '_fcw_active',
        '_aeb_enabled',
        '_aeb_precharge',
        '_aeb_braking',
        '_acc_enabled',
        '_acc_braking',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'decel': 'float',
        'decel_src': 'uint8',
        'fcw_enabled': 'boolean',
        'fcw_active': 'boolean',
        'aeb_enabled': 'boolean',
        'aeb_precharge': 'boolean',
        'aeb_braking': 'boolean',
        'acc_enabled': 'boolean',
        'acc_braking': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.decel = kwargs.get('decel', float())
        self.decel_src = kwargs.get('decel_src', int())
        self.fcw_enabled = kwargs.get('fcw_enabled', bool())
        self.fcw_active = kwargs.get('fcw_active', bool())
        self.aeb_enabled = kwargs.get('aeb_enabled', bool())
        self.aeb_precharge = kwargs.get('aeb_precharge', bool())
        self.aeb_braking = kwargs.get('aeb_braking', bool())
        self.acc_enabled = kwargs.get('acc_enabled', bool())
        self.acc_braking = kwargs.get('acc_braking', bool())

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
        if self.decel != other.decel:
            return False
        if self.decel_src != other.decel_src:
            return False
        if self.fcw_enabled != other.fcw_enabled:
            return False
        if self.fcw_active != other.fcw_active:
            return False
        if self.aeb_enabled != other.aeb_enabled:
            return False
        if self.aeb_precharge != other.aeb_precharge:
            return False
        if self.aeb_braking != other.aeb_braking:
            return False
        if self.acc_enabled != other.acc_enabled:
            return False
        if self.acc_braking != other.acc_braking:
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
    def decel(self):
        """Message field 'decel'."""
        return self._decel

    @decel.setter
    def decel(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'decel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'decel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._decel = value

    @builtins.property
    def decel_src(self):
        """Message field 'decel_src'."""
        return self._decel_src

    @decel_src.setter
    def decel_src(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'decel_src' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'decel_src' field must be an unsigned integer in [0, 255]"
        self._decel_src = value

    @builtins.property
    def fcw_enabled(self):
        """Message field 'fcw_enabled'."""
        return self._fcw_enabled

    @fcw_enabled.setter
    def fcw_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fcw_enabled' field must be of type 'bool'"
        self._fcw_enabled = value

    @builtins.property
    def fcw_active(self):
        """Message field 'fcw_active'."""
        return self._fcw_active

    @fcw_active.setter
    def fcw_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fcw_active' field must be of type 'bool'"
        self._fcw_active = value

    @builtins.property
    def aeb_enabled(self):
        """Message field 'aeb_enabled'."""
        return self._aeb_enabled

    @aeb_enabled.setter
    def aeb_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'aeb_enabled' field must be of type 'bool'"
        self._aeb_enabled = value

    @builtins.property
    def aeb_precharge(self):
        """Message field 'aeb_precharge'."""
        return self._aeb_precharge

    @aeb_precharge.setter
    def aeb_precharge(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'aeb_precharge' field must be of type 'bool'"
        self._aeb_precharge = value

    @builtins.property
    def aeb_braking(self):
        """Message field 'aeb_braking'."""
        return self._aeb_braking

    @aeb_braking.setter
    def aeb_braking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'aeb_braking' field must be of type 'bool'"
        self._aeb_braking = value

    @builtins.property
    def acc_enabled(self):
        """Message field 'acc_enabled'."""
        return self._acc_enabled

    @acc_enabled.setter
    def acc_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'acc_enabled' field must be of type 'bool'"
        self._acc_enabled = value

    @builtins.property
    def acc_braking(self):
        """Message field 'acc_braking'."""
        return self._acc_braking

    @acc_braking.setter
    def acc_braking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'acc_braking' field must be of type 'bool'"
        self._acc_braking = value
