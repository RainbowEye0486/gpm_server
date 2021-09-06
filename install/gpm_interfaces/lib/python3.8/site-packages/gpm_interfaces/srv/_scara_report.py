# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gpm_interfaces:srv/ScaraReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScaraReport_Request(type):
    """Metaclass of message 'ScaraReport_Request'."""

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
            module = import_type_support('gpm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gpm_interfaces.srv.ScaraReport_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__scara_report__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__scara_report__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__scara_report__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__scara_report__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__scara_report__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScaraReport_Request(metaclass=Metaclass_ScaraReport_Request):
    """Message class 'ScaraReport_Request'."""

    __slots__ = [
        '_action',
        '_dummy_wafer',
        '_dummy_cassette',
        '_slot_num',
        '_faild',
    ]

    _fields_and_field_types = {
        'action': 'string',
        'dummy_wafer': 'int64',
        'dummy_cassette': 'int64',
        'slot_num': 'int64',
        'faild': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', str())
        self.dummy_wafer = kwargs.get('dummy_wafer', int())
        self.dummy_cassette = kwargs.get('dummy_cassette', int())
        self.slot_num = kwargs.get('slot_num', int())
        self.faild = kwargs.get('faild', str())

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
        if self.action != other.action:
            return False
        if self.dummy_wafer != other.dummy_wafer:
            return False
        if self.dummy_cassette != other.dummy_cassette:
            return False
        if self.slot_num != other.slot_num:
            return False
        if self.faild != other.faild:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action' field must be of type 'str'"
        self._action = value

    @property
    def dummy_wafer(self):
        """Message field 'dummy_wafer'."""
        return self._dummy_wafer

    @dummy_wafer.setter
    def dummy_wafer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dummy_wafer' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'dummy_wafer' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._dummy_wafer = value

    @property
    def dummy_cassette(self):
        """Message field 'dummy_cassette'."""
        return self._dummy_cassette

    @dummy_cassette.setter
    def dummy_cassette(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dummy_cassette' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'dummy_cassette' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._dummy_cassette = value

    @property
    def slot_num(self):
        """Message field 'slot_num'."""
        return self._slot_num

    @slot_num.setter
    def slot_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slot_num' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'slot_num' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._slot_num = value

    @property
    def faild(self):
        """Message field 'faild'."""
        return self._faild

    @faild.setter
    def faild(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'faild' field must be of type 'str'"
        self._faild = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ScaraReport_Response(type):
    """Metaclass of message 'ScaraReport_Response'."""

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
            module = import_type_support('gpm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gpm_interfaces.srv.ScaraReport_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__scara_report__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__scara_report__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__scara_report__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__scara_report__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__scara_report__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScaraReport_Response(metaclass=Metaclass_ScaraReport_Response):
    """Message class 'ScaraReport_Response'."""

    __slots__ = [
        '_receive',
    ]

    _fields_and_field_types = {
        'receive': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.receive = kwargs.get('receive', bool())

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
        if self.receive != other.receive:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def receive(self):
        """Message field 'receive'."""
        return self._receive

    @receive.setter
    def receive(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'receive' field must be of type 'bool'"
        self._receive = value


class Metaclass_ScaraReport(type):
    """Metaclass of service 'ScaraReport'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gpm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gpm_interfaces.srv.ScaraReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__scara_report

            from gpm_interfaces.srv import _scara_report
            if _scara_report.Metaclass_ScaraReport_Request._TYPE_SUPPORT is None:
                _scara_report.Metaclass_ScaraReport_Request.__import_type_support__()
            if _scara_report.Metaclass_ScaraReport_Response._TYPE_SUPPORT is None:
                _scara_report.Metaclass_ScaraReport_Response.__import_type_support__()


class ScaraReport(metaclass=Metaclass_ScaraReport):
    from gpm_interfaces.srv._scara_report import ScaraReport_Request as Request
    from gpm_interfaces.srv._scara_report import ScaraReport_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
