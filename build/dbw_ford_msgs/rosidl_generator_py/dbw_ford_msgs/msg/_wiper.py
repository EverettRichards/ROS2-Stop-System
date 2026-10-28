# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/Wiper.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Wiper(type):
    """Metaclass of message 'Wiper'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OFF': 0,
        'AUTO_OFF': 1,
        'OFF_MOVING': 2,
        'MANUAL_OFF': 3,
        'MANUAL_ON': 4,
        'MANUAL_LOW': 5,
        'MANUAL_HIGH': 6,
        'MIST_FLICK': 7,
        'WASH': 8,
        'AUTO_LOW': 9,
        'AUTO_HIGH': 10,
        'COURTESYWIPE': 11,
        'AUTO_ADJUST': 12,
        'RESERVED': 13,
        'STALLED': 14,
        'NO_DATA': 15,
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
                'dbw_ford_msgs.msg.Wiper')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wiper
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wiper
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wiper
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wiper
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wiper

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OFF': cls.__constants['OFF'],
            'AUTO_OFF': cls.__constants['AUTO_OFF'],
            'OFF_MOVING': cls.__constants['OFF_MOVING'],
            'MANUAL_OFF': cls.__constants['MANUAL_OFF'],
            'MANUAL_ON': cls.__constants['MANUAL_ON'],
            'MANUAL_LOW': cls.__constants['MANUAL_LOW'],
            'MANUAL_HIGH': cls.__constants['MANUAL_HIGH'],
            'MIST_FLICK': cls.__constants['MIST_FLICK'],
            'WASH': cls.__constants['WASH'],
            'AUTO_LOW': cls.__constants['AUTO_LOW'],
            'AUTO_HIGH': cls.__constants['AUTO_HIGH'],
            'COURTESYWIPE': cls.__constants['COURTESYWIPE'],
            'AUTO_ADJUST': cls.__constants['AUTO_ADJUST'],
            'RESERVED': cls.__constants['RESERVED'],
            'STALLED': cls.__constants['STALLED'],
            'NO_DATA': cls.__constants['NO_DATA'],
        }

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_Wiper.__constants['OFF']

    @property
    def AUTO_OFF(self):
        """Message constant 'AUTO_OFF'."""
        return Metaclass_Wiper.__constants['AUTO_OFF']

    @property
    def OFF_MOVING(self):
        """Message constant 'OFF_MOVING'."""
        return Metaclass_Wiper.__constants['OFF_MOVING']

    @property
    def MANUAL_OFF(self):
        """Message constant 'MANUAL_OFF'."""
        return Metaclass_Wiper.__constants['MANUAL_OFF']

    @property
    def MANUAL_ON(self):
        """Message constant 'MANUAL_ON'."""
        return Metaclass_Wiper.__constants['MANUAL_ON']

    @property
    def MANUAL_LOW(self):
        """Message constant 'MANUAL_LOW'."""
        return Metaclass_Wiper.__constants['MANUAL_LOW']

    @property
    def MANUAL_HIGH(self):
        """Message constant 'MANUAL_HIGH'."""
        return Metaclass_Wiper.__constants['MANUAL_HIGH']

    @property
    def MIST_FLICK(self):
        """Message constant 'MIST_FLICK'."""
        return Metaclass_Wiper.__constants['MIST_FLICK']

    @property
    def WASH(self):
        """Message constant 'WASH'."""
        return Metaclass_Wiper.__constants['WASH']

    @property
    def AUTO_LOW(self):
        """Message constant 'AUTO_LOW'."""
        return Metaclass_Wiper.__constants['AUTO_LOW']

    @property
    def AUTO_HIGH(self):
        """Message constant 'AUTO_HIGH'."""
        return Metaclass_Wiper.__constants['AUTO_HIGH']

    @property
    def COURTESYWIPE(self):
        """Message constant 'COURTESYWIPE'."""
        return Metaclass_Wiper.__constants['COURTESYWIPE']

    @property
    def AUTO_ADJUST(self):
        """Message constant 'AUTO_ADJUST'."""
        return Metaclass_Wiper.__constants['AUTO_ADJUST']

    @property
    def RESERVED(self):
        """Message constant 'RESERVED'."""
        return Metaclass_Wiper.__constants['RESERVED']

    @property
    def STALLED(self):
        """Message constant 'STALLED'."""
        return Metaclass_Wiper.__constants['STALLED']

    @property
    def NO_DATA(self):
        """Message constant 'NO_DATA'."""
        return Metaclass_Wiper.__constants['NO_DATA']


class Wiper(metaclass=Metaclass_Wiper):
    """
    Message class 'Wiper'.

    Constants:
      OFF
      AUTO_OFF
      OFF_MOVING
      MANUAL_OFF
      MANUAL_ON
      MANUAL_LOW
      MANUAL_HIGH
      MIST_FLICK
      WASH
      AUTO_LOW
      AUTO_HIGH
      COURTESYWIPE
      AUTO_ADJUST
      RESERVED
      STALLED
      NO_DATA
    """

    __slots__ = [
        '_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'uint8',
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
        self.status = kwargs.get('status', int())

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
