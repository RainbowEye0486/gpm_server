# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gpm_interfaces:srv/ConveyerReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConveyerReport_Request(type):
    """Metaclass of message 'ConveyerReport_Request'."""

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
                'gpm_interfaces.srv.ConveyerReport_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__conveyer_report__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__conveyer_report__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__conveyer_report__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__conveyer_report__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__conveyer_report__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConveyerReport_Request(metaclass=Metaclass_ConveyerReport_Request):
    """Message class 'ConveyerReport_Request'."""

    __slots__ = [
        '_id',
        '_empty',
        '_wafer_num',
    ]

    _fields_and_field_types = {
        'id': 'int64',
        'empty': 'boolean',
        'wafer_num': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.empty = kwargs.get('empty', bool())
        self.wafer_num = kwargs.get('wafer_num', int())

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
        if self.id != other.id:
            return False
        if self.empty != other.empty:
            return False
        if self.wafer_num != other.wafer_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._id = value

    @property
    def empty(self):
        """Message field 'empty'."""
        return self._empty

    @empty.setter
    def empty(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'empty' field must be of type 'bool'"
        self._empty = value

    @property
    def wafer_num(self):
        """Message field 'wafer_num'."""
        return self._wafer_num

    @wafer_num.setter
    def wafer_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wafer_num' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'wafer_num' field must be an integer in [-128, 127]"
        self._wafer_num = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ConveyerReport_Response(type):
    """Metaclass of message 'ConveyerReport_Response'."""

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
                'gpm_interfaces.srv.ConveyerReport_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__conveyer_report__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__conveyer_report__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__conveyer_report__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__conveyer_report__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__conveyer_report__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConveyerReport_Response(metaclass=Metaclass_ConveyerReport_Response):
    """Message class 'ConveyerReport_Response'."""

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


class Metaclass_ConveyerReport(type):
    """Metaclass of service 'ConveyerReport'."""

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
                'gpm_interfaces.srv.ConveyerReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__conveyer_report

            from gpm_interfaces.srv import _conveyer_report
            if _conveyer_report.Metaclass_ConveyerReport_Request._TYPE_SUPPORT is None:
                _conveyer_report.Metaclass_ConveyerReport_Request.__import_type_support__()
            if _conveyer_report.Metaclass_ConveyerReport_Response._TYPE_SUPPORT is None:
                _conveyer_report.Metaclass_ConveyerReport_Response.__import_type_support__()


class ConveyerReport(metaclass=Metaclass_ConveyerReport):
    from gpm_interfaces.srv._conveyer_report import ConveyerReport_Request as Request
    from gpm_interfaces.srv._conveyer_report import ConveyerReport_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
