# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/BrakeInfoReport.idl
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


class Metaclass_BrakeInfoReport(type):
    """Metaclass of message 'BrakeInfoReport'."""

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
                'dbw_ford_msgs.msg.BrakeInfoReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brake_info_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brake_info_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brake_info_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brake_info_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brake_info_report

            from dbw_ford_msgs.msg import HillStartAssist
            if HillStartAssist.__class__._TYPE_SUPPORT is None:
                HillStartAssist.__class__.__import_type_support__()

            from dbw_ford_msgs.msg import ParkingBrake
            if ParkingBrake.__class__._TYPE_SUPPORT is None:
                ParkingBrake.__class__.__import_type_support__()

            from dbw_ford_msgs.msg import QualityFactor
            if QualityFactor.__class__._TYPE_SUPPORT is None:
                QualityFactor.__class__.__import_type_support__()

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


class BrakeInfoReport(metaclass=Metaclass_BrakeInfoReport):
    """Message class 'BrakeInfoReport'."""

    __slots__ = [
        '_header',
        '_brake_torque_request',
        '_brake_torque_actual',
        '_wheel_torque_actual',
        '_accel_over_ground',
        '_brake_pedal_qf',
        '_hsa',
        '_abs_active',
        '_abs_enabled',
        '_stab_active',
        '_stab_enabled',
        '_trac_active',
        '_trac_enabled',
        '_parking_brake',
        '_stationary',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'brake_torque_request': 'float',
        'brake_torque_actual': 'float',
        'wheel_torque_actual': 'float',
        'accel_over_ground': 'float',
        'brake_pedal_qf': 'dbw_ford_msgs/QualityFactor',
        'hsa': 'dbw_ford_msgs/HillStartAssist',
        'abs_active': 'boolean',
        'abs_enabled': 'boolean',
        'stab_active': 'boolean',
        'stab_enabled': 'boolean',
        'trac_active': 'boolean',
        'trac_enabled': 'boolean',
        'parking_brake': 'dbw_ford_msgs/ParkingBrake',
        'stationary': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'QualityFactor'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'HillStartAssist'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'ParkingBrake'),  # noqa: E501
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
        self.brake_torque_request = kwargs.get('brake_torque_request', float())
        self.brake_torque_actual = kwargs.get('brake_torque_actual', float())
        self.wheel_torque_actual = kwargs.get('wheel_torque_actual', float())
        self.accel_over_ground = kwargs.get('accel_over_ground', float())
        from dbw_ford_msgs.msg import QualityFactor
        self.brake_pedal_qf = kwargs.get('brake_pedal_qf', QualityFactor())
        from dbw_ford_msgs.msg import HillStartAssist
        self.hsa = kwargs.get('hsa', HillStartAssist())
        self.abs_active = kwargs.get('abs_active', bool())
        self.abs_enabled = kwargs.get('abs_enabled', bool())
        self.stab_active = kwargs.get('stab_active', bool())
        self.stab_enabled = kwargs.get('stab_enabled', bool())
        self.trac_active = kwargs.get('trac_active', bool())
        self.trac_enabled = kwargs.get('trac_enabled', bool())
        from dbw_ford_msgs.msg import ParkingBrake
        self.parking_brake = kwargs.get('parking_brake', ParkingBrake())
        self.stationary = kwargs.get('stationary', bool())

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
        if self.brake_torque_request != other.brake_torque_request:
            return False
        if self.brake_torque_actual != other.brake_torque_actual:
            return False
        if self.wheel_torque_actual != other.wheel_torque_actual:
            return False
        if self.accel_over_ground != other.accel_over_ground:
            return False
        if self.brake_pedal_qf != other.brake_pedal_qf:
            return False
        if self.hsa != other.hsa:
            return False
        if self.abs_active != other.abs_active:
            return False
        if self.abs_enabled != other.abs_enabled:
            return False
        if self.stab_active != other.stab_active:
            return False
        if self.stab_enabled != other.stab_enabled:
            return False
        if self.trac_active != other.trac_active:
            return False
        if self.trac_enabled != other.trac_enabled:
            return False
        if self.parking_brake != other.parking_brake:
            return False
        if self.stationary != other.stationary:
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
    def brake_torque_request(self):
        """Message field 'brake_torque_request'."""
        return self._brake_torque_request

    @brake_torque_request.setter
    def brake_torque_request(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'brake_torque_request' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_torque_request' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_torque_request = value

    @builtins.property
    def brake_torque_actual(self):
        """Message field 'brake_torque_actual'."""
        return self._brake_torque_actual

    @brake_torque_actual.setter
    def brake_torque_actual(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'brake_torque_actual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_torque_actual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_torque_actual = value

    @builtins.property
    def wheel_torque_actual(self):
        """Message field 'wheel_torque_actual'."""
        return self._wheel_torque_actual

    @wheel_torque_actual.setter
    def wheel_torque_actual(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'wheel_torque_actual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_torque_actual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_torque_actual = value

    @builtins.property
    def accel_over_ground(self):
        """Message field 'accel_over_ground'."""
        return self._accel_over_ground

    @accel_over_ground.setter
    def accel_over_ground(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'accel_over_ground' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_over_ground' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_over_ground = value

    @builtins.property
    def brake_pedal_qf(self):
        """Message field 'brake_pedal_qf'."""
        return self._brake_pedal_qf

    @brake_pedal_qf.setter
    def brake_pedal_qf(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import QualityFactor
            assert \
                isinstance(value, QualityFactor), \
                "The 'brake_pedal_qf' field must be a sub message of type 'QualityFactor'"
        self._brake_pedal_qf = value

    @builtins.property
    def hsa(self):
        """Message field 'hsa'."""
        return self._hsa

    @hsa.setter
    def hsa(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import HillStartAssist
            assert \
                isinstance(value, HillStartAssist), \
                "The 'hsa' field must be a sub message of type 'HillStartAssist'"
        self._hsa = value

    @builtins.property
    def abs_active(self):
        """Message field 'abs_active'."""
        return self._abs_active

    @abs_active.setter
    def abs_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'abs_active' field must be of type 'bool'"
        self._abs_active = value

    @builtins.property
    def abs_enabled(self):
        """Message field 'abs_enabled'."""
        return self._abs_enabled

    @abs_enabled.setter
    def abs_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'abs_enabled' field must be of type 'bool'"
        self._abs_enabled = value

    @builtins.property
    def stab_active(self):
        """Message field 'stab_active'."""
        return self._stab_active

    @stab_active.setter
    def stab_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'stab_active' field must be of type 'bool'"
        self._stab_active = value

    @builtins.property
    def stab_enabled(self):
        """Message field 'stab_enabled'."""
        return self._stab_enabled

    @stab_enabled.setter
    def stab_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'stab_enabled' field must be of type 'bool'"
        self._stab_enabled = value

    @builtins.property
    def trac_active(self):
        """Message field 'trac_active'."""
        return self._trac_active

    @trac_active.setter
    def trac_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'trac_active' field must be of type 'bool'"
        self._trac_active = value

    @builtins.property
    def trac_enabled(self):
        """Message field 'trac_enabled'."""
        return self._trac_enabled

    @trac_enabled.setter
    def trac_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'trac_enabled' field must be of type 'bool'"
        self._trac_enabled = value

    @builtins.property
    def parking_brake(self):
        """Message field 'parking_brake'."""
        return self._parking_brake

    @parking_brake.setter
    def parking_brake(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import ParkingBrake
            assert \
                isinstance(value, ParkingBrake), \
                "The 'parking_brake' field must be a sub message of type 'ParkingBrake'"
        self._parking_brake = value

    @builtins.property
    def stationary(self):
        """Message field 'stationary'."""
        return self._stationary

    @stationary.setter
    def stationary(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'stationary' field must be of type 'bool'"
        self._stationary = value
