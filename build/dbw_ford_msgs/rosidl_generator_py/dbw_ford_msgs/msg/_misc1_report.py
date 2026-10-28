# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dbw_ford_msgs:msg/Misc1Report.idl
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


class Metaclass_Misc1Report(type):
    """Metaclass of message 'Misc1Report'."""

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
                'dbw_ford_msgs.msg.Misc1Report')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__misc1_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__misc1_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__misc1_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__misc1_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__misc1_report

            from dbw_ford_msgs.msg import AmbientLight
            if AmbientLight.__class__._TYPE_SUPPORT is None:
                AmbientLight.__class__.__import_type_support__()

            from dbw_ford_msgs.msg import TurnSignal
            if TurnSignal.__class__._TYPE_SUPPORT is None:
                TurnSignal.__class__.__import_type_support__()

            from dbw_ford_msgs.msg import Wiper
            if Wiper.__class__._TYPE_SUPPORT is None:
                Wiper.__class__.__import_type_support__()

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


class Misc1Report(metaclass=Metaclass_Misc1Report):
    """Message class 'Misc1Report'."""

    __slots__ = [
        '_header',
        '_turn_signal',
        '_high_beam_headlights',
        '_wiper',
        '_ambient_light',
        '_outside_temperature',
        '_btn_cc_on',
        '_btn_cc_off',
        '_btn_cc_on_off',
        '_btn_cc_res',
        '_btn_cc_cncl',
        '_btn_cc_res_cncl',
        '_btn_cc_res_inc',
        '_btn_cc_res_dec',
        '_btn_cc_set_inc',
        '_btn_cc_set_dec',
        '_btn_cc_gap_inc',
        '_btn_cc_gap_dec',
        '_btn_la_on_off',
        '_btn_ld_ok',
        '_btn_ld_up',
        '_btn_ld_down',
        '_btn_ld_left',
        '_btn_ld_right',
        '_btn_rd_ok',
        '_btn_rd_up',
        '_btn_rd_down',
        '_btn_rd_left',
        '_btn_rd_right',
        '_btn_vol_inc',
        '_btn_vol_dec',
        '_btn_mute',
        '_btn_media',
        '_btn_prev',
        '_btn_next',
        '_btn_speak',
        '_btn_call_start',
        '_btn_call_end',
        '_fault_bus',
        '_door_driver',
        '_door_passenger',
        '_door_rear_left',
        '_door_rear_right',
        '_door_hood',
        '_door_trunk',
        '_passenger_detect',
        '_passenger_airbag',
        '_buckle_driver',
        '_buckle_passenger',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'turn_signal': 'dbw_ford_msgs/TurnSignal',
        'high_beam_headlights': 'boolean',
        'wiper': 'dbw_ford_msgs/Wiper',
        'ambient_light': 'dbw_ford_msgs/AmbientLight',
        'outside_temperature': 'float',
        'btn_cc_on': 'boolean',
        'btn_cc_off': 'boolean',
        'btn_cc_on_off': 'boolean',
        'btn_cc_res': 'boolean',
        'btn_cc_cncl': 'boolean',
        'btn_cc_res_cncl': 'boolean',
        'btn_cc_res_inc': 'boolean',
        'btn_cc_res_dec': 'boolean',
        'btn_cc_set_inc': 'boolean',
        'btn_cc_set_dec': 'boolean',
        'btn_cc_gap_inc': 'boolean',
        'btn_cc_gap_dec': 'boolean',
        'btn_la_on_off': 'boolean',
        'btn_ld_ok': 'boolean',
        'btn_ld_up': 'boolean',
        'btn_ld_down': 'boolean',
        'btn_ld_left': 'boolean',
        'btn_ld_right': 'boolean',
        'btn_rd_ok': 'boolean',
        'btn_rd_up': 'boolean',
        'btn_rd_down': 'boolean',
        'btn_rd_left': 'boolean',
        'btn_rd_right': 'boolean',
        'btn_vol_inc': 'boolean',
        'btn_vol_dec': 'boolean',
        'btn_mute': 'boolean',
        'btn_media': 'boolean',
        'btn_prev': 'boolean',
        'btn_next': 'boolean',
        'btn_speak': 'boolean',
        'btn_call_start': 'boolean',
        'btn_call_end': 'boolean',
        'fault_bus': 'boolean',
        'door_driver': 'boolean',
        'door_passenger': 'boolean',
        'door_rear_left': 'boolean',
        'door_rear_right': 'boolean',
        'door_hood': 'boolean',
        'door_trunk': 'boolean',
        'passenger_detect': 'boolean',
        'passenger_airbag': 'boolean',
        'buckle_driver': 'boolean',
        'buckle_passenger': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'TurnSignal'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'Wiper'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dbw_ford_msgs', 'msg'], 'AmbientLight'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        from dbw_ford_msgs.msg import TurnSignal
        self.turn_signal = kwargs.get('turn_signal', TurnSignal())
        self.high_beam_headlights = kwargs.get('high_beam_headlights', bool())
        from dbw_ford_msgs.msg import Wiper
        self.wiper = kwargs.get('wiper', Wiper())
        from dbw_ford_msgs.msg import AmbientLight
        self.ambient_light = kwargs.get('ambient_light', AmbientLight())
        self.outside_temperature = kwargs.get('outside_temperature', float())
        self.btn_cc_on = kwargs.get('btn_cc_on', bool())
        self.btn_cc_off = kwargs.get('btn_cc_off', bool())
        self.btn_cc_on_off = kwargs.get('btn_cc_on_off', bool())
        self.btn_cc_res = kwargs.get('btn_cc_res', bool())
        self.btn_cc_cncl = kwargs.get('btn_cc_cncl', bool())
        self.btn_cc_res_cncl = kwargs.get('btn_cc_res_cncl', bool())
        self.btn_cc_res_inc = kwargs.get('btn_cc_res_inc', bool())
        self.btn_cc_res_dec = kwargs.get('btn_cc_res_dec', bool())
        self.btn_cc_set_inc = kwargs.get('btn_cc_set_inc', bool())
        self.btn_cc_set_dec = kwargs.get('btn_cc_set_dec', bool())
        self.btn_cc_gap_inc = kwargs.get('btn_cc_gap_inc', bool())
        self.btn_cc_gap_dec = kwargs.get('btn_cc_gap_dec', bool())
        self.btn_la_on_off = kwargs.get('btn_la_on_off', bool())
        self.btn_ld_ok = kwargs.get('btn_ld_ok', bool())
        self.btn_ld_up = kwargs.get('btn_ld_up', bool())
        self.btn_ld_down = kwargs.get('btn_ld_down', bool())
        self.btn_ld_left = kwargs.get('btn_ld_left', bool())
        self.btn_ld_right = kwargs.get('btn_ld_right', bool())
        self.btn_rd_ok = kwargs.get('btn_rd_ok', bool())
        self.btn_rd_up = kwargs.get('btn_rd_up', bool())
        self.btn_rd_down = kwargs.get('btn_rd_down', bool())
        self.btn_rd_left = kwargs.get('btn_rd_left', bool())
        self.btn_rd_right = kwargs.get('btn_rd_right', bool())
        self.btn_vol_inc = kwargs.get('btn_vol_inc', bool())
        self.btn_vol_dec = kwargs.get('btn_vol_dec', bool())
        self.btn_mute = kwargs.get('btn_mute', bool())
        self.btn_media = kwargs.get('btn_media', bool())
        self.btn_prev = kwargs.get('btn_prev', bool())
        self.btn_next = kwargs.get('btn_next', bool())
        self.btn_speak = kwargs.get('btn_speak', bool())
        self.btn_call_start = kwargs.get('btn_call_start', bool())
        self.btn_call_end = kwargs.get('btn_call_end', bool())
        self.fault_bus = kwargs.get('fault_bus', bool())
        self.door_driver = kwargs.get('door_driver', bool())
        self.door_passenger = kwargs.get('door_passenger', bool())
        self.door_rear_left = kwargs.get('door_rear_left', bool())
        self.door_rear_right = kwargs.get('door_rear_right', bool())
        self.door_hood = kwargs.get('door_hood', bool())
        self.door_trunk = kwargs.get('door_trunk', bool())
        self.passenger_detect = kwargs.get('passenger_detect', bool())
        self.passenger_airbag = kwargs.get('passenger_airbag', bool())
        self.buckle_driver = kwargs.get('buckle_driver', bool())
        self.buckle_passenger = kwargs.get('buckle_passenger', bool())

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
        if self.turn_signal != other.turn_signal:
            return False
        if self.high_beam_headlights != other.high_beam_headlights:
            return False
        if self.wiper != other.wiper:
            return False
        if self.ambient_light != other.ambient_light:
            return False
        if self.outside_temperature != other.outside_temperature:
            return False
        if self.btn_cc_on != other.btn_cc_on:
            return False
        if self.btn_cc_off != other.btn_cc_off:
            return False
        if self.btn_cc_on_off != other.btn_cc_on_off:
            return False
        if self.btn_cc_res != other.btn_cc_res:
            return False
        if self.btn_cc_cncl != other.btn_cc_cncl:
            return False
        if self.btn_cc_res_cncl != other.btn_cc_res_cncl:
            return False
        if self.btn_cc_res_inc != other.btn_cc_res_inc:
            return False
        if self.btn_cc_res_dec != other.btn_cc_res_dec:
            return False
        if self.btn_cc_set_inc != other.btn_cc_set_inc:
            return False
        if self.btn_cc_set_dec != other.btn_cc_set_dec:
            return False
        if self.btn_cc_gap_inc != other.btn_cc_gap_inc:
            return False
        if self.btn_cc_gap_dec != other.btn_cc_gap_dec:
            return False
        if self.btn_la_on_off != other.btn_la_on_off:
            return False
        if self.btn_ld_ok != other.btn_ld_ok:
            return False
        if self.btn_ld_up != other.btn_ld_up:
            return False
        if self.btn_ld_down != other.btn_ld_down:
            return False
        if self.btn_ld_left != other.btn_ld_left:
            return False
        if self.btn_ld_right != other.btn_ld_right:
            return False
        if self.btn_rd_ok != other.btn_rd_ok:
            return False
        if self.btn_rd_up != other.btn_rd_up:
            return False
        if self.btn_rd_down != other.btn_rd_down:
            return False
        if self.btn_rd_left != other.btn_rd_left:
            return False
        if self.btn_rd_right != other.btn_rd_right:
            return False
        if self.btn_vol_inc != other.btn_vol_inc:
            return False
        if self.btn_vol_dec != other.btn_vol_dec:
            return False
        if self.btn_mute != other.btn_mute:
            return False
        if self.btn_media != other.btn_media:
            return False
        if self.btn_prev != other.btn_prev:
            return False
        if self.btn_next != other.btn_next:
            return False
        if self.btn_speak != other.btn_speak:
            return False
        if self.btn_call_start != other.btn_call_start:
            return False
        if self.btn_call_end != other.btn_call_end:
            return False
        if self.fault_bus != other.fault_bus:
            return False
        if self.door_driver != other.door_driver:
            return False
        if self.door_passenger != other.door_passenger:
            return False
        if self.door_rear_left != other.door_rear_left:
            return False
        if self.door_rear_right != other.door_rear_right:
            return False
        if self.door_hood != other.door_hood:
            return False
        if self.door_trunk != other.door_trunk:
            return False
        if self.passenger_detect != other.passenger_detect:
            return False
        if self.passenger_airbag != other.passenger_airbag:
            return False
        if self.buckle_driver != other.buckle_driver:
            return False
        if self.buckle_passenger != other.buckle_passenger:
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
    def turn_signal(self):
        """Message field 'turn_signal'."""
        return self._turn_signal

    @turn_signal.setter
    def turn_signal(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import TurnSignal
            assert \
                isinstance(value, TurnSignal), \
                "The 'turn_signal' field must be a sub message of type 'TurnSignal'"
        self._turn_signal = value

    @builtins.property
    def high_beam_headlights(self):
        """Message field 'high_beam_headlights'."""
        return self._high_beam_headlights

    @high_beam_headlights.setter
    def high_beam_headlights(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'high_beam_headlights' field must be of type 'bool'"
        self._high_beam_headlights = value

    @builtins.property
    def wiper(self):
        """Message field 'wiper'."""
        return self._wiper

    @wiper.setter
    def wiper(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import Wiper
            assert \
                isinstance(value, Wiper), \
                "The 'wiper' field must be a sub message of type 'Wiper'"
        self._wiper = value

    @builtins.property
    def ambient_light(self):
        """Message field 'ambient_light'."""
        return self._ambient_light

    @ambient_light.setter
    def ambient_light(self, value):
        if self._check_fields:
            from dbw_ford_msgs.msg import AmbientLight
            assert \
                isinstance(value, AmbientLight), \
                "The 'ambient_light' field must be a sub message of type 'AmbientLight'"
        self._ambient_light = value

    @builtins.property
    def outside_temperature(self):
        """Message field 'outside_temperature'."""
        return self._outside_temperature

    @outside_temperature.setter
    def outside_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'outside_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'outside_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._outside_temperature = value

    @builtins.property
    def btn_cc_on(self):
        """Message field 'btn_cc_on'."""
        return self._btn_cc_on

    @btn_cc_on.setter
    def btn_cc_on(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_on' field must be of type 'bool'"
        self._btn_cc_on = value

    @builtins.property
    def btn_cc_off(self):
        """Message field 'btn_cc_off'."""
        return self._btn_cc_off

    @btn_cc_off.setter
    def btn_cc_off(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_off' field must be of type 'bool'"
        self._btn_cc_off = value

    @builtins.property
    def btn_cc_on_off(self):
        """Message field 'btn_cc_on_off'."""
        return self._btn_cc_on_off

    @btn_cc_on_off.setter
    def btn_cc_on_off(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_on_off' field must be of type 'bool'"
        self._btn_cc_on_off = value

    @builtins.property
    def btn_cc_res(self):
        """Message field 'btn_cc_res'."""
        return self._btn_cc_res

    @btn_cc_res.setter
    def btn_cc_res(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_res' field must be of type 'bool'"
        self._btn_cc_res = value

    @builtins.property
    def btn_cc_cncl(self):
        """Message field 'btn_cc_cncl'."""
        return self._btn_cc_cncl

    @btn_cc_cncl.setter
    def btn_cc_cncl(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_cncl' field must be of type 'bool'"
        self._btn_cc_cncl = value

    @builtins.property
    def btn_cc_res_cncl(self):
        """Message field 'btn_cc_res_cncl'."""
        return self._btn_cc_res_cncl

    @btn_cc_res_cncl.setter
    def btn_cc_res_cncl(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_res_cncl' field must be of type 'bool'"
        self._btn_cc_res_cncl = value

    @builtins.property
    def btn_cc_res_inc(self):
        """Message field 'btn_cc_res_inc'."""
        return self._btn_cc_res_inc

    @btn_cc_res_inc.setter
    def btn_cc_res_inc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_res_inc' field must be of type 'bool'"
        self._btn_cc_res_inc = value

    @builtins.property
    def btn_cc_res_dec(self):
        """Message field 'btn_cc_res_dec'."""
        return self._btn_cc_res_dec

    @btn_cc_res_dec.setter
    def btn_cc_res_dec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_res_dec' field must be of type 'bool'"
        self._btn_cc_res_dec = value

    @builtins.property
    def btn_cc_set_inc(self):
        """Message field 'btn_cc_set_inc'."""
        return self._btn_cc_set_inc

    @btn_cc_set_inc.setter
    def btn_cc_set_inc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_set_inc' field must be of type 'bool'"
        self._btn_cc_set_inc = value

    @builtins.property
    def btn_cc_set_dec(self):
        """Message field 'btn_cc_set_dec'."""
        return self._btn_cc_set_dec

    @btn_cc_set_dec.setter
    def btn_cc_set_dec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_set_dec' field must be of type 'bool'"
        self._btn_cc_set_dec = value

    @builtins.property
    def btn_cc_gap_inc(self):
        """Message field 'btn_cc_gap_inc'."""
        return self._btn_cc_gap_inc

    @btn_cc_gap_inc.setter
    def btn_cc_gap_inc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_gap_inc' field must be of type 'bool'"
        self._btn_cc_gap_inc = value

    @builtins.property
    def btn_cc_gap_dec(self):
        """Message field 'btn_cc_gap_dec'."""
        return self._btn_cc_gap_dec

    @btn_cc_gap_dec.setter
    def btn_cc_gap_dec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_cc_gap_dec' field must be of type 'bool'"
        self._btn_cc_gap_dec = value

    @builtins.property
    def btn_la_on_off(self):
        """Message field 'btn_la_on_off'."""
        return self._btn_la_on_off

    @btn_la_on_off.setter
    def btn_la_on_off(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_la_on_off' field must be of type 'bool'"
        self._btn_la_on_off = value

    @builtins.property
    def btn_ld_ok(self):
        """Message field 'btn_ld_ok'."""
        return self._btn_ld_ok

    @btn_ld_ok.setter
    def btn_ld_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_ld_ok' field must be of type 'bool'"
        self._btn_ld_ok = value

    @builtins.property
    def btn_ld_up(self):
        """Message field 'btn_ld_up'."""
        return self._btn_ld_up

    @btn_ld_up.setter
    def btn_ld_up(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_ld_up' field must be of type 'bool'"
        self._btn_ld_up = value

    @builtins.property
    def btn_ld_down(self):
        """Message field 'btn_ld_down'."""
        return self._btn_ld_down

    @btn_ld_down.setter
    def btn_ld_down(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_ld_down' field must be of type 'bool'"
        self._btn_ld_down = value

    @builtins.property
    def btn_ld_left(self):
        """Message field 'btn_ld_left'."""
        return self._btn_ld_left

    @btn_ld_left.setter
    def btn_ld_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_ld_left' field must be of type 'bool'"
        self._btn_ld_left = value

    @builtins.property
    def btn_ld_right(self):
        """Message field 'btn_ld_right'."""
        return self._btn_ld_right

    @btn_ld_right.setter
    def btn_ld_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_ld_right' field must be of type 'bool'"
        self._btn_ld_right = value

    @builtins.property
    def btn_rd_ok(self):
        """Message field 'btn_rd_ok'."""
        return self._btn_rd_ok

    @btn_rd_ok.setter
    def btn_rd_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_rd_ok' field must be of type 'bool'"
        self._btn_rd_ok = value

    @builtins.property
    def btn_rd_up(self):
        """Message field 'btn_rd_up'."""
        return self._btn_rd_up

    @btn_rd_up.setter
    def btn_rd_up(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_rd_up' field must be of type 'bool'"
        self._btn_rd_up = value

    @builtins.property
    def btn_rd_down(self):
        """Message field 'btn_rd_down'."""
        return self._btn_rd_down

    @btn_rd_down.setter
    def btn_rd_down(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_rd_down' field must be of type 'bool'"
        self._btn_rd_down = value

    @builtins.property
    def btn_rd_left(self):
        """Message field 'btn_rd_left'."""
        return self._btn_rd_left

    @btn_rd_left.setter
    def btn_rd_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_rd_left' field must be of type 'bool'"
        self._btn_rd_left = value

    @builtins.property
    def btn_rd_right(self):
        """Message field 'btn_rd_right'."""
        return self._btn_rd_right

    @btn_rd_right.setter
    def btn_rd_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_rd_right' field must be of type 'bool'"
        self._btn_rd_right = value

    @builtins.property
    def btn_vol_inc(self):
        """Message field 'btn_vol_inc'."""
        return self._btn_vol_inc

    @btn_vol_inc.setter
    def btn_vol_inc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_vol_inc' field must be of type 'bool'"
        self._btn_vol_inc = value

    @builtins.property
    def btn_vol_dec(self):
        """Message field 'btn_vol_dec'."""
        return self._btn_vol_dec

    @btn_vol_dec.setter
    def btn_vol_dec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_vol_dec' field must be of type 'bool'"
        self._btn_vol_dec = value

    @builtins.property
    def btn_mute(self):
        """Message field 'btn_mute'."""
        return self._btn_mute

    @btn_mute.setter
    def btn_mute(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_mute' field must be of type 'bool'"
        self._btn_mute = value

    @builtins.property
    def btn_media(self):
        """Message field 'btn_media'."""
        return self._btn_media

    @btn_media.setter
    def btn_media(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_media' field must be of type 'bool'"
        self._btn_media = value

    @builtins.property
    def btn_prev(self):
        """Message field 'btn_prev'."""
        return self._btn_prev

    @btn_prev.setter
    def btn_prev(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_prev' field must be of type 'bool'"
        self._btn_prev = value

    @builtins.property
    def btn_next(self):
        """Message field 'btn_next'."""
        return self._btn_next

    @btn_next.setter
    def btn_next(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_next' field must be of type 'bool'"
        self._btn_next = value

    @builtins.property
    def btn_speak(self):
        """Message field 'btn_speak'."""
        return self._btn_speak

    @btn_speak.setter
    def btn_speak(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_speak' field must be of type 'bool'"
        self._btn_speak = value

    @builtins.property
    def btn_call_start(self):
        """Message field 'btn_call_start'."""
        return self._btn_call_start

    @btn_call_start.setter
    def btn_call_start(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_call_start' field must be of type 'bool'"
        self._btn_call_start = value

    @builtins.property
    def btn_call_end(self):
        """Message field 'btn_call_end'."""
        return self._btn_call_end

    @btn_call_end.setter
    def btn_call_end(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'btn_call_end' field must be of type 'bool'"
        self._btn_call_end = value

    @builtins.property
    def fault_bus(self):
        """Message field 'fault_bus'."""
        return self._fault_bus

    @fault_bus.setter
    def fault_bus(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fault_bus' field must be of type 'bool'"
        self._fault_bus = value

    @builtins.property
    def door_driver(self):
        """Message field 'door_driver'."""
        return self._door_driver

    @door_driver.setter
    def door_driver(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'door_driver' field must be of type 'bool'"
        self._door_driver = value

    @builtins.property
    def door_passenger(self):
        """Message field 'door_passenger'."""
        return self._door_passenger

    @door_passenger.setter
    def door_passenger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'door_passenger' field must be of type 'bool'"
        self._door_passenger = value

    @builtins.property
    def door_rear_left(self):
        """Message field 'door_rear_left'."""
        return self._door_rear_left

    @door_rear_left.setter
    def door_rear_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'door_rear_left' field must be of type 'bool'"
        self._door_rear_left = value

    @builtins.property
    def door_rear_right(self):
        """Message field 'door_rear_right'."""
        return self._door_rear_right

    @door_rear_right.setter
    def door_rear_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'door_rear_right' field must be of type 'bool'"
        self._door_rear_right = value

    @builtins.property
    def door_hood(self):
        """Message field 'door_hood'."""
        return self._door_hood

    @door_hood.setter
    def door_hood(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'door_hood' field must be of type 'bool'"
        self._door_hood = value

    @builtins.property
    def door_trunk(self):
        """Message field 'door_trunk'."""
        return self._door_trunk

    @door_trunk.setter
    def door_trunk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'door_trunk' field must be of type 'bool'"
        self._door_trunk = value

    @builtins.property
    def passenger_detect(self):
        """Message field 'passenger_detect'."""
        return self._passenger_detect

    @passenger_detect.setter
    def passenger_detect(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'passenger_detect' field must be of type 'bool'"
        self._passenger_detect = value

    @builtins.property
    def passenger_airbag(self):
        """Message field 'passenger_airbag'."""
        return self._passenger_airbag

    @passenger_airbag.setter
    def passenger_airbag(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'passenger_airbag' field must be of type 'bool'"
        self._passenger_airbag = value

    @builtins.property
    def buckle_driver(self):
        """Message field 'buckle_driver'."""
        return self._buckle_driver

    @buckle_driver.setter
    def buckle_driver(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'buckle_driver' field must be of type 'bool'"
        self._buckle_driver = value

    @builtins.property
    def buckle_passenger(self):
        """Message field 'buckle_passenger'."""
        return self._buckle_passenger

    @buckle_passenger.setter
    def buckle_passenger(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'buckle_passenger' field must be of type 'bool'"
        self._buckle_passenger = value
