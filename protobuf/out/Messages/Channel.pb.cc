// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Messages/Channel.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Messages/Channel.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* ClassStartParam_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClassStartParam_reflection_ = NULL;
const ::google::protobuf::Descriptor* ClassResultParam_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClassResultParam_reflection_ = NULL;
const ::google::protobuf::Descriptor* Channel_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Channel_reflection_ = NULL;
struct ChannelOneofInstance {
  const ::ClassStartParam* startparam_;
  const ::ClassResultParam* resultparam_;
}* Channel_default_oneof_instance_ = NULL;

}  // namespace


void protobuf_AssignDesc_Messages_2fChannel_2eproto() {
  protobuf_AddDesc_Messages_2fChannel_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Messages/Channel.proto");
  GOOGLE_CHECK(file != NULL);
  ClassStartParam_descriptor_ = file->message_type(0);
  static const int ClassStartParam_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassStartParam, webstie_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassStartParam, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassStartParam, password_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassStartParam, classid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassStartParam, uniqueid_),
  };
  ClassStartParam_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClassStartParam_descriptor_,
      ClassStartParam::default_instance_,
      ClassStartParam_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassStartParam, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassStartParam, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClassStartParam));
  ClassResultParam_descriptor_ = file->message_type(1);
  static const int ClassResultParam_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassResultParam, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassResultParam, ip_),
  };
  ClassResultParam_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClassResultParam_descriptor_,
      ClassResultParam::default_instance_,
      ClassResultParam_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassResultParam, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClassResultParam, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClassResultParam));
  Channel_descriptor_ = file->message_type(2);
  static const int Channel_offsets_[3] = {
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Channel_default_oneof_instance_, startparam_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(Channel_default_oneof_instance_, resultparam_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Channel, body_),
  };
  Channel_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Channel_descriptor_,
      Channel::default_instance_,
      Channel_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Channel, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Channel, _unknown_fields_),
      -1,
      Channel_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Channel, _oneof_case_[0]),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Channel));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Messages_2fChannel_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClassStartParam_descriptor_, &ClassStartParam::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClassResultParam_descriptor_, &ClassResultParam::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Channel_descriptor_, &Channel::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Messages_2fChannel_2eproto() {
  delete ClassStartParam::default_instance_;
  delete ClassStartParam_reflection_;
  delete ClassResultParam::default_instance_;
  delete ClassResultParam_reflection_;
  delete Channel::default_instance_;
  delete Channel_default_oneof_instance_;
  delete Channel_reflection_;
}

void protobuf_AddDesc_Messages_2fChannel_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026Messages/Channel.proto\"e\n\017ClassStartPa"
    "ram\022\017\n\007webstie\030\001 \001(\t\022\014\n\004name\030\002 \001(\t\022\020\n\010pa"
    "ssword\030\003 \001(\t\022\017\n\007classid\030\004 \001(\t\022\020\n\010uniquei"
    "d\030\005 \001(\t\",\n\020ClassResultParam\022\014\n\004port\030\001 \001("
    "\005\022\n\n\002ip\030\002 \001(\t\"c\n\007Channel\022&\n\nstartParam\030\001"
    " \001(\0132\020.ClassStartParamH\000\022(\n\013resultParam\030"
    "\002 \001(\0132\021.ClassResultParamH\000B\006\n\004body", 274);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Messages/Channel.proto", &protobuf_RegisterTypes);
  ClassStartParam::default_instance_ = new ClassStartParam();
  ClassResultParam::default_instance_ = new ClassResultParam();
  Channel::default_instance_ = new Channel();
  Channel_default_oneof_instance_ = new ChannelOneofInstance;
  ClassStartParam::default_instance_->InitAsDefaultInstance();
  ClassResultParam::default_instance_->InitAsDefaultInstance();
  Channel::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Messages_2fChannel_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Messages_2fChannel_2eproto {
  StaticDescriptorInitializer_Messages_2fChannel_2eproto() {
    protobuf_AddDesc_Messages_2fChannel_2eproto();
  }
} static_descriptor_initializer_Messages_2fChannel_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ClassStartParam::kWebstieFieldNumber;
const int ClassStartParam::kNameFieldNumber;
const int ClassStartParam::kPasswordFieldNumber;
const int ClassStartParam::kClassidFieldNumber;
const int ClassStartParam::kUniqueidFieldNumber;
#endif  // !_MSC_VER

ClassStartParam::ClassStartParam()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ClassStartParam)
}

void ClassStartParam::InitAsDefaultInstance() {
}

ClassStartParam::ClassStartParam(const ClassStartParam& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ClassStartParam)
}

void ClassStartParam::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  webstie_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  classid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uniqueid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClassStartParam::~ClassStartParam() {
  // @@protoc_insertion_point(destructor:ClassStartParam)
  SharedDtor();
}

