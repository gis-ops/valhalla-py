// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status.proto

#ifndef PROTOBUF_status_2eproto__INCLUDED
#define PROTOBUF_status_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace valhalla {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_status_2eproto();
void protobuf_AssignDesc_status_2eproto();
void protobuf_ShutdownFile_status_2eproto();

class Status;

// ===================================================================

class Status : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:valhalla.Status) */ {
 public:
  Status();
  virtual ~Status();

  Status(const Status& from);

  inline Status& operator=(const Status& from) {
    CopyFrom(from);
    return *this;
  }

  static const Status& default_instance();

  enum HasHasTilesCase {
    kHasTiles = 1,
    HAS_HAS_TILES_NOT_SET = 0,
  };

  enum HasHasAdminsCase {
    kHasAdmins = 2,
    HAS_HAS_ADMINS_NOT_SET = 0,
  };

  enum HasHasTimezonesCase {
    kHasTimezones = 3,
    HAS_HAS_TIMEZONES_NOT_SET = 0,
  };

  enum HasHasLiveTrafficCase {
    kHasLiveTraffic = 4,
    HAS_HAS_LIVE_TRAFFIC_NOT_SET = 0,
  };

  enum HasBboxCase {
    kBbox = 5,
    HAS_BBOX_NOT_SET = 0,
  };

  enum HasVersionCase {
    kVersion = 6,
    HAS_VERSION_NOT_SET = 0,
  };

  enum HasTilesetLastModifiedCase {
    kTilesetLastModified = 7,
    HAS_TILESET_LAST_MODIFIED_NOT_SET = 0,
  };

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const Status* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(Status* other);

  // implements Message ----------------------------------------------

  inline Status* New() const { return New(NULL); }

