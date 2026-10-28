# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/WatchdogCounter.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WatchdogCounter(type):
    """Metaclass of message 'WatchdogCounter'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'OTHER_BRAKE': 1,
        'OTHER_THROTTLE': 2,
        'OTHER_STEERING': 3,
        'BRAKE_COUNTER': 4,
        'BRAKE_DISABLED': 5,
        'BRAKE_COMMAND': 6,
        'BRAKE_REPORT': 7,
        'THROTTLE_COUNTER': 8,
        'THROTTLE_DISABLED': 9,
        'THROTTLE_COMMAND': 10,
        'THROTTLE_REPORT': 11,
        'STEERING_COUNTER': 12,
        'STEERING_DISABLED': 13,
        'STEERING_COMMAND': 14,
        'STEERING_REPORT': 15,
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
                'dbw_ford_msgs.msg.WatchdogCounter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__watchdog_counter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__watchdog_counter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__watchdog_counter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__watchdog_counter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__watchdog_counter

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'OTHER_BRAKE': cls.__constants['OTHER_BRAKE'],
            'OTHER_THROTTLE': cls.__constants['OTHER_THROTTLE'],
            'OTHER_STEERING': cls.__constants['OTHER_STEERING'],
            'BRAKE_COUNTER': cls.__constants['BRAKE_COUNTER'],
            'BRAKE_DISABLED': cls.__constants['BRAKE_DISABLED'],
            'BRAKE_COMMAND': cls.__constants['BRAKE_COMMAND'],
            'BRAKE_REPORT': cls.__constants['BRAKE_REPORT'],
            'THROTTLE_COUNTER': cls.__constants['THROTTLE_COUNTER'],
            'THROTTLE_DISABLED': cls.__constants['THROTTLE_DISABLED'],
            'THROTTLE_COMMAND': cls.__constants['THROTTLE_COMMAND'],
            'THROTTLE_REPORT': cls.__constants['THROTTLE_REPORT'],
            'STEERING_COUNTER': cls.__constants['STEERING_COUNTER'],
            'STEERING_DISABLED': cls.__constants['STEERING_DISABLED'],
            'STEERING_COMMAND': cls.__constants['STEERING_COMMAND'],
            'STEERING_REPORT': cls.__constants['STEERING_REPORT'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_WatchdogCounter.__constants['NONE']

    @property
    def OTHER_BRAKE(self):
        """Message constant 'OTHER_BRAKE'."""
        return Metaclass_WatchdogCounter.__constants['OTHER_BRAKE']

    @property
    def OTHER_THROTTLE(self):
        """Message constant 'OTHER_THROTTLE'."""
        return Metaclass_WatchdogCounter.__constants['OTHER_THROTTLE']

    @property
    def OTHER_STEERING(self):
        """Message constant 'OTHER_STEERING'."""
        return Metaclass_WatchdogCounter.__constants['OTHER_STEERING']

    @property
    def BRAKE_COUNTER(self):
        """Message constant 'BRAKE_COUNTER'."""
        return Metaclass_WatchdogCounter.__constants['BRAKE_COUNTER']

    @property
    def BRAKE_DISABLED(self):
        """Message constant 'BRAKE_DISABLED'."""
        return Metaclass_WatchdogCounter.__constants['BRAKE_DISABLED']

    @property
    def BRAKE_COMMAND(self):
        """Message constant 'BRAKE_COMMAND'."""
        return Metaclass_WatchdogCounter.__constants['BRAKE_COMMAND']

    @property
    def BRAKE_REPORT(self):
        """Message constant 'BRAKE_REPORT'."""
        return Metaclass_WatchdogCounter.__constants['BRAKE_REPORT']

    @property
    def THROTTLE_COUNTER(self):
        """Message constant 'THROTTLE_COUNTER'."""
        return Metaclass_WatchdogCounter.__constants['THROTTLE_COUNTER']

    @property
    def THROTTLE_DISABLED(self):
        """Message constant 'THROTTLE_DISABLED'."""
        return Metaclass_WatchdogCounter.__constants['THROTTLE_DISABLED']

    @property
    def THROTTLE_COMMAND(self):
        """Message constant 'THROTTLE_COMMAND'."""
        return Metaclass_WatchdogCounter.__constants['THROTTLE_COMMAND']

    @property
    def THROTTLE_REPORT(self):
        """Message constant 'THROTTLE_REPORT'."""
        return Metaclass_WatchdogCounter.__constants['THROTTLE_REPORT']

    @property
    def STEERING_COUNTER(self):
        """Message constant 'STEERING_COUNTER'."""
        return Metaclass_WatchdogCounter.__constants['STEERING_COUNTER']

    @property
    def STEERING_DISABLED(self):
        """Message constant 'STEERING_DISABLED'."""
        return Metaclass_WatchdogCounter.__constants['STEERING_DISABLED']

    @property
    def STEERING_COMMAND(self):
        """Message constant 'STEERING_COMMAND'."""
        return Metaclass_WatchdogCounter.__constants['STEERING_COMMAND']

    @property
    def STEERING_REPORT(self):
        """Message constant 'STEERING_REPORT'."""
        return Metaclass_WatchdogCounter.__constants['STEERING_REPORT']


class WatchdogCounter(metaclass=Metaclass_WatchdogCounter):
    """
    Message class 'WatchdogCounter'.

    Constants:
      NONE
      OTHER_BRAKE
      OTHER_THROTTLE
      OTHER_STEERING
      BRAKE_COUNTER
      BRAKE_DISABLED
      BRAKE_COMMAND
      BRAKE_REPORT
      THROTTLE_COUNTER
      THROTTLE_DISABLED
      THROTTLE_COMMAND
      THROTTLE_REPORT
      STEERING_COUNTER
      STEERING_DISABLED
      STEERING_COMMAND
      STEERING_REPORT
    """

    __slots__ = [
        '_source',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'source': 'uint8',
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
        self.source = kwargs.get('source', int())

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
        if self.source != other.source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value