void ClassStartParam::SharedDtor() {
  if (webstie_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete webstie_;
  }
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (classid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete classid_;
  }
  if (uniqueid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete uniqueid_;
  }
  if (this != default_instance_) {
  }
}

void ClassStartParam::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClassStartParam::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClassStartParam_descriptor_;
}

const ClassStartParam& ClassStartParam::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2fChannel_2eproto();
  return *default_instance_;
}

ClassStartParam* ClassStartParam::default_instance_ = NULL;

ClassStartParam* ClassStartParam::New() const {
  return new ClassStartParam;
}

void ClassStartParam::Clear() {
  if (_has_bits_[0 / 32] & 31) {
    if (has_webstie()) {
      if (webstie_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        webstie_->clear();
      }
    }
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        password_->clear();
      }
    }
    if (has_classid()) {
      if (classid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        classid_->clear();
      }
    }
    if (has_uniqueid()) {
      if (uniqueid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        uniqueid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClassStartParam::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ClassStartParam)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string webstie = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_webstie()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->webstie().data(), this->webstie().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "webstie");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_password;
        break;
      }

      // optional string password = 3;
      case 3: {
        if (tag == 26) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "password");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_classid;
        break;
      }

      // optional string classid = 4;
      case 4: {
        if (tag == 34) {
         parse_classid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_classid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->classid().data(), this->classid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "classid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_uniqueid;
        break;
      }

      // optional string uniqueid = 5;
      case 5: {
        if (tag == 42) {
         parse_uniqueid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uniqueid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->uniqueid().data(), this->uniqueid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "uniqueid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ClassStartParam)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ClassStartParam)
  return false;
#undef DO_
}

void ClassStartParam::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ClassStartParam)
  // optional string webstie = 1;
  if (has_webstie()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->webstie().data(), this->webstie().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "webstie");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->webstie(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional string password = 3;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "password");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->password(), output);
  }

  // optional string classid = 4;
  if (has_classid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->classid().data(), this->classid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "classid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->classid(), output);
  }

  // optional string uniqueid = 5;
  if (has_uniqueid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uniqueid().data(), this->uniqueid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "uniqueid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->uniqueid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ClassStartParam)
}

::google::protobuf::uint8* ClassStartParam::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ClassStartParam)
  // optional string webstie = 1;
  if (has_webstie()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->webstie().data(), this->webstie().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "webstie");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->webstie(), target);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional string password = 3;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "password");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->password(), target);
  }

  // optional string classid = 4;
  if (has_classid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->classid().data(), this->classid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "classid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->classid(), target);
  }

  // optional string uniqueid = 5;
  if (has_uniqueid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uniqueid().data(), this->uniqueid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "uniqueid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->uniqueid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClassStartParam)
  return target;
}

int ClassStartParam::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string webstie = 1;
    if (has_webstie()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->webstie());
    }

    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string password = 3;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

    // optional string classid = 4;
    if (has_classid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->classid());
    }

    // optional string uniqueid = 5;
    if (has_uniqueid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->uniqueid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClassStartParam::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClassStartParam* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClassStartParam*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClassStartParam::MergeFrom(const ClassStartParam& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_webstie()) {
      set_webstie(from.webstie());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
    if (from.has_classid()) {
      set_classid(from.classid());
    }
    if (from.has_uniqueid()) {
      set_uniqueid(from.uniqueid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClassStartParam::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClassStartParam::CopyFrom(const ClassStartParam& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClassStartParam::IsInitialized() const {

  return true;
}

void ClassStartParam::Swap(ClassStartParam* other) {
  if (other != this) {
    std::swap(webstie_, other->webstie_);
    std::swap(name_, other->name_);
    std::swap(password_, other->password_);
    std::swap(classid_, other->classid_);
    std::swap(uniqueid_, other->uniqueid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClassStartParam::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClassStartParam_descriptor_;
  metadata.reflection = ClassStartParam_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ClassResultParam::kPortFieldNumber;
const int ClassResultParam::kIpFieldNumber;
#endif  // !_MSC_VER

ClassResultParam::ClassResultParam()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ClassResultParam)
}

void ClassResultParam::InitAsDefaultInstance() {
}

ClassResultParam::ClassResultParam(const ClassResultParam& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ClassResultParam)
}

void ClassResultParam::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  port_ = 0;
  ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClassResultParam::~ClassResultParam() {
  // @@protoc_insertion_point(destructor:ClassResultParam)
  SharedDtor();
}

void ClassResultParam::SharedDtor() {
  if (ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ip_;
  }
  if (this != default_instance_) {
  }
}

void ClassResultParam::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClassResultParam::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClassResultParam_descriptor_;
}

const ClassResultParam& ClassResultParam::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2fChannel_2eproto();
  return *default_instance_;
}

ClassResultParam* ClassResultParam::default_instance_ = NULL;

ClassResultParam* ClassResultParam::New() const {
  return new ClassResultParam;
}

void ClassResultParam::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    port_ = 0;
    if (has_ip()) {
      if (ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        ip_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClassResultParam::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ClassResultParam)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 port = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ip;
        break;
      }

      // optional string ip = 2;
      case 2: {
        if (tag == 18) {
         parse_ip:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ip");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ClassResultParam)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ClassResultParam)
  return false;
#undef DO_
}

void ClassResultParam::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ClassResultParam)
  // optional int32 port = 1;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->port(), output);
  }

  // optional string ip = 2;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->ip(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ClassResultParam)
}

::google::protobuf::uint8* ClassResultParam::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ClassResultParam)
  // optional int32 port = 1;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->port(), target);
  }

  // optional string ip = 2;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->ip(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ClassResultParam)
  return target;
}