  Status* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Status& from);
  void MergeFrom(const Status& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Status* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool has_tiles = 1;
  private:
  bool has_has_tiles() const;
  public:
  void clear_has_tiles();
  static const int kHasTilesFieldNumber = 1;
  bool has_tiles() const;
  void set_has_tiles(bool value);

  // optional bool has_admins = 2;
  private:
  bool has_has_admins() const;
  public:
  void clear_has_admins();
  static const int kHasAdminsFieldNumber = 2;
  bool has_admins() const;
  void set_has_admins(bool value);

  // optional bool has_timezones = 3;
  private:
  bool has_has_timezones() const;
  public:
  void clear_has_timezones();
  static const int kHasTimezonesFieldNumber = 3;
  bool has_timezones() const;
  void set_has_timezones(bool value);

  // optional bool has_live_traffic = 4;
  private:
  bool has_has_live_traffic() const;
  public:
  void clear_has_live_traffic();
  static const int kHasLiveTrafficFieldNumber = 4;
  bool has_live_traffic() const;
  void set_has_live_traffic(bool value);

  // optional string bbox = 5;
  private:
  bool has_bbox() const;
  public:
  void clear_bbox();
  static const int kBboxFieldNumber = 5;
  const ::std::string& bbox() const;
  void set_bbox(const ::std::string& value);
  void set_bbox(const char* value);
  void set_bbox(const char* value, size_t size);
  ::std::string* mutable_bbox();
  ::std::string* release_bbox();
  void set_allocated_bbox(::std::string* bbox);

  // optional string version = 6;
  private:
  bool has_version() const;
  public:
  void clear_version();
  static const int kVersionFieldNumber = 6;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // optional uint32 tileset_last_modified = 7;
  private:
  bool has_tileset_last_modified() const;
  public:
  void clear_tileset_last_modified();
  static const int kTilesetLastModifiedFieldNumber = 7;
  ::google::protobuf::uint32 tileset_last_modified() const;
  void set_tileset_last_modified(::google::protobuf::uint32 value);

  HasHasTilesCase has_has_tiles_case() const;
  HasHasAdminsCase has_has_admins_case() const;
  HasHasTimezonesCase has_has_timezones_case() const;
  HasHasLiveTrafficCase has_has_live_traffic_case() const;
  HasBboxCase has_bbox_case() const;
  HasVersionCase has_version_case() const;
  HasTilesetLastModifiedCase has_tileset_last_modified_case() const;
  // @@protoc_insertion_point(class_scope:valhalla.Status)
 private:
  inline void set_has_has_tiles();
  inline void set_has_has_admins();
  inline void set_has_has_timezones();
  inline void set_has_has_live_traffic();
  inline void set_has_bbox();
  inline void set_has_version();
  inline void set_has_tileset_last_modified();

  inline bool has_has_has_tiles() const;
  void clear_has_has_tiles();
  inline void clear_has_has_has_tiles();

  inline bool has_has_has_admins() const;
  void clear_has_has_admins();
  inline void clear_has_has_has_admins();

  inline bool has_has_has_timezones() const;
  void clear_has_has_timezones();
  inline void clear_has_has_has_timezones();

  inline bool has_has_has_live_traffic() const;
  void clear_has_has_live_traffic();
  inline void clear_has_has_has_live_traffic();

  inline bool has_has_bbox() const;
  void clear_has_bbox();
  inline void clear_has_has_bbox();

  inline bool has_has_version() const;
  void clear_has_version();
  inline void clear_has_has_version();

  inline bool has_has_tileset_last_modified() const;
  void clear_has_tileset_last_modified();
  inline void clear_has_has_tileset_last_modified();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  bool _is_default_instance_;
  union HasHasTilesUnion {
    HasHasTilesUnion() {}
    bool has_tiles_;
  } has_has_tiles_;
  union HasHasAdminsUnion {
    HasHasAdminsUnion() {}
    bool has_admins_;
  } has_has_admins_;
  union HasHasTimezonesUnion {
    HasHasTimezonesUnion() {}
    bool has_timezones_;
  } has_has_timezones_;
  union HasHasLiveTrafficUnion {
    HasHasLiveTrafficUnion() {}
    bool has_live_traffic_;
  } has_has_live_traffic_;
  union HasBboxUnion {
    HasBboxUnion() {}
    ::google::protobuf::internal::ArenaStringPtr bbox_;
  } has_bbox_;
  union HasVersionUnion {
    HasVersionUnion() {}
    ::google::protobuf::internal::ArenaStringPtr version_;
  } has_version_;
  union HasTilesetLastModifiedUnion {
    HasTilesetLastModifiedUnion() {}
    ::google::protobuf::uint32 tileset_last_modified_;
  } has_tileset_last_modified_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[7];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_status_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_status_2eproto();
  #endif
  friend void protobuf_AssignDesc_status_2eproto();
  friend void protobuf_ShutdownFile_status_2eproto();

  void InitAsDefaultInstance();
  static Status* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Status

// optional bool has_tiles = 1;
inline bool Status::has_has_tiles() const {
  return has_has_tiles_case() == kHasTiles;
}
inline void Status::set_has_has_tiles() {
  _oneof_case_[0] = kHasTiles;
}
inline void Status::clear_has_tiles() {
  if (has_has_tiles()) {
    has_has_tiles_.has_tiles_ = false;
    clear_has_has_has_tiles();
  }
}
inline bool Status::has_tiles() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_tiles)
  if (has_has_tiles()) {
    return has_has_tiles_.has_tiles_;
  }
  return false;
}
inline void Status::set_has_tiles(bool value) {
  if (!has_has_tiles()) {
    clear_has_has_tiles();
    set_has_has_tiles();
  }
  has_has_tiles_.has_tiles_ = value;
  // @@protoc_insertion_point(field_set:valhalla.Status.has_tiles)
}

// optional bool has_admins = 2;
inline bool Status::has_has_admins() const {
  return has_has_admins_case() == kHasAdmins;
}
inline void Status::set_has_has_admins() {
  _oneof_case_[1] = kHasAdmins;
}
inline void Status::clear_has_admins() {
  if (has_has_admins()) {
    has_has_admins_.has_admins_ = false;
    clear_has_has_has_admins();
  }
}
inline bool Status::has_admins() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_admins)
  if (has_has_admins()) {
    return has_has_admins_.has_admins_;
  }
  return false;
}
inline void Status::set_has_admins(bool value) {
  if (!has_has_admins()) {
    clear_has_has_admins();
    set_has_has_admins();
  }
  has_has_admins_.has_admins_ = value;
  // @@protoc_insertion_point(field_set:valhalla.Status.has_admins)
}

// optional bool has_timezones = 3;
inline bool Status::has_has_timezones() const {
  return has_has_timezones_case() == kHasTimezones;
}
inline void Status::set_has_has_timezones() {
  _oneof_case_[2] = kHasTimezones;
}
inline void Status::clear_has_timezones() {
  if (has_has_timezones()) {
    has_has_timezones_.has_timezones_ = false;
    clear_has_has_has_timezones();
  }
}
inline bool Status::has_timezones() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_timezones)
  if (has_has_timezones()) {
    return has_has_timezones_.has_timezones_;
  }
  return false;
}
inline void Status::set_has_timezones(bool value) {
  if (!has_has_timezones()) {
    clear_has_has_timezones();
    set_has_has_timezones();
  }
  has_has_timezones_.has_timezones_ = value;
  // @@protoc_insertion_point(field_set:valhalla.Status.has_timezones)
}

