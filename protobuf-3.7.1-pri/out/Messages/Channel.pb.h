// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Messages/Channel.proto

#ifndef PROTOBUF_INCLUDED_Messages_2fChannel_2eproto
#define PROTOBUF_INCLUDED_Messages_2fChannel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Messages_2fChannel_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_Messages_2fChannel_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_Messages_2fChannel_2eproto();
class Channel;
class ChannelDefaultTypeInternal;
extern ChannelDefaultTypeInternal _Channel_default_instance_;
class ClassResultParam;
class ClassResultParamDefaultTypeInternal;
extern ClassResultParamDefaultTypeInternal _ClassResultParam_default_instance_;
class ClassStartParam;
class ClassStartParamDefaultTypeInternal;
extern ClassStartParamDefaultTypeInternal _ClassStartParam_default_instance_;
namespace google {
namespace protobuf {
template<> ::Channel* Arena::CreateMaybeMessage<::Channel>(Arena*);
template<> ::ClassResultParam* Arena::CreateMaybeMessage<::ClassResultParam>(Arena*);
template<> ::ClassStartParam* Arena::CreateMaybeMessage<::ClassStartParam>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class ClassStartParam :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ClassStartParam) */ {
 public:
  ClassStartParam();
  virtual ~ClassStartParam();

  ClassStartParam(const ClassStartParam& from);

  inline ClassStartParam& operator=(const ClassStartParam& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ClassStartParam(ClassStartParam&& from) noexcept
    : ClassStartParam() {
    *this = ::std::move(from);
  }

  inline ClassStartParam& operator=(ClassStartParam&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ClassStartParam& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClassStartParam* internal_default_instance() {
    return reinterpret_cast<const ClassStartParam*>(
               &_ClassStartParam_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ClassStartParam* other);
  friend void swap(ClassStartParam& a, ClassStartParam& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClassStartParam* New() const final {
    return CreateMaybeMessage<ClassStartParam>(nullptr);
  }

  ClassStartParam* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ClassStartParam>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ClassStartParam& from);
  void MergeFrom(const ClassStartParam& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ClassStartParam* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string webstie = 1;
  bool has_webstie() const;
  void clear_webstie();
  static const int kWebstieFieldNumber = 1;
  const ::std::string& webstie() const;
  void set_webstie(const ::std::string& value);
  #if LANG_CXX11
  void set_webstie(::std::string&& value);
  #endif
  void set_webstie(const char* value);
  void set_webstie(const char* value, size_t size);
  ::std::string* mutable_webstie();
  ::std::string* release_webstie();
  void set_allocated_webstie(::std::string* webstie);

  // optional string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string password = 3;
  bool has_password() const;
  void clear_password();
  static const int kPasswordFieldNumber = 3;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  #if LANG_CXX11
  void set_password(::std::string&& value);
  #endif
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // optional string classid = 4;
  bool has_classid() const;
  void clear_classid();
  static const int kClassidFieldNumber = 4;
  const ::std::string& classid() const;
  void set_classid(const ::std::string& value);
  #if LANG_CXX11
  void set_classid(::std::string&& value);
  #endif
  void set_classid(const char* value);
  void set_classid(const char* value, size_t size);
  ::std::string* mutable_classid();
  ::std::string* release_classid();
  void set_allocated_classid(::std::string* classid);

  // optional string uniqueid = 5;
  bool has_uniqueid() const;
  void clear_uniqueid();
  static const int kUniqueidFieldNumber = 5;
  const ::std::string& uniqueid() const;
  void set_uniqueid(const ::std::string& value);
  #if LANG_CXX11
  void set_uniqueid(::std::string&& value);
  #endif
  void set_uniqueid(const char* value);
  void set_uniqueid(const char* value, size_t size);
  ::std::string* mutable_uniqueid();
  ::std::string* release_uniqueid();
  void set_allocated_uniqueid(::std::string* uniqueid);

  // @@protoc_insertion_point(class_scope:ClassStartParam)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr webstie_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  ::google::protobuf::internal::ArenaStringPtr classid_;
  ::google::protobuf::internal::ArenaStringPtr uniqueid_;
  friend struct ::TableStruct_Messages_2fChannel_2eproto;
};
// -------------------------------------------------------------------

class ClassResultParam :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ClassResultParam) */ {
 public:
  ClassResultParam();
  virtual ~ClassResultParam();

  ClassResultParam(const ClassResultParam& from);

  inline ClassResultParam& operator=(const ClassResultParam& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ClassResultParam(ClassResultParam&& from) noexcept
    : ClassResultParam() {
    *this = ::std::move(from);
  }

  inline ClassResultParam& operator=(ClassResultParam&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ClassResultParam& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClassResultParam* internal_default_instance() {
    return reinterpret_cast<const ClassResultParam*>(
               &_ClassResultParam_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ClassResultParam* other);
  friend void swap(ClassResultParam& a, ClassResultParam& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClassResultParam* New() const final {
    return CreateMaybeMessage<ClassResultParam>(nullptr);
  }

  ClassResultParam* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ClassResultParam>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ClassResultParam& from);
  void MergeFrom(const ClassResultParam& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ClassResultParam* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string ip = 2;
  bool has_ip() const;
  void clear_ip();
  static const int kIpFieldNumber = 2;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_ip(::std::string&& value);
  #endif
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // optional int32 port = 1;
  bool has_port() const;
  void clear_port();
  static const int kPortFieldNumber = 1;
  ::google::protobuf::int32 port() const;
  void set_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ClassResultParam)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::int32 port_;
  friend struct ::TableStruct_Messages_2fChannel_2eproto;
};
// -------------------------------------------------------------------

class Channel :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Channel) */ {
 public:
  Channel();
  virtual ~Channel();

  Channel(const Channel& from);

  inline Channel& operator=(const Channel& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Channel(Channel&& from) noexcept
    : Channel() {
    *this = ::std::move(from);
  }

  inline Channel& operator=(Channel&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Channel& default_instance();

  enum BodyCase {
    kStartParam = 1,
    kResultParam = 2,
    BODY_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Channel* internal_default_instance() {
    return reinterpret_cast<const Channel*>(
               &_Channel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Channel* other);
  friend void swap(Channel& a, Channel& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Channel* New() const final {
    return CreateMaybeMessage<Channel>(nullptr);
  }

  Channel* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Channel>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Channel& from);
  void MergeFrom(const Channel& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Channel* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .ClassStartParam startParam = 1;
  bool has_startparam() const;
  void clear_startparam();
  static const int kStartParamFieldNumber = 1;
  const ::ClassStartParam& startparam() const;
  ::ClassStartParam* release_startparam();
  ::ClassStartParam* mutable_startparam();
  void set_allocated_startparam(::ClassStartParam* startparam);

  // optional .ClassResultParam resultParam = 2;
  bool has_resultparam() const;
  void clear_resultparam();
  static const int kResultParamFieldNumber = 2;
  const ::ClassResultParam& resultparam() const;
  ::ClassResultParam* release_resultparam();
  ::ClassResultParam* mutable_resultparam();
  void set_allocated_resultparam(::ClassResultParam* resultparam);

  void clear_body();
  BodyCase body_case() const;
  // @@protoc_insertion_point(class_scope:Channel)
 private:
  class HasBitSetters;
  void set_has_startparam();
  void set_has_resultparam();

  inline bool has_body() const;
  inline void clear_has_body();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  union BodyUnion {
    BodyUnion() {}
    ::ClassStartParam* startparam_;
    ::ClassResultParam* resultparam_;
  } body_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::TableStruct_Messages_2fChannel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClassStartParam

// optional string webstie = 1;
inline bool ClassStartParam::has_webstie() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClassStartParam::clear_webstie() {
  webstie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& ClassStartParam::webstie() const {
  // @@protoc_insertion_point(field_get:ClassStartParam.webstie)
  return webstie_.GetNoArena();
}
inline void ClassStartParam::set_webstie(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  webstie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClassStartParam.webstie)
}
#if LANG_CXX11
inline void ClassStartParam::set_webstie(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  webstie_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClassStartParam.webstie)
}
#endif
inline void ClassStartParam::set_webstie(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  webstie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClassStartParam.webstie)
}
inline void ClassStartParam::set_webstie(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  webstie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClassStartParam.webstie)
}
inline ::std::string* ClassStartParam::mutable_webstie() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ClassStartParam.webstie)
  return webstie_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClassStartParam::release_webstie() {
  // @@protoc_insertion_point(field_release:ClassStartParam.webstie)
  if (!has_webstie()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return webstie_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClassStartParam::set_allocated_webstie(::std::string* webstie) {
  if (webstie != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  webstie_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), webstie);
  // @@protoc_insertion_point(field_set_allocated:ClassStartParam.webstie)
}

// optional string name = 2;
inline bool ClassStartParam::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClassStartParam::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::std::string& ClassStartParam::name() const {
  // @@protoc_insertion_point(field_get:ClassStartParam.name)
  return name_.GetNoArena();
}
inline void ClassStartParam::set_name(const ::std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClassStartParam.name)
}
#if LANG_CXX11
inline void ClassStartParam::set_name(::std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClassStartParam.name)
}
#endif
inline void ClassStartParam::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClassStartParam.name)
}
inline void ClassStartParam::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClassStartParam.name)
}
inline ::std::string* ClassStartParam::mutable_name() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:ClassStartParam.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClassStartParam::release_name() {
  // @@protoc_insertion_point(field_release:ClassStartParam.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClassStartParam::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ClassStartParam.name)
}

// optional string password = 3;
inline bool ClassStartParam::has_password() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ClassStartParam::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::std::string& ClassStartParam::password() const {
  // @@protoc_insertion_point(field_get:ClassStartParam.password)
  return password_.GetNoArena();
}
inline void ClassStartParam::set_password(const ::std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClassStartParam.password)
}
#if LANG_CXX11
inline void ClassStartParam::set_password(::std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  password_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClassStartParam.password)
}
#endif
inline void ClassStartParam::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClassStartParam.password)
}
inline void ClassStartParam::set_password(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClassStartParam.password)
}
inline ::std::string* ClassStartParam::mutable_password() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:ClassStartParam.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClassStartParam::release_password() {
  // @@protoc_insertion_point(field_release:ClassStartParam.password)
  if (!has_password()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return password_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClassStartParam::set_allocated_password(::std::string* password) {
  if (password != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:ClassStartParam.password)
}

// optional string classid = 4;
inline bool ClassStartParam::has_classid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ClassStartParam::clear_classid() {
  classid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const ::std::string& ClassStartParam::classid() const {
  // @@protoc_insertion_point(field_get:ClassStartParam.classid)
  return classid_.GetNoArena();
}
inline void ClassStartParam::set_classid(const ::std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  classid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClassStartParam.classid)
}
#if LANG_CXX11
inline void ClassStartParam::set_classid(::std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  classid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClassStartParam.classid)
}
#endif
inline void ClassStartParam::set_classid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  classid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClassStartParam.classid)
}
inline void ClassStartParam::set_classid(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  classid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClassStartParam.classid)
}
inline ::std::string* ClassStartParam::mutable_classid() {
  _has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_mutable:ClassStartParam.classid)
  return classid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClassStartParam::release_classid() {
  // @@protoc_insertion_point(field_release:ClassStartParam.classid)
  if (!has_classid()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return classid_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClassStartParam::set_allocated_classid(::std::string* classid) {
  if (classid != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  classid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), classid);
  // @@protoc_insertion_point(field_set_allocated:ClassStartParam.classid)
}

// optional string uniqueid = 5;
inline bool ClassStartParam::has_uniqueid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ClassStartParam::clear_uniqueid() {
  uniqueid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000010u;
}
inline const ::std::string& ClassStartParam::uniqueid() const {
  // @@protoc_insertion_point(field_get:ClassStartParam.uniqueid)
  return uniqueid_.GetNoArena();
}
inline void ClassStartParam::set_uniqueid(const ::std::string& value) {
  _has_bits_[0] |= 0x00000010u;
  uniqueid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClassStartParam.uniqueid)
}
#if LANG_CXX11
inline void ClassStartParam::set_uniqueid(::std::string&& value) {
  _has_bits_[0] |= 0x00000010u;
  uniqueid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClassStartParam.uniqueid)
}
#endif
inline void ClassStartParam::set_uniqueid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000010u;
  uniqueid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClassStartParam.uniqueid)
}
inline void ClassStartParam::set_uniqueid(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000010u;
  uniqueid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClassStartParam.uniqueid)
}
inline ::std::string* ClassStartParam::mutable_uniqueid() {
  _has_bits_[0] |= 0x00000010u;
  // @@protoc_insertion_point(field_mutable:ClassStartParam.uniqueid)
  return uniqueid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClassStartParam::release_uniqueid() {
  // @@protoc_insertion_point(field_release:ClassStartParam.uniqueid)
  if (!has_uniqueid()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000010u;
  return uniqueid_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClassStartParam::set_allocated_uniqueid(::std::string* uniqueid) {
  if (uniqueid != nullptr) {
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  uniqueid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uniqueid);
  // @@protoc_insertion_point(field_set_allocated:ClassStartParam.uniqueid)
}

// -------------------------------------------------------------------

// ClassResultParam

// optional int32 port = 1;
inline bool ClassResultParam::has_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClassResultParam::clear_port() {
  port_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::google::protobuf::int32 ClassResultParam::port() const {
  // @@protoc_insertion_point(field_get:ClassResultParam.port)
  return port_;
}
inline void ClassResultParam::set_port(::google::protobuf::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  port_ = value;
  // @@protoc_insertion_point(field_set:ClassResultParam.port)
}

// optional string ip = 2;
inline bool ClassResultParam::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClassResultParam::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& ClassResultParam::ip() const {
  // @@protoc_insertion_point(field_get:ClassResultParam.ip)
  return ip_.GetNoArena();
}
inline void ClassResultParam::set_ip(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ClassResultParam.ip)
}
#if LANG_CXX11
inline void ClassResultParam::set_ip(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ClassResultParam.ip)
}
#endif
inline void ClassResultParam::set_ip(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ClassResultParam.ip)
}
inline void ClassResultParam::set_ip(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ClassResultParam.ip)
}
inline ::std::string* ClassResultParam::mutable_ip() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ClassResultParam.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClassResultParam::release_ip() {
  // @@protoc_insertion_point(field_release:ClassResultParam.ip)
  if (!has_ip()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return ip_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClassResultParam::set_allocated_ip(::std::string* ip) {
  if (ip != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:ClassResultParam.ip)
}

// -------------------------------------------------------------------

// Channel

// optional .ClassStartParam startParam = 1;
inline bool Channel::has_startparam() const {
  return body_case() == kStartParam;
}
inline void Channel::set_has_startparam() {
  _oneof_case_[0] = kStartParam;
}
inline void Channel::clear_startparam() {
  if (has_startparam()) {
    delete body_.startparam_;
    clear_has_body();
  }
}
inline ::ClassStartParam* Channel::release_startparam() {
  // @@protoc_insertion_point(field_release:Channel.startParam)
  if (has_startparam()) {
    clear_has_body();
      ::ClassStartParam* temp = body_.startparam_;
    body_.startparam_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::ClassStartParam& Channel::startparam() const {
  // @@protoc_insertion_point(field_get:Channel.startParam)
  return has_startparam()
      ? *body_.startparam_
      : *reinterpret_cast< ::ClassStartParam*>(&::_ClassStartParam_default_instance_);
}
inline ::ClassStartParam* Channel::mutable_startparam() {
  if (!has_startparam()) {
    clear_body();
    set_has_startparam();
    body_.startparam_ = CreateMaybeMessage< ::ClassStartParam >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:Channel.startParam)
  return body_.startparam_;
}

// optional .ClassResultParam resultParam = 2;
inline bool Channel::has_resultparam() const {
  return body_case() == kResultParam;
}
inline void Channel::set_has_resultparam() {
  _oneof_case_[0] = kResultParam;
}
inline void Channel::clear_resultparam() {
  if (has_resultparam()) {
    delete body_.resultparam_;
    clear_has_body();
  }
}
inline ::ClassResultParam* Channel::release_resultparam() {
  // @@protoc_insertion_point(field_release:Channel.resultParam)
  if (has_resultparam()) {
    clear_has_body();
      ::ClassResultParam* temp = body_.resultparam_;
    body_.resultparam_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::ClassResultParam& Channel::resultparam() const {
  // @@protoc_insertion_point(field_get:Channel.resultParam)
  return has_resultparam()
      ? *body_.resultparam_
      : *reinterpret_cast< ::ClassResultParam*>(&::_ClassResultParam_default_instance_);
}
inline ::ClassResultParam* Channel::mutable_resultparam() {
  if (!has_resultparam()) {
    clear_body();
    set_has_resultparam();
    body_.resultparam_ = CreateMaybeMessage< ::ClassResultParam >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:Channel.resultParam)
  return body_.resultparam_;
}

inline bool Channel::has_body() const {
  return body_case() != BODY_NOT_SET;
}
inline void Channel::clear_has_body() {
  _oneof_case_[0] = BODY_NOT_SET;
}
inline Channel::BodyCase Channel::body_case() const {
  return Channel::BodyCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_Messages_2fChannel_2eproto