int ClassResultParam::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 port = 1;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->port());
    }

    // optional string ip = 2;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ip());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClassResultParam::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClassResultParam* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClassResultParam*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClassResultParam::MergeFrom(const ClassResultParam& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_ip()) {
      set_ip(from.ip());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClassResultParam::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClassResultParam::CopyFrom(const ClassResultParam& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClassResultParam::IsInitialized() const {

  return true;
}

void ClassResultParam::Swap(ClassResultParam* other) {
  if (other != this) {
    std::swap(port_, other->port_);
    std::swap(ip_, other->ip_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClassResultParam::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClassResultParam_descriptor_;
  metadata.reflection = ClassResultParam_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Channel::kStartParamFieldNumber;
const int Channel::kResultParamFieldNumber;
#endif  // !_MSC_VER

Channel::Channel()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Channel)
}

void Channel::InitAsDefaultInstance() {
  Channel_default_oneof_instance_->startparam_ = const_cast< ::ClassStartParam*>(&::ClassStartParam::default_instance());
  Channel_default_oneof_instance_->resultparam_ = const_cast< ::ClassResultParam*>(&::ClassResultParam::default_instance());
}

Channel::Channel(const Channel& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Channel)
}

void Channel::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  clear_has_body();
}

Channel::~Channel() {
  // @@protoc_insertion_point(destructor:Channel)
  SharedDtor();
}

void Channel::SharedDtor() {
  if (has_body()) {
    clear_body();
  }
  if (this != default_instance_) {
  }
}

void Channel::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Channel::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Channel_descriptor_;
}

const Channel& Channel::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2fChannel_2eproto();
  return *default_instance_;
}

Channel* Channel::default_instance_ = NULL;

Channel* Channel::New() const {
  return new Channel;
}

void Channel::clear_body() {
  switch(body_case()) {
    case kStartParam: {
      delete body_.startparam_;
      break;
    }
    case kResultParam: {
      delete body_.resultparam_;
      break;
    }
    case BODY_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = BODY_NOT_SET;
}


void Channel::Clear() {
  clear_body();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Channel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Channel)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .ClassStartParam startParam = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_startparam()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_resultParam;
        break;
      }

      // optional .ClassResultParam resultParam = 2;
      case 2: {
        if (tag == 18) {
         parse_resultParam:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_resultparam()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Channel)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Channel)
  return false;
#undef DO_
}

void Channel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Channel)
  // optional .ClassStartParam startParam = 1;
  if (has_startparam()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->startparam(), output);
  }

  // optional .ClassResultParam resultParam = 2;
  if (has_resultparam()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->resultparam(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Channel)
}

::google::protobuf::uint8* Channel::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Channel)
  // optional .ClassStartParam startParam = 1;
  if (has_startparam()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->startparam(), target);
  }

  // optional .ClassResultParam resultParam = 2;
  if (has_resultparam()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->resultparam(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Channel)
  return target;
}

int Channel::ByteSize() const {
  int total_size = 0;

  switch (body_case()) {
    // optional .ClassStartParam startParam = 1;
    case kStartParam: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->startparam());
      break;
    }
    // optional .ClassResultParam resultParam = 2;
    case kResultParam: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->resultparam());
      break;
    }
    case BODY_NOT_SET: {
      break;
    }
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Channel::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Channel* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Channel*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Channel::MergeFrom(const Channel& from) {
  GOOGLE_CHECK_NE(&from, this);
  switch (from.body_case()) {
    case kStartParam: {
      mutable_startparam()->::ClassStartParam::MergeFrom(from.startparam());
      break;
    }
    case kResultParam: {
      mutable_resultparam()->::ClassResultParam::MergeFrom(from.resultparam());
      break;
    }
    case BODY_NOT_SET: {
      break;
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Channel::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Channel::CopyFrom(const Channel& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Channel::IsInitialized() const {

  return true;
}

void Channel::Swap(Channel* other) {
  if (other != this) {
    std::swap(body_, other->body_);
    std::swap(_oneof_case_[0], other->_oneof_case_[0]);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Channel::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Channel_descriptor_;
  metadata.reflection = Channel_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