// optional bool has_live_traffic = 4;
inline bool Status::has_has_live_traffic() const {
  return has_has_live_traffic_case() == kHasLiveTraffic;
}
inline void Status::set_has_has_live_traffic() {
  _oneof_case_[3] = kHasLiveTraffic;
}
inline void Status::clear_has_live_traffic() {
  if (has_has_live_traffic()) {
    has_has_live_traffic_.has_live_traffic_ = false;
    clear_has_has_has_live_traffic();
  }
}
inline bool Status::has_live_traffic() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_live_traffic)
  if (has_has_live_traffic()) {
    return has_has_live_traffic_.has_live_traffic_;
  }
  return false;
}
inline void Status::set_has_live_traffic(bool value) {
  if (!has_has_live_traffic()) {
    clear_has_has_live_traffic();
    set_has_has_live_traffic();
  }
  has_has_live_traffic_.has_live_traffic_ = value;
  // @@protoc_insertion_point(field_set:valhalla.Status.has_live_traffic)
}

// optional string bbox = 5;
inline bool Status::has_bbox() const {
  return has_bbox_case() == kBbox;
}
inline void Status::set_has_bbox() {
  _oneof_case_[4] = kBbox;
}
inline void Status::clear_bbox() {
  if (has_bbox()) {
    has_bbox_.bbox_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_has_bbox();
  }
}
inline const ::std::string& Status::bbox() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.bbox)
  if (has_bbox()) {
    return has_bbox_.bbox_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Status::set_bbox(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:valhalla.Status.bbox)
  if (!has_bbox()) {
    clear_has_bbox();
    set_has_bbox();
    has_bbox_.bbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  has_bbox_.bbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:valhalla.Status.bbox)
}
inline void Status::set_bbox(const char* value) {
  if (!has_bbox()) {
    clear_has_bbox();
    set_has_bbox();
    has_bbox_.bbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  has_bbox_.bbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:valhalla.Status.bbox)
}
inline void Status::set_bbox(const char* value, size_t size) {
  if (!has_bbox()) {
    clear_has_bbox();
    set_has_bbox();
    has_bbox_.bbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  has_bbox_.bbox_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:valhalla.Status.bbox)
}
inline ::std::string* Status::mutable_bbox() {
  if (!has_bbox()) {
    clear_has_bbox();
    set_has_bbox();
    has_bbox_.bbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:valhalla.Status.bbox)
  return has_bbox_.bbox_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Status::release_bbox() {
  // @@protoc_insertion_point(field_release:valhalla.Status.bbox)
  if (has_bbox()) {
    clear_has_has_bbox();
    return has_bbox_.bbox_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void Status::set_allocated_bbox(::std::string* bbox) {
  if (!has_bbox()) {
    has_bbox_.bbox_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_has_bbox();
  if (bbox != NULL) {
    set_has_bbox();
    has_bbox_.bbox_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        bbox);
  }
  // @@protoc_insertion_point(field_set_allocated:valhalla.Status.bbox)
}

// optional string version = 6;
inline bool Status::has_version() const {
  return has_version_case() == kVersion;
}
inline void Status::set_has_version() {
  _oneof_case_[5] = kVersion;
}
inline void Status::clear_version() {
  if (has_version()) {
    has_version_.version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    clear_has_has_version();
  }
}
inline const ::std::string& Status::version() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.version)
  if (has_version()) {
    return has_version_.version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  return *&::google::protobuf::internal::GetEmptyStringAlreadyInited();
}
inline void Status::set_version(const ::std::string& value) {
  // @@protoc_insertion_point(field_set:valhalla.Status.version)
  if (!has_version()) {
    clear_has_version();
    set_has_version();
    has_version_.version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  has_version_.version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:valhalla.Status.version)
}
inline void Status::set_version(const char* value) {
  if (!has_version()) {
    clear_has_version();
    set_has_version();
    has_version_.version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  has_version_.version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(value));
  // @@protoc_insertion_point(field_set_char:valhalla.Status.version)
}
inline void Status::set_version(const char* value, size_t size) {
  if (!has_version()) {
    clear_has_version();
    set_has_version();
    has_version_.version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  has_version_.version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:valhalla.Status.version)
}
inline ::std::string* Status::mutable_version() {
  if (!has_version()) {
    clear_has_version();
    set_has_version();
    has_version_.version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_mutable:valhalla.Status.version)
  return has_version_.version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Status::release_version() {
  // @@protoc_insertion_point(field_release:valhalla.Status.version)
  if (has_version()) {
    clear_has_has_version();
    return has_version_.version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  } else {
    return NULL;
  }
}
inline void Status::set_allocated_version(::std::string* version) {
  if (!has_version()) {
    has_version_.version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  clear_has_version();
  if (version != NULL) {
    set_has_version();
    has_version_.version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
        version);
  }
  // @@protoc_insertion_point(field_set_allocated:valhalla.Status.version)
}

// optional uint32 tileset_last_modified = 7;
inline bool Status::has_tileset_last_modified() const {
  return has_tileset_last_modified_case() == kTilesetLastModified;
}
inline void Status::set_has_tileset_last_modified() {
  _oneof_case_[6] = kTilesetLastModified;
}
inline void Status::clear_tileset_last_modified() {
  if (has_tileset_last_modified()) {
    has_tileset_last_modified_.tileset_last_modified_ = 0u;
    clear_has_has_tileset_last_modified();
  }
}
inline ::google::protobuf::uint32 Status::tileset_last_modified() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.tileset_last_modified)
  if (has_tileset_last_modified()) {
    return has_tileset_last_modified_.tileset_last_modified_;
  }
  return 0u;
}
inline void Status::set_tileset_last_modified(::google::protobuf::uint32 value) {
  if (!has_tileset_last_modified()) {
    clear_has_tileset_last_modified();
    set_has_tileset_last_modified();
  }
  has_tileset_last_modified_.tileset_last_modified_ = value;
  // @@protoc_insertion_point(field_set:valhalla.Status.tileset_last_modified)
}

inline bool Status::has_has_has_tiles() const {
  return has_has_tiles_case() != HAS_HAS_TILES_NOT_SET;
}
inline void Status::clear_has_has_has_tiles() {
  _oneof_case_[0] = HAS_HAS_TILES_NOT_SET;
}
inline bool Status::has_has_has_admins() const {
  return has_has_admins_case() != HAS_HAS_ADMINS_NOT_SET;
}
inline void Status::clear_has_has_has_admins() {
  _oneof_case_[1] = HAS_HAS_ADMINS_NOT_SET;
}
inline bool Status::has_has_has_timezones() const {
  return has_has_timezones_case() != HAS_HAS_TIMEZONES_NOT_SET;
}
inline void Status::clear_has_has_has_timezones() {
  _oneof_case_[2] = HAS_HAS_TIMEZONES_NOT_SET;
}
inline bool Status::has_has_has_live_traffic() const {
  return has_has_live_traffic_case() != HAS_HAS_LIVE_TRAFFIC_NOT_SET;
}
inline void Status::clear_has_has_has_live_traffic() {
  _oneof_case_[3] = HAS_HAS_LIVE_TRAFFIC_NOT_SET;
}
inline bool Status::has_has_bbox() const {
  return has_bbox_case() != HAS_BBOX_NOT_SET;
}
inline void Status::clear_has_has_bbox() {
  _oneof_case_[4] = HAS_BBOX_NOT_SET;
}
inline bool Status::has_has_version() const {
  return has_version_case() != HAS_VERSION_NOT_SET;
}
inline void Status::clear_has_has_version() {
  _oneof_case_[5] = HAS_VERSION_NOT_SET;
}
inline bool Status::has_has_tileset_last_modified() const {
  return has_tileset_last_modified_case() != HAS_TILESET_LAST_MODIFIED_NOT_SET;
}
inline void Status::clear_has_has_tileset_last_modified() {
  _oneof_case_[6] = HAS_TILESET_LAST_MODIFIED_NOT_SET;
}
inline Status::HasHasTilesCase Status::has_has_tiles_case() const {
  return Status::HasHasTilesCase(_oneof_case_[0]);
}
inline Status::HasHasAdminsCase Status::has_has_admins_case() const {
  return Status::HasHasAdminsCase(_oneof_case_[1]);
}
inline Status::HasHasTimezonesCase Status::has_has_timezones_case() const {
  return Status::HasHasTimezonesCase(_oneof_case_[2]);
}
inline Status::HasHasLiveTrafficCase Status::has_has_live_traffic_case() const {
  return Status::HasHasLiveTrafficCase(_oneof_case_[3]);
}
inline Status::HasBboxCase Status::has_bbox_case() const {
  return Status::HasBboxCase(_oneof_case_[4]);
}
inline Status::HasVersionCase Status::has_version_case() const {
  return Status::HasVersionCase(_oneof_case_[5]);
}
inline Status::HasTilesetLastModifiedCase Status::has_tileset_last_modified_case() const {
  return Status::HasTilesetLastModifiedCase(_oneof_case_[6]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace valhalla

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_status_2eproto__INCLUDED
