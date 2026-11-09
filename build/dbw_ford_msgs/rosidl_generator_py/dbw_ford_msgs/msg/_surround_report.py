# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/SurroundReport.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'sonar'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SurroundReport(type):
    """Metaclass of message 'SurroundReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FRONT_LEFT_SIDE': 0,
        'FRONT_LEFT_CORNER': 1,
        'FRONT_LEFT_CENTER': 2,
        'FRONT_RIGHT_CENTER': 3,
        'FRONT_RIGHT_CORNER': 4,
        'FRONT_RIGHT_SIDE': 5,
        'REAR_LEFT_SIDE': 6,
        'REAR_LEFT_CORNER': 7,
        'REAR_LEFT_CENTER': 8,
        'REAR_RIGHT_CENTER': 9,
        'REAR_RIGHT_CORNER': 10,
        'REAR_RIGHT_SIDE': 11,
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
                'dbw_ford_msgs.msg.SurroundReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__surround_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__surround_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__surround_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__surround_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__surround_report

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FRONT_LEFT_SIDE': cls.__constants['FRONT_LEFT_SIDE'],
            'FRONT_LEFT_CORNER': cls.__constants['FRONT_LEFT_CORNER'],
            'FRONT_LEFT_CENTER': cls.__constants['FRONT_LEFT_CENTER'],
            'FRONT_RIGHT_CENTER': cls.__constants['FRONT_RIGHT_CENTER'],
            'FRONT_RIGHT_CORNER': cls.__constants['FRONT_RIGHT_CORNER'],
            'FRONT_RIGHT_SIDE': cls.__constants['FRONT_RIGHT_SIDE'],
            'REAR_LEFT_SIDE': cls.__constants['REAR_LEFT_SIDE'],
            'REAR_LEFT_CORNER': cls.__constants['REAR_LEFT_CORNER'],
            'REAR_LEFT_CENTER': cls.__constants['REAR_LEFT_CENTER'],
            'REAR_RIGHT_CENTER': cls.__constants['REAR_RIGHT_CENTER'],
            'REAR_RIGHT_CORNER': cls.__constants['REAR_RIGHT_CORNER'],
            'REAR_RIGHT_SIDE': cls.__constants['REAR_RIGHT_SIDE'],
        }

    @property
    def FRONT_LEFT_SIDE(self):
        """Message constant 'FRONT_LEFT_SIDE'."""
        return Metaclass_SurroundReport.__constants['FRONT_LEFT_SIDE']

    @property
    def FRONT_LEFT_CORNER(self):
        """Message constant 'FRONT_LEFT_CORNER'."""
        return Metaclass_SurroundReport.__constants['FRONT_LEFT_CORNER']

    @property
    def FRONT_LEFT_CENTER(self):
        """Message constant 'FRONT_LEFT_CENTER'."""
        return Metaclass_SurroundReport.__constants['FRONT_LEFT_CENTER']

    @property
    def FRONT_RIGHT_CENTER(self):
        """Message constant 'FRONT_RIGHT_CENTER'."""
        return Metaclass_SurroundReport.__constants['FRONT_RIGHT_CENTER']

    @property
    def FRONT_RIGHT_CORNER(self):
        """Message constant 'FRONT_RIGHT_CORNER'."""
        return Metaclass_SurroundReport.__constants['FRONT_RIGHT_CORNER']

    @property
    def FRONT_RIGHT_SIDE(self):
        """Message constant 'FRONT_RIGHT_SIDE'."""
        return Metaclass_SurroundReport.__constants['FRONT_RIGHT_SIDE']

    @property
    def REAR_LEFT_SIDE(self):
        """Message constant 'REAR_LEFT_SIDE'."""
        return Metaclass_SurroundReport.__constants['REAR_LEFT_SIDE']

    @property
    def REAR_LEFT_CORNER(self):
        """Message constant 'REAR_LEFT_CORNER'."""
        return Metaclass_SurroundReport.__constants['REAR_LEFT_CORNER']

    @property
    def REAR_LEFT_CENTER(self):
        """Message constant 'REAR_LEFT_CENTER'."""
        return Metaclass_SurroundReport.__constants['REAR_LEFT_CENTER']

    @property
    def REAR_RIGHT_CENTER(self):
        """Message constant 'REAR_RIGHT_CENTER'."""
        return Metaclass_SurroundReport.__constants['REAR_RIGHT_CENTER']

    @property
    def REAR_RIGHT_CORNER(self):
        """Message constant 'REAR_RIGHT_CORNER'."""
        return Metaclass_SurroundReport.__constants['REAR_RIGHT_CORNER']

    @property
    def REAR_RIGHT_SIDE(self):
        """Message constant 'REAR_RIGHT_SIDE'."""
        return Metaclass_SurroundReport.__constants['REAR_RIGHT_SIDE']


class SurroundReport(metaclass=Metaclass_SurroundReport):
    """
    Message class 'SurroundReport'.

    Constants:
      FRONT_LEFT_SIDE
      FRONT_LEFT_CORNER
      FRONT_LEFT_CENTER
      FRONT_RIGHT_CENTER
      FRONT_RIGHT_CORNER
      FRONT_RIGHT_SIDE
      REAR_LEFT_SIDE
      REAR_LEFT_CORNER
      REAR_LEFT_CENTER
      REAR_RIGHT_CENTER
      REAR_RIGHT_CORNER
      REAR_RIGHT_SIDE
    """

    __slots__ = [
        '_header',
        '_cta_left_alert',
        '_cta_right_alert',
        '_cta_left_enabled',
        '_cta_right_enabled',
        '_blis_left_alert',
        '_blis_right_alert',
        '_blis_left_enabled',
        '_blis_right_enabled',
        '_sonar_enabled',
        '_sonar_fault',
        '_sonar',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cta_left_alert': 'boolean',
        'cta_right_alert': 'boolean',
        'cta_left_enabled': 'boolean',
        'cta_right_enabled': 'boolean',
        'blis_left_alert': 'boolean',
        'blis_right_alert': 'boolean',
        'blis_left_enabled': 'boolean',
        'blis_right_enabled': 'boolean',
        'sonar_enabled': 'boolean',
        'sonar_fault': 'boolean',
        'sonar': 'float[12]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 12),  # noqa: E501
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
        self.cta_left_alert = kwargs.get('cta_left_alert', bool())
        self.cta_right_alert = kwargs.get('cta_right_alert', bool())
        self.cta_left_enabled = kwargs.get('cta_left_enabled', bool())
        self.cta_right_enabled = kwargs.get('cta_right_enabled', bool())
        self.blis_left_alert = kwargs.get('blis_left_alert', bool())
        self.blis_right_alert = kwargs.get('blis_right_alert', bool())
        self.blis_left_enabled = kwargs.get('blis_left_enabled', bool())
        self.blis_right_enabled = kwargs.get('blis_right_enabled', bool())
        self.sonar_enabled = kwargs.get('sonar_enabled', bool())
        self.sonar_fault = kwargs.get('sonar_fault', bool())
        if 'sonar' not in kwargs:
            self.sonar = numpy.zeros(12, dtype=numpy.float32)
        else:
            self.sonar = kwargs.get('sonar')

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
        if self.cta_left_alert != other.cta_left_alert:
            return False
        if self.cta_right_alert != other.cta_right_alert:
            return False
        if self.cta_left_enabled != other.cta_left_enabled:
            return False
        if self.cta_right_enabled != other.cta_right_enabled:
            return False
        if self.blis_left_alert != other.blis_left_alert:
            return False
        if self.blis_right_alert != other.blis_right_alert:
            return False
        if self.blis_left_enabled != other.blis_left_enabled:
            return False
        if self.blis_right_enabled != other.blis_right_enabled:
            return False
        if self.sonar_enabled != other.sonar_enabled:
            return False
        if self.sonar_fault != other.sonar_fault:
            return False
        if any(self.sonar != other.sonar):
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
    def cta_left_alert(self):
        """Message field 'cta_left_alert'."""
        return self._cta_left_alert

    @cta_left_alert.setter
    def cta_left_alert(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cta_left_alert' field must be of type 'bool'"
        self._cta_left_alert = value

    @builtins.property
    def cta_right_alert(self):
        """Message field 'cta_right_alert'."""
        return self._cta_right_alert

    @cta_right_alert.setter
    def cta_right_alert(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cta_right_alert' field must be of type 'bool'"
        self._cta_right_alert = value

    @builtins.property
    def cta_left_enabled(self):
        """Message field 'cta_left_enabled'."""
        return self._cta_left_enabled

    @cta_left_enabled.setter
    def cta_left_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cta_left_enabled' field must be of type 'bool'"
        self._cta_left_enabled = value

    @builtins.property
    def cta_right_enabled(self):
        """Message field 'cta_right_enabled'."""
        return self._cta_right_enabled

    @cta_right_enabled.setter
    def cta_right_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'cta_right_enabled' field must be of type 'bool'"
        self._cta_right_enabled = value

    @builtins.property
    def blis_left_alert(self):
        """Message field 'blis_left_alert'."""
        return self._blis_left_alert

    @blis_left_alert.setter
    def blis_left_alert(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'blis_left_alert' field must be of type 'bool'"
        self._blis_left_alert = value

    @builtins.property
    def blis_right_alert(self):
        """Message field 'blis_right_alert'."""
        return self._blis_right_alert

    @blis_right_alert.setter
    def blis_right_alert(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'blis_right_alert' field must be of type 'bool'"
        self._blis_right_alert = value

    @builtins.property
    def blis_left_enabled(self):
        """Message field 'blis_left_enabled'."""
        return self._blis_left_enabled

    @blis_left_enabled.setter
    def blis_left_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'blis_left_enabled' field must be of type 'bool'"
        self._blis_left_enabled = value

    @builtins.property
    def blis_right_enabled(self):
        """Message field 'blis_right_enabled'."""
        return self._blis_right_enabled

    @blis_right_enabled.setter
    def blis_right_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'blis_right_enabled' field must be of type 'bool'"
        self._blis_right_enabled = value

    @builtins.property
    def sonar_enabled(self):
        """Message field 'sonar_enabled'."""
        return self._sonar_enabled

    @sonar_enabled.setter
    def sonar_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'sonar_enabled' field must be of type 'bool'"
        self._sonar_enabled = value

    @builtins.property
    def sonar_fault(self):
        """Message field 'sonar_fault'."""
        return self._sonar_fault

    @sonar_fault.setter
    def sonar_fault(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'sonar_fault' field must be of type 'bool'"
        self._sonar_fault = value

    @builtins.property
    def sonar(self):
        """Message field 'sonar'."""
        return self._sonar

    @sonar.setter
    def sonar(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float32, \
                    "The 'sonar' numpy.ndarray() must have the dtype of 'numpy.float32'"
                assert value.size == 12, \
                    "The 'sonar' numpy.ndarray() must have a size of 12"
                self._sonar = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'sonar' field must be a set or sequence with length 12 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._sonar = numpy.array(value, dtype=numpy.float32)
