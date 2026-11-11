# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/FuelLevelReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FuelLevelReport(type):
    """Metaclass of message 'FuelLevelReport'."""

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
                'dbw_ford_msgs.msg.FuelLevelReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fuel_level_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fuel_level_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fuel_level_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fuel_level_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fuel_level_report

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


class FuelLevelReport(metaclass=Metaclass_FuelLevelReport):
    """Message class 'FuelLevelReport'."""

    __slots__ = [
        '_header',
        '_fuel_level',
        '_battery_12v',
        '_battery_hev',
        '_odometer',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'fuel_level': 'float',
        'battery_12v': 'float',
        'battery_hev': 'float',
        'odometer': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.fuel_level = kwargs.get('fuel_level', float())
        self.battery_12v = kwargs.get('battery_12v', float())
        self.battery_hev = kwargs.get('battery_hev', float())
        self.odometer = kwargs.get('odometer', float())

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
        if self.header != other.header:
            return False
        if self.fuel_level != other.fuel_level:
            return False
        if self.battery_12v != other.battery_12v:
            return False
        if self.battery_hev != other.battery_hev:
            return False
        if self.odometer != other.odometer:
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
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def fuel_level(self):
        """Message field 'fuel_level'."""
        return self._fuel_level

    @fuel_level.setter
    def fuel_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_level = value

    @builtins.property
    def battery_12v(self):
        """Message field 'battery_12v'."""
        return self._battery_12v

    @battery_12v.setter
    def battery_12v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_12v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_12v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_12v = value

    @builtins.property
    def battery_hev(self):
        """Message field 'battery_hev'."""
        return self._battery_hev

    @battery_hev.setter
    def battery_hev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_hev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_hev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_hev = value

    @builtins.property
    def odometer(self):
        """Message field 'odometer'."""
        return self._odometer

    @odometer.setter
    def odometer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odometer' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odometer' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odometer = value
