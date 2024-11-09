# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_babel_fish_test_msgs:msg/TestArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'uint8s'
# Member 'uint32s'
# Member 'uint64s'
# Member 'int8s'
# Member 'int16s'
# Member 'int32s'
# Member 'float32s'
# Member 'float64s'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'uint16s'
# Member 'int64s'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestArray(type):
    """Metaclass of message 'TestArray'."""

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
                'ros_babel_fish_test_msgs.msg.TestArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__test_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__test_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__test_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__test_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__test_array

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from ros_babel_fish_test_msgs.msg import TestSubArray
            if TestSubArray.__class__._TYPE_SUPPORT is None:
                TestSubArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TestArray(metaclass=Metaclass_TestArray):
    """Message class 'TestArray'."""

    __slots__ = [
        '_bools',
        '_uint8s',
        '_uint16s',
        '_uint32s',
        '_uint64s',
        '_int8s',
        '_int16s',
        '_int32s',
        '_int64s',
        '_float32s',
        '_float64s',
        '_times',
        '_durations',
        '_strings',
        '_subarrays_fixed',
        '_subarrays',
    ]

    _fields_and_field_types = {
        'bools': 'sequence<boolean>',
        'uint8s': 'sequence<uint8>',
        'uint16s': 'uint16[32]',
        'uint32s': 'sequence<uint32>',
        'uint64s': 'sequence<uint64>',
        'int8s': 'sequence<int8>',
        'int16s': 'sequence<int16>',
        'int32s': 'sequence<int32>',
        'int64s': 'int64[32]',
        'float32s': 'sequence<float>',
        'float64s': 'sequence<double, 16>',
        'times': 'sequence<builtin_interfaces/Time>',
        'durations': 'builtin_interfaces/Duration[12]',
        'strings': 'sequence<string>',
        'subarrays_fixed': 'ros_babel_fish_test_msgs/TestSubArray[10]',
        'subarrays': 'sequence<ros_babel_fish_test_msgs/TestSubArray>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 32),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int64'), 32),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'), 12),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['ros_babel_fish_test_msgs', 'msg'], 'TestSubArray'), 10),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros_babel_fish_test_msgs', 'msg'], 'TestSubArray')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bools = kwargs.get('bools', [])
        self.uint8s = array.array('B', kwargs.get('uint8s', []))
        if 'uint16s' not in kwargs:
            self.uint16s = numpy.zeros(32, dtype=numpy.uint16)
        else:
            self.uint16s = numpy.array(kwargs.get('uint16s'), dtype=numpy.uint16)
            assert self.uint16s.shape == (32, )
        self.uint32s = array.array('I', kwargs.get('uint32s', []))
        self.uint64s = array.array('Q', kwargs.get('uint64s', []))
        self.int8s = array.array('b', kwargs.get('int8s', []))
        self.int16s = array.array('h', kwargs.get('int16s', []))
        self.int32s = array.array('i', kwargs.get('int32s', []))
        if 'int64s' not in kwargs:
            self.int64s = numpy.zeros(32, dtype=numpy.int64)
        else:
            self.int64s = numpy.array(kwargs.get('int64s'), dtype=numpy.int64)
            assert self.int64s.shape == (32, )
        self.float32s = array.array('f', kwargs.get('float32s', []))
        self.float64s = array.array('d', kwargs.get('float64s', []))
        self.times = kwargs.get('times', [])
        from builtin_interfaces.msg import Duration
        self.durations = kwargs.get(
            'durations',
            [Duration() for x in range(12)]
        )
        self.strings = kwargs.get('strings', [])
        from ros_babel_fish_test_msgs.msg import TestSubArray
        self.subarrays_fixed = kwargs.get(
            'subarrays_fixed',
            [TestSubArray() for x in range(10)]
        )
        self.subarrays = kwargs.get('subarrays', [])

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
        if self.bools != other.bools:
            return False
        if self.uint8s != other.uint8s:
            return False
        if all(self.uint16s != other.uint16s):
            return False
        if self.uint32s != other.uint32s:
            return False
        if self.uint64s != other.uint64s:
            return False
        if self.int8s != other.int8s:
            return False
        if self.int16s != other.int16s:
            return False
        if self.int32s != other.int32s:
            return False
        if all(self.int64s != other.int64s):
            return False
        if self.float32s != other.float32s:
            return False
        if self.float64s != other.float64s:
            return False
        if self.times != other.times:
            return False
        if self.durations != other.durations:
            return False
        if self.strings != other.strings:
            return False
        if self.subarrays_fixed != other.subarrays_fixed:
            return False
        if self.subarrays != other.subarrays:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bools(self):
        """Message field 'bools'."""
        return self._bools

    @bools.setter
    def bools(self, value):
        if __debug__:
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'bools' field must be a set or sequence and each value of type 'bool'"
        self._bools = value

    @builtins.property
    def uint8s(self):
        """Message field 'uint8s'."""
        return self._uint8s

    @uint8s.setter
    def uint8s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'uint8s' array.array() must have the type code of 'B'"
            self._uint8s = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'uint8s' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._uint8s = array.array('B', value)

    @builtins.property
    def uint16s(self):
        """Message field 'uint16s'."""
        return self._uint16s

    @uint16s.setter
    def uint16s(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'uint16s' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 32, \
                "The 'uint16s' numpy.ndarray() must have a size of 32"
            self._uint16s = value
            return
        if __debug__:
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
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'uint16s' field must be a set or sequence with length 32 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._uint16s = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def uint32s(self):
        """Message field 'uint32s'."""
        return self._uint32s

    @uint32s.setter
    def uint32s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'uint32s' array.array() must have the type code of 'I'"
            self._uint32s = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'uint32s' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._uint32s = array.array('I', value)

    @builtins.property
    def uint64s(self):
        """Message field 'uint64s'."""
        return self._uint64s

    @uint64s.setter
    def uint64s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'uint64s' array.array() must have the type code of 'Q'"
            self._uint64s = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'uint64s' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._uint64s = array.array('Q', value)

    @builtins.property
    def int8s(self):
        """Message field 'int8s'."""
        return self._int8s

    @int8s.setter
    def int8s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'int8s' array.array() must have the type code of 'b'"
            self._int8s = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'int8s' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._int8s = array.array('b', value)

    @builtins.property
    def int16s(self):
        """Message field 'int16s'."""
        return self._int16s

    @int16s.setter
    def int16s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'int16s' array.array() must have the type code of 'h'"
            self._int16s = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'int16s' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._int16s = array.array('h', value)

    @builtins.property
    def int32s(self):
        """Message field 'int32s'."""
        return self._int32s

    @int32s.setter
    def int32s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'int32s' array.array() must have the type code of 'i'"
            self._int32s = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'int32s' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._int32s = array.array('i', value)

    @builtins.property
    def int64s(self):
        """Message field 'int64s'."""
        return self._int64s

    @int64s.setter
    def int64s(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int64, \
                "The 'int64s' numpy.ndarray() must have the dtype of 'numpy.int64'"
            assert value.size == 32, \
                "The 'int64s' numpy.ndarray() must have a size of 32"
            self._int64s = value
            return
        if __debug__:
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
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'int64s' field must be a set or sequence with length 32 and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._int64s = numpy.array(value, dtype=numpy.int64)

    @builtins.property
    def float32s(self):
        """Message field 'float32s'."""
        return self._float32s

    @float32s.setter
    def float32s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'float32s' array.array() must have the type code of 'f'"
            self._float32s = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'float32s' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._float32s = array.array('f', value)

    @builtins.property
    def float64s(self):
        """Message field 'float64s'."""
        return self._float64s

    @float64s.setter
    def float64s(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'float64s' array.array() must have the type code of 'd'"
            assert len(value) <= 16, \
                "The 'float64s' array.array() must have a size <= 16"
            self._float64s = value
            return
        if __debug__:
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
                 len(value) <= 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'float64s' field must be a set or sequence with length <= 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._float64s = array.array('d', value)

    @builtins.property
    def times(self):
        """Message field 'times'."""
        return self._times

    @times.setter
    def times(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
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
                 all(isinstance(v, Time) for v in value) and
                 True), \
                "The 'times' field must be a set or sequence and each value of type 'Time'"
        self._times = value

    @builtins.property
    def durations(self):
        """Message field 'durations'."""
        return self._durations

    @durations.setter
    def durations(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
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
                 all(isinstance(v, Duration) for v in value) and
                 True), \
                "The 'durations' field must be a set or sequence with length 12 and each value of type 'Duration'"
        self._durations = value

    @builtins.property
    def strings(self):
        """Message field 'strings'."""
        return self._strings

    @strings.setter
    def strings(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'strings' field must be a set or sequence and each value of type 'str'"
        self._strings = value

    @builtins.property
    def subarrays_fixed(self):
        """Message field 'subarrays_fixed'."""
        return self._subarrays_fixed

    @subarrays_fixed.setter
    def subarrays_fixed(self, value):
        if __debug__:
            from ros_babel_fish_test_msgs.msg import TestSubArray
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
                 len(value) == 10 and
                 all(isinstance(v, TestSubArray) for v in value) and
                 True), \
                "The 'subarrays_fixed' field must be a set or sequence with length 10 and each value of type 'TestSubArray'"
        self._subarrays_fixed = value

    @builtins.property
    def subarrays(self):
        """Message field 'subarrays'."""
        return self._subarrays

    @subarrays.setter
    def subarrays(self, value):
        if __debug__:
            from ros_babel_fish_test_msgs.msg import TestSubArray
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
                 all(isinstance(v, TestSubArray) for v in value) and
                 True), \
                "The 'subarrays' field must be a set or sequence and each value of type 'TestSubArray'"
        self._subarrays = value
