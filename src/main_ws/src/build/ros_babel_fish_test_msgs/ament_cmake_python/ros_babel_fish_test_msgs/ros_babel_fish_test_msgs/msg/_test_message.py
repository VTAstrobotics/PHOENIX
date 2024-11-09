# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_babel_fish_test_msgs:msg/TestMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestMessage(type):
    """Metaclass of message 'TestMessage'."""

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
            module = import_type_support('ros_babel_fish_test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_babel_fish_test_msgs.msg.TestMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__test_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__test_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__test_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__test_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__test_message

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'I16__DEFAULT': 256,
        }

    @property
    def I16__DEFAULT(cls):
        """Return default value for message field 'i16'."""
        return 256


class TestMessage(metaclass=Metaclass_TestMessage):
    """Message class 'TestMessage'."""

    __slots__ = [
        '_header',
        '_b',
        '_ui8',
        '_ui16',
        '_ui32',
        '_ui64',
        '_i8',
        '_i16',
        '_i32',
        '_i64',
        '_f32',
        '_f64',
        '_str',
        '_bounded_str',
        '_t',
        '_d',
        '_point_arr',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'b': 'boolean',
        'ui8': 'uint8',
        'ui16': 'uint16',
        'ui32': 'uint32',
        'ui64': 'uint64',
        'i8': 'int8',
        'i16': 'int16',
        'i32': 'int32',
        'i64': 'int64',
        'f32': 'float',
        'f64': 'double',
        'str': 'string',
        'bounded_str': 'string<12>',
        't': 'builtin_interfaces/Time',
        'd': 'builtin_interfaces/Duration',
        'point_arr': 'sequence<geometry_msgs/Point>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BoundedString(12),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.b = kwargs.get('b', bool())
        self.ui8 = kwargs.get('ui8', int())
        self.ui16 = kwargs.get('ui16', int())
        self.ui32 = kwargs.get('ui32', int())
        self.ui64 = kwargs.get('ui64', int())
        self.i8 = kwargs.get('i8', int())
        self.i16 = kwargs.get(
            'i16', TestMessage.I16__DEFAULT)
        self.i32 = kwargs.get('i32', int())
        self.i64 = kwargs.get('i64', int())
        self.f32 = kwargs.get('f32', float())
        self.f64 = kwargs.get('f64', float())
        self.str = kwargs.get('str', str())
        self.bounded_str = kwargs.get('bounded_str', str())
        from builtin_interfaces.msg import Time
        self.t = kwargs.get('t', Time())
        from builtin_interfaces.msg import Duration
        self.d = kwargs.get('d', Duration())
        self.point_arr = kwargs.get('point_arr', [])

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
        if self.b != other.b:
            return False
        if self.ui8 != other.ui8:
            return False
        if self.ui16 != other.ui16:
            return False
        if self.ui32 != other.ui32:
            return False
        if self.ui64 != other.ui64:
            return False
        if self.i8 != other.i8:
            return False
        if self.i16 != other.i16:
            return False
        if self.i32 != other.i32:
            return False
        if self.i64 != other.i64:
            return False
        if self.f32 != other.f32:
            return False
        if self.f64 != other.f64:
            return False
        if self.str != other.str:
            return False
        if self.bounded_str != other.bounded_str:
            return False
        if self.t != other.t:
            return False
        if self.d != other.d:
            return False
        if self.point_arr != other.point_arr:
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
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'b' field must be of type 'bool'"
        self._b = value

    @builtins.property
    def ui8(self):
        """Message field 'ui8'."""
        return self._ui8

    @ui8.setter
    def ui8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ui8' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ui8' field must be an unsigned integer in [0, 255]"
        self._ui8 = value

    @builtins.property
    def ui16(self):
        """Message field 'ui16'."""
        return self._ui16

    @ui16.setter
    def ui16(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ui16' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ui16' field must be an unsigned integer in [0, 65535]"
        self._ui16 = value

    @builtins.property
    def ui32(self):
        """Message field 'ui32'."""
        return self._ui32

    @ui32.setter
    def ui32(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ui32' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ui32' field must be an unsigned integer in [0, 4294967295]"
        self._ui32 = value

    @builtins.property
    def ui64(self):
        """Message field 'ui64'."""
        return self._ui64

    @ui64.setter
    def ui64(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ui64' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ui64' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ui64 = value

    @builtins.property
    def i8(self):
        """Message field 'i8'."""
        return self._i8

    @i8.setter
    def i8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i8' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'i8' field must be an integer in [-128, 127]"
        self._i8 = value

    @builtins.property
    def i16(self):
        """Message field 'i16'."""
        return self._i16

    @i16.setter
    def i16(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i16' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'i16' field must be an integer in [-32768, 32767]"
        self._i16 = value

    @builtins.property
    def i32(self):
        """Message field 'i32'."""
        return self._i32

    @i32.setter
    def i32(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i32' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'i32' field must be an integer in [-2147483648, 2147483647]"
        self._i32 = value

    @builtins.property
    def i64(self):
        """Message field 'i64'."""
        return self._i64

    @i64.setter
    def i64(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i64' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'i64' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._i64 = value

    @builtins.property
    def f32(self):
        """Message field 'f32'."""
        return self._f32

    @f32.setter
    def f32(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f32' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f32' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f32 = value

    @builtins.property
    def f64(self):
        """Message field 'f64'."""
        return self._f64

    @f64.setter
    def f64(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f64' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'f64' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._f64 = value

    @builtins.property  # noqa: A003
    def str(self):  # noqa: A003
        """Message field 'str'."""
        return self._str

    @str.setter  # noqa: A003
    def str(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'str' field must be of type 'str'"
        self._str = value

    @builtins.property
    def bounded_str(self):
        """Message field 'bounded_str'."""
        return self._bounded_str

    @bounded_str.setter
    def bounded_str(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 12), \
                "The 'bounded_str' field must be string value " \
                'not longer than 12'
        self._bounded_str = value

    @builtins.property
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 't' field must be a sub message of type 'Time'"
        self._t = value

    @builtins.property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'd' field must be a sub message of type 'Duration'"
        self._d = value

    @builtins.property
    def point_arr(self):
        """Message field 'point_arr'."""
        return self._point_arr

    @point_arr.setter
    def point_arr(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'point_arr' field must be a set or sequence and each value of type 'Point'"
        self._point_arr = value
