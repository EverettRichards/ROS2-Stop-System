# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/ThrottleInfoReport.idl
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


class Metaclass_ThrottleInfoReport(type):
    """Metaclass of message 'ThrottleInfoReport'."""

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
                'dbw_ford_msgs.msg.ThrottleInfoReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__throttle_info_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__throttle_info_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__throttle_info_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__throttle_info_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__throttle_info_report

            from dbw_ford_msgs.msg import GearNum
            if GearNum.__class__._TYPE_SUPPORT is None:
                GearNum.__class__.__import_type_support__()

            from dbw_ford_msgs.msg import Ignition
            if Ignition.__class__._TYPE_SUPPORT is None:
                Ignition.__class__.__import_type_support__()

            from dbw_ford_msgs.msg import OnePedal
            if OnePedal.__class__._TYPE_SUPPORT is None:
                OnePedal.__class__.__import_type_support__()

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


class ThrottleInfoReport(metaclass=Metaclass_ThrottleInfoReport):
    """Message class 'ThrottleInfoReport'."""

    __slots__ = [
        '_header',
        '_throttle_pc',
        '_throttle_rate',
        '_throttle_pedal_qf',
        '_one_pedal',
        '_engine_rpm',
        '_gear_num',
        '_ignition',
        '_batt_curr',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'throttle_pc': 'float',
        'throttle_rate': 'float',
        'throttle_pedal_qf': 'dbw_ford_msgs/QualityFactor',
        'one_pedal': 'dbw_ford_msgs/OnePedal',
        'engine_rpm': 'float',
        'gear_num': 'dbw_ford_msgs/GearNum',
        'ignition': 'dbw_ford_msgs/Ignition',
        'batt_curr': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'QualityFactor'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'OnePedal'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'GearNum'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'Ignition'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.throttle_pc = kwargs.get('throttle_pc', float())
        self.throttle_rate = kwargs.get('throttle_rate', float())
        from dbw_ford_msgs.msg import QualityFactor
        self.throttle_pedal_qf = kwargs.get('throttle_pedal_qf', QualityFactor())
        from dbw_ford_msgs.msg import OnePedal
        self.one_pedal = kwargs.get('one_pedal', OnePedal())
        self.engine_rpm = kwargs.get('engine_rpm', float())
        from dbw_ford_msgs.msg import GearNum
        self.gear_num = kwargs.get('gear_num', GearNum())
        from dbw_ford_msgs.msg import Ignition
        self.ignition = kwargs.get('ignition', Ignition())
        self.batt_curr = kwargs.get('batt_curr', float())

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
        if self.throttle_pc != other.throttle_pc:
            return False
        if self.throttle_rate != other.throttle_rate:
            return False
        if self.throttle_pedal_qf != other.throttle_pedal_qf:
            return False
        if self.one_pedal != other.one_pedal:
            return False
        if self.engine_rpm != other.engine_rpm:
            return False
        if self.gear_num != other.gear_num:
            return False
        if self.ignition != other.ignition:
            return False
        if self.batt_curr != other.batt_curr:
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
    def throttle_pc(self):
        """Message field 'throttle_pc'."""
        return self._throttle_pc

    @throttle_pc.setter
    def throttle_pc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'throttle_pc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_pc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_pc = value

    @builtins.property
    def throttle_rate(self):
        """Message field 'throttle_rate'."""
        return self._throttle_rate

    @throttle_rate.setter
    def throttle_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'throttle_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle_rate = value

    @builtins.property
    def throttle_pedal_qf(self):
        """Message field 'throttle_pedal_qf'."""
        return self._throttle_pedal_qf

    @throttle_pedal_qf.setter
    def throttle_pedal_qf(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import QualityFactor
            assert \
                isinstance(value, QualityFactor), \
                "The 'throttle_pedal_qf' field must be a sub message of type 'QualityFactor'"
        self._throttle_pedal_qf = value

    @builtins.property
    def one_pedal(self):
        """Message field 'one_pedal'."""
        return self._one_pedal

    @one_pedal.setter
    def one_pedal(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import OnePedal
            assert \
                isinstance(value, OnePedal), \
                "The 'one_pedal' field must be a sub message of type 'OnePedal'"
        self._one_pedal = value

    @builtins.property
    def engine_rpm(self):
        """Message field 'engine_rpm'."""
        return self._engine_rpm

    @engine_rpm.setter
    def engine_rpm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'engine_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_rpm = value

    @builtins.property
    def gear_num(self):
        """Message field 'gear_num'."""
        return self._gear_num

    @gear_num.setter
    def gear_num(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import GearNum
            assert \
                isinstance(value, GearNum), \
                "The 'gear_num' field must be a sub message of type 'GearNum'"
        self._gear_num = value

    @builtins.property
    def ignition(self):
        """Message field 'ignition'."""
        return self._ignition

    @ignition.setter
    def ignition(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import Ignition
            assert \
                isinstance(value, Ignition), \
                "The 'ignition' field must be a sub message of type 'Ignition'"
        self._ignition = value

    @builtins.property
    def batt_curr(self):
        """Message field 'batt_curr'."""
        return self._batt_curr

    @batt_curr.setter
    def batt_curr(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'batt_curr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'batt_curr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._batt_curr = value
