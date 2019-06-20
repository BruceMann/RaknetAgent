!contains(DEFINES, COMPILE_PROTOBUF_LIB) {
include (protobuf_common.pri)
} else {
PathProtobuf = $$PWD/src/google/protobuf
INCLUDEPATH += $$PWD/src
}

SOURCES +=   $$PathProtobuf/descriptor.cc \
    $$PathProtobuf/descriptor.pb.cc  \
    $$PathProtobuf/descriptor_database.cc   \
    $$PathProtobuf/dynamic_message.cc   \
    $$PathProtobuf/extension_set.cc \
    $$PathProtobuf/extension_set_heavy.cc   \
    $$PathProtobuf/generated_message_reflection.cc  \
    $$PathProtobuf/generated_message_util.cc    \
    $$PathProtobuf/message.cc   \
    $$PathProtobuf/message_lite.cc  \
    $$PathProtobuf/reflection_ops.cc    \
    $$PathProtobuf/repeated_field.cc    \
    $$PathProtobuf/service.cc   \
    $$PathProtobuf/text_format.cc   \
    $$PathProtobuf/unknown_field_set.cc \
    $$PathProtobuf/wire_format.cc   \
    $$PathProtobuf/wire_format_lite.cc  \
    $$PathProtobuf/io/coded_stream.cc    \
    $$PathProtobuf/io/gzip_stream.cc    \
    $$PathProtobuf/io/printer.cc    \
    $$PathProtobuf/io/tokenizer.cc  \
    $$PathProtobuf/io/strtod.cc  \
    $$PathProtobuf/io/zero_copy_stream.cc   \
    $$PathProtobuf/io/zero_copy_stream_impl.cc  \
    $$PathProtobuf/io/zero_copy_stream_impl_lite.cc \
    $$PathProtobuf/stubs/common.cc  \
    $$PathProtobuf/stubs/once.cc    \
    $$PathProtobuf/stubs/structurally_valid.cc  \
    $$PathProtobuf/stubs/strutil.cc \
    $$PathProtobuf/stubs/stringprintf.cc    \
    $$PathProtobuf/stubs/substitute.cc

HEADERS += $$PathProtobuf/descriptor.h \
    $$PathProtobuf/descriptor.pb.h  \
    $$PathProtobuf/descriptor_database.h   \
    $$PathProtobuf/dynamic_message.h   \
    $$PathProtobuf/extension_set.h \
    $$PathProtobuf/generated_message_reflection.h  \
    $$PathProtobuf/generated_message_util.h    \
    $$PathProtobuf/message.h   \
    $$PathProtobuf/message_lite.h  \
    $$PathProtobuf/reflection_ops.h    \
    $$PathProtobuf/package_info.h       \
    $$PathProtobuf/repeated_field.h    \
    $$PathProtobuf/service.h   \
    $$PathProtobuf/text_format.h   \
    $$PathProtobuf/unknown_field_set.h \
    $$PathProtobuf/wire_format.h   \
    $$PathProtobuf/wire_format_lite.h  \
    $$PathProtobuf/wire_format_lite_inl.h   \
    $$PathProtobuf/io/coded_stream.h    \
    $$PathProtobuf/io/strtod.h  \
    $$PathProtobuf/io/coded_stream_inl.h   \
    $$PathProtobuf/io/gzip_stream.h    \
    $$PathProtobuf/io/package_info.h    \
    $$PathProtobuf/io/printer.h    \
    $$PathProtobuf/io/tokenizer.h  \
    $$PathProtobuf/io/zero_copy_stream.h   \
    $$PathProtobuf/io/zero_copy_stream_impl.h  \
    $$PathProtobuf/io/zero_copy_stream_impl_lite.h \
    $$PathProtobuf/stubs/common.h  \
    $$PathProtobuf/stubs/once.h    \
    $$PathProtobuf/stubs/hash.h \
    $$PathProtobuf/stubs/map_util.h \
    $$PathProtobuf/stubs/stl_util.h \
    $$PathProtobuf/stubs/strutil.h \
    $$PathProtobuf/stubs/stringprintf.h    \
    $$PathProtobuf/stubs/substitute.h   \
    $$PWD/config.h
