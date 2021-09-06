# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gpm_interfaces:srv/AmmrReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AmmrReport_Request(type):
    """Metaclass of message 'AmmrReport_Request'."""

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
                'gpm_interfaces.srv.AmmrReport_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ammr_report__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ammr_report__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ammr_report__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ammr_report__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ammr_report__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AmmrReport_Request(metaclass=Metaclass_AmmrReport_Request):
    """Message class 'AmmrReport_Request'."""

    __slots__ = [
        '_slot1',
        '_slot2',
        '_position',
    ]

    _fields_and_field_types = {
        'slot1': 'int64',
        'slot2': 'int64',
        'position': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.slot1 = kwargs.get('slot1', int())
        self.slot2 = kwargs.get('slot2', int())
        self.position = kwargs.get('position', str())

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
        if self.slot1 != other.slot1:
            return False
        if self.slot2 != other.slot2:
            return False
        if self.position != other.position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def slot1(self):
        """Message field 'slot1'."""
        return self._slot1

    @slot1.setter
    def slot1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slot1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'slot1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._slot1 = value

    @property
    def slot2(self):
        """Message field 'slot2'."""
        return self._slot2

    @slot2.setter
    def slot2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slot2' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'slot2' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._slot2 = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'position' field must be of type 'str'"
        self._position = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_AmmrReport_Response(type):
    """Metaclass of message 'AmmrReport_Response'."""

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
                'gpm_interfaces.srv.AmmrReport_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ammr_report__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ammr_report__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ammr_report__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ammr_report__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ammr_report__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AmmrReport_Response(metaclass=Metaclass_AmmrReport_Response):
    """Message class 'AmmrReport_Response'."""

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


class Metaclass_AmmrReport(type):
    """Metaclass of service 'AmmrReport'."""

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
                'gpm_interfaces.srv.AmmrReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ammr_report

            from gpm_interfaces.srv import _ammr_report
            if _ammr_report.Metaclass_AmmrReport_Request._TYPE_SUPPORT is None:
                _ammr_report.Metaclass_AmmrReport_Request.__import_type_support__()
            if _ammr_report.Metaclass_AmmrReport_Response._TYPE_SUPPORT is None:
                _ammr_report.Metaclass_AmmrReport_Response.__import_type_support__()


class AmmrReport(metaclass=Metaclass_AmmrReport):
    from gpm_interfaces.srv._ammr_report import AmmrReport_Request as Request
    from gpm_interfaces.srv._ammr_report import AmmrReport_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
