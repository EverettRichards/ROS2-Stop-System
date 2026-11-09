# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/GearNum.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GearNum(type):
    """Metaclass of message 'GearNum'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'DRIVE_D01': 1,
        'DRIVE_D02': 2,
        'DRIVE_D03': 3,
        'DRIVE_D04': 4,
        'DRIVE_D05': 5,
        'DRIVE_D06': 6,
        'DRIVE_D07': 7,
        'DRIVE_D08': 8,
        'DRIVE_D09': 9,
        'DRIVE_D10': 10,
        'NEUTRAL': 16,
        'REVERSE_R01': 17,
        'REVERSE_R02': 18,
        'PARK': 31,
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
                'dbw_ford_msgs.msg.GearNum')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gear_num
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gear_num
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gear_num
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gear_num
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gear_num

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'DRIVE_D01': cls.__constants['DRIVE_D01'],
            'DRIVE_D02': cls.__constants['DRIVE_D02'],
            'DRIVE_D03': cls.__constants['DRIVE_D03'],
            'DRIVE_D04': cls.__constants['DRIVE_D04'],
            'DRIVE_D05': cls.__constants['DRIVE_D05'],
            'DRIVE_D06': cls.__constants['DRIVE_D06'],
            'DRIVE_D07': cls.__constants['DRIVE_D07'],
            'DRIVE_D08': cls.__constants['DRIVE_D08'],
            'DRIVE_D09': cls.__constants['DRIVE_D09'],
            'DRIVE_D10': cls.__constants['DRIVE_D10'],
            'NEUTRAL': cls.__constants['NEUTRAL'],
            'REVERSE_R01': cls.__constants['REVERSE_R01'],
            'REVERSE_R02': cls.__constants['REVERSE_R02'],
            'PARK': cls.__constants['PARK'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_GearNum.__constants['NONE']

    @property
    def DRIVE_D01(self):
        """Message constant 'DRIVE_D01'."""
        return Metaclass_GearNum.__constants['DRIVE_D01']

    @property
    def DRIVE_D02(self):
        """Message constant 'DRIVE_D02'."""
        return Metaclass_GearNum.__constants['DRIVE_D02']

    @property
    def DRIVE_D03(self):
        """Message constant 'DRIVE_D03'."""
        return Metaclass_GearNum.__constants['DRIVE_D03']

    @property
    def DRIVE_D04(self):
        """Message constant 'DRIVE_D04'."""
        return Metaclass_GearNum.__constants['DRIVE_D04']

    @property
    def DRIVE_D05(self):
        """Message constant 'DRIVE_D05'."""
        return Metaclass_GearNum.__constants['DRIVE_D05']

    @property
    def DRIVE_D06(self):
        """Message constant 'DRIVE_D06'."""
        return Metaclass_GearNum.__constants['DRIVE_D06']

    @property
    def DRIVE_D07(self):
        """Message constant 'DRIVE_D07'."""
        return Metaclass_GearNum.__constants['DRIVE_D07']

    @property
    def DRIVE_D08(self):
        """Message constant 'DRIVE_D08'."""
        return Metaclass_GearNum.__constants['DRIVE_D08']

    @property
    def DRIVE_D09(self):
        """Message constant 'DRIVE_D09'."""
        return Metaclass_GearNum.__constants['DRIVE_D09']

    @property
    def DRIVE_D10(self):
        """Message constant 'DRIVE_D10'."""
        return Metaclass_GearNum.__constants['DRIVE_D10']

    @property
    def NEUTRAL(self):
        """Message constant 'NEUTRAL'."""
        return Metaclass_GearNum.__constants['NEUTRAL']

    @property
    def REVERSE_R01(self):
        """Message constant 'REVERSE_R01'."""
        return Metaclass_GearNum.__constants['REVERSE_R01']

    @property
    def REVERSE_R02(self):
        """Message constant 'REVERSE_R02'."""
        return Metaclass_GearNum.__constants['REVERSE_R02']

    @property
    def PARK(self):
        """Message constant 'PARK'."""
        return Metaclass_GearNum.__constants['PARK']


class GearNum(metaclass=Metaclass_GearNum):
    """
    Message class 'GearNum'.

    Constants:
      NONE
      DRIVE_D01
      DRIVE_D02
      DRIVE_D03
      DRIVE_D04
      DRIVE_D05
      DRIVE_D06
      DRIVE_D07
      DRIVE_D08
      DRIVE_D09
      DRIVE_D10
      NEUTRAL
      REVERSE_R01
      REVERSE_R02
      PARK
    """

    __slots__ = [
        '_num',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'num': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        self.num = kwargs.get('num', int())

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
        if self.num != other.num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num(self):
        """Message field 'num'."""
        return self._num

    @num.setter
    def num(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num' field must be an unsigned integer in [0, 255]"
        self._num = value
