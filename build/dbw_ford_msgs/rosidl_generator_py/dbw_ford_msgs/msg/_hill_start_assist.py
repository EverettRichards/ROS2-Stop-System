# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/HillStartAssist.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HillStartAssist(type):
    """Metaclass of message 'HillStartAssist'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STAT_INACTIVE': 0,
        'STAT_FINDING_GRADIENT': 1,
        'STAT_ACTIVE_PRESSED': 2,
        'STAT_ACTIVE_RELEASED': 3,
        'STAT_FAST_RELEASE': 4,
        'STAT_SLOW_RELEASE': 5,
        'STAT_FAILED': 6,
        'STAT_UNDEFINED': 7,
        'MODE_OFF': 0,
        'MODE_AUTO': 1,
        'MODE_MANUAL': 2,
        'MODE_UNDEFINED': 3,
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
                'dbw_ford_msgs.msg.HillStartAssist')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hill_start_assist
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hill_start_assist
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hill_start_assist
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hill_start_assist
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hill_start_assist

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STAT_INACTIVE': cls.__constants['STAT_INACTIVE'],
            'STAT_FINDING_GRADIENT': cls.__constants['STAT_FINDING_GRADIENT'],
            'STAT_ACTIVE_PRESSED': cls.__constants['STAT_ACTIVE_PRESSED'],
            'STAT_ACTIVE_RELEASED': cls.__constants['STAT_ACTIVE_RELEASED'],
            'STAT_FAST_RELEASE': cls.__constants['STAT_FAST_RELEASE'],
            'STAT_SLOW_RELEASE': cls.__constants['STAT_SLOW_RELEASE'],
            'STAT_FAILED': cls.__constants['STAT_FAILED'],
            'STAT_UNDEFINED': cls.__constants['STAT_UNDEFINED'],
            'MODE_OFF': cls.__constants['MODE_OFF'],
            'MODE_AUTO': cls.__constants['MODE_AUTO'],
            'MODE_MANUAL': cls.__constants['MODE_MANUAL'],
            'MODE_UNDEFINED': cls.__constants['MODE_UNDEFINED'],
        }

    @property
    def STAT_INACTIVE(self):
        """Message constant 'STAT_INACTIVE'."""
        return Metaclass_HillStartAssist.__constants['STAT_INACTIVE']

    @property
    def STAT_FINDING_GRADIENT(self):
        """Message constant 'STAT_FINDING_GRADIENT'."""
        return Metaclass_HillStartAssist.__constants['STAT_FINDING_GRADIENT']

    @property
    def STAT_ACTIVE_PRESSED(self):
        """Message constant 'STAT_ACTIVE_PRESSED'."""
        return Metaclass_HillStartAssist.__constants['STAT_ACTIVE_PRESSED']

    @property
    def STAT_ACTIVE_RELEASED(self):
        """Message constant 'STAT_ACTIVE_RELEASED'."""
        return Metaclass_HillStartAssist.__constants['STAT_ACTIVE_RELEASED']

    @property
    def STAT_FAST_RELEASE(self):
        """Message constant 'STAT_FAST_RELEASE'."""
        return Metaclass_HillStartAssist.__constants['STAT_FAST_RELEASE']

    @property
    def STAT_SLOW_RELEASE(self):
        """Message constant 'STAT_SLOW_RELEASE'."""
        return Metaclass_HillStartAssist.__constants['STAT_SLOW_RELEASE']

    @property
    def STAT_FAILED(self):
        """Message constant 'STAT_FAILED'."""
        return Metaclass_HillStartAssist.__constants['STAT_FAILED']

    @property
    def STAT_UNDEFINED(self):
        """Message constant 'STAT_UNDEFINED'."""
        return Metaclass_HillStartAssist.__constants['STAT_UNDEFINED']

    @property
    def MODE_OFF(self):
        """Message constant 'MODE_OFF'."""
        return Metaclass_HillStartAssist.__constants['MODE_OFF']

    @property
    def MODE_AUTO(self):
        """Message constant 'MODE_AUTO'."""
        return Metaclass_HillStartAssist.__constants['MODE_AUTO']

    @property
    def MODE_MANUAL(self):
        """Message constant 'MODE_MANUAL'."""
        return Metaclass_HillStartAssist.__constants['MODE_MANUAL']

    @property
    def MODE_UNDEFINED(self):
        """Message constant 'MODE_UNDEFINED'."""
        return Metaclass_HillStartAssist.__constants['MODE_UNDEFINED']


class HillStartAssist(metaclass=Metaclass_HillStartAssist):
    """
    Message class 'HillStartAssist'.

    Constants:
      STAT_INACTIVE
      STAT_FINDING_GRADIENT
      STAT_ACTIVE_PRESSED
      STAT_ACTIVE_RELEASED
      STAT_FAST_RELEASE
      STAT_SLOW_RELEASE
      STAT_FAILED
      STAT_UNDEFINED
      MODE_OFF
      MODE_AUTO
      MODE_MANUAL
      MODE_UNDEFINED
    """

    __slots__ = [
        '_status',
        '_mode',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
        'mode': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.status = kwargs.get('status', int())
        self.mode = kwargs.get('mode', int())

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
        if self.status != other.status:
            return False
        if self.mode != other.mode:
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
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value
