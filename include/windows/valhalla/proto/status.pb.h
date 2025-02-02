// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_status_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_status_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_status_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_status_2eproto {
  static const uint32_t offsets[];
};
namespace valhalla {
class Status;
struct StatusDefaultTypeInternal;
extern StatusDefaultTypeInternal _Status_default_instance_;
}  // namespace valhalla
PROTOBUF_NAMESPACE_OPEN
template<> ::valhalla::Status* Arena::CreateMaybeMessage<::valhalla::Status>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace valhalla {

// ===================================================================

class Status final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:valhalla.Status) */ {
 public:
  inline Status() : Status(nullptr) {}
  ~Status() override;
  explicit PROTOBUF_CONSTEXPR Status(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Status(const Status& from);
  Status(Status&& from) noexcept
    : Status() {
    *this = ::std::move(from);
  }

  inline Status& operator=(const Status& from) {
    CopyFrom(from);
    return *this;
  }
  inline Status& operator=(Status&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const Status& default_instance() {
    return *internal_default_instance();
  }
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

  enum HasHasTransitTilesCase {
    kHasTransitTiles = 9,
    HAS_HAS_TRANSIT_TILES_NOT_SET = 0,
  };

  enum HasOsmChangesetCase {
    kOsmChangeset = 10,
    HAS_OSM_CHANGESET_NOT_SET = 0,
  };

  static inline const Status* internal_default_instance() {
    return reinterpret_cast<const Status*>(
               &_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Status& a, Status& b) {
    a.Swap(&b);
  }
  inline void Swap(Status* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Status* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Status* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Status>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const Status& from);
  void MergeFrom(const Status& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Status* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "valhalla.Status";
  }
  protected:
  explicit Status(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAvailableActionsFieldNumber = 8,
    kVersionFieldNumber = 6,
    kTilesetLastModifiedFieldNumber = 7,
    kHasTilesFieldNumber = 1,
    kHasAdminsFieldNumber = 2,
    kHasTimezonesFieldNumber = 3,
    kHasLiveTrafficFieldNumber = 4,
    kBboxFieldNumber = 5,
    kHasTransitTilesFieldNumber = 9,
    kOsmChangesetFieldNumber = 10,
  };
  // repeated string available_actions = 8;
  int available_actions_size() const;
  private:
  int _internal_available_actions_size() const;
  public:
  void clear_available_actions();
  const std::string& available_actions(int index) const;
  std::string* mutable_available_actions(int index);
  void set_available_actions(int index, const std::string& value);
  void set_available_actions(int index, std::string&& value);
  void set_available_actions(int index, const char* value);
  void set_available_actions(int index, const char* value, size_t size);
  std::string* add_available_actions();
  void add_available_actions(const std::string& value);
  void add_available_actions(std::string&& value);
  void add_available_actions(const char* value);
  void add_available_actions(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& available_actions() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_available_actions();
  private:
  const std::string& _internal_available_actions(int index) const;
  std::string* _internal_add_available_actions();
  public:

  // string version = 6;
  void clear_version();
  const std::string& version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_version();
  PROTOBUF_NODISCARD std::string* release_version();
  void set_allocated_version(std::string* version);
  private:
  const std::string& _internal_version() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_version(const std::string& value);
  std::string* _internal_mutable_version();
  public:

  // uint32 tileset_last_modified = 7;
  void clear_tileset_last_modified();
  uint32_t tileset_last_modified() const;
  void set_tileset_last_modified(uint32_t value);
  private:
  uint32_t _internal_tileset_last_modified() const;
  void _internal_set_tileset_last_modified(uint32_t value);
  public:

  // bool has_tiles = 1;
  bool has_has_tiles() const;
  private:
  bool _internal_has_has_tiles() const;
  public:
  void clear_has_tiles();
  bool has_tiles() const;
  void set_has_tiles(bool value);
  private:
  bool _internal_has_tiles() const;
  void _internal_set_has_tiles(bool value);
  public:

  // bool has_admins = 2;
  bool has_has_admins() const;
  private:
  bool _internal_has_has_admins() const;
  public:
  void clear_has_admins();
  bool has_admins() const;
  void set_has_admins(bool value);
  private:
  bool _internal_has_admins() const;
  void _internal_set_has_admins(bool value);
  public:

  // bool has_timezones = 3;
  bool has_has_timezones() const;
  private:
  bool _internal_has_has_timezones() const;
  public:
  void clear_has_timezones();
  bool has_timezones() const;
  void set_has_timezones(bool value);
  private:
  bool _internal_has_timezones() const;
  void _internal_set_has_timezones(bool value);
  public:

  // bool has_live_traffic = 4;
  bool has_has_live_traffic() const;
  private:
  bool _internal_has_has_live_traffic() const;
  public:
  void clear_has_live_traffic();
  bool has_live_traffic() const;
  void set_has_live_traffic(bool value);
  private:
  bool _internal_has_live_traffic() const;
  void _internal_set_has_live_traffic(bool value);
  public:

  // string bbox = 5;
  bool has_bbox() const;
  private:
  bool _internal_has_bbox() const;
  public:
  void clear_bbox();
  const std::string& bbox() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_bbox(ArgT0&& arg0, ArgT... args);
  std::string* mutable_bbox();
  PROTOBUF_NODISCARD std::string* release_bbox();
  void set_allocated_bbox(std::string* bbox);
  private:
  const std::string& _internal_bbox() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_bbox(const std::string& value);
  std::string* _internal_mutable_bbox();
  public:

  // bool has_transit_tiles = 9;
  bool has_has_transit_tiles() const;
  private:
  bool _internal_has_has_transit_tiles() const;
  public:
  void clear_has_transit_tiles();
  bool has_transit_tiles() const;
  void set_has_transit_tiles(bool value);
  private:
  bool _internal_has_transit_tiles() const;
  void _internal_set_has_transit_tiles(bool value);
  public:

  // uint64 osm_changeset = 10;
  bool has_osm_changeset() const;
  private:
  bool _internal_has_osm_changeset() const;
  public:
  void clear_osm_changeset();
  uint64_t osm_changeset() const;
  void set_osm_changeset(uint64_t value);
  private:
  uint64_t _internal_osm_changeset() const;
  void _internal_set_osm_changeset(uint64_t value);
  public:

  void clear_has_has_tiles();
  HasHasTilesCase has_has_tiles_case() const;
  void clear_has_has_admins();
  HasHasAdminsCase has_has_admins_case() const;
  void clear_has_has_timezones();
  HasHasTimezonesCase has_has_timezones_case() const;
  void clear_has_has_live_traffic();
  HasHasLiveTrafficCase has_has_live_traffic_case() const;
  void clear_has_bbox();
  HasBboxCase has_bbox_case() const;
  void clear_has_has_transit_tiles();
  HasHasTransitTilesCase has_has_transit_tiles_case() const;
  void clear_has_osm_changeset();
  HasOsmChangesetCase has_osm_changeset_case() const;
  // @@protoc_insertion_point(class_scope:valhalla.Status)
 private:
  class _Internal;
  void set_has_has_tiles();
  void set_has_has_admins();
  void set_has_has_timezones();
  void set_has_has_live_traffic();
  void set_has_bbox();
  void set_has_has_transit_tiles();
  void set_has_osm_changeset();

  inline bool has_has_has_tiles() const;
  inline void clear_has_has_has_tiles();

  inline bool has_has_has_admins() const;
  inline void clear_has_has_has_admins();

  inline bool has_has_has_timezones() const;
  inline void clear_has_has_has_timezones();

  inline bool has_has_has_live_traffic() const;
  inline void clear_has_has_has_live_traffic();

  inline bool has_has_bbox() const;
  inline void clear_has_has_bbox();

  inline bool has_has_has_transit_tiles() const;
  inline void clear_has_has_has_transit_tiles();

  inline bool has_has_osm_changeset() const;
  inline void clear_has_has_osm_changeset();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> available_actions_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_;
    uint32_t tileset_last_modified_;
    union HasHasTilesUnion {
      constexpr HasHasTilesUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      bool has_tiles_;
    } has_has_tiles_;
    union HasHasAdminsUnion {
      constexpr HasHasAdminsUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      bool has_admins_;
    } has_has_admins_;
    union HasHasTimezonesUnion {
      constexpr HasHasTimezonesUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      bool has_timezones_;
    } has_has_timezones_;
    union HasHasLiveTrafficUnion {
      constexpr HasHasLiveTrafficUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      bool has_live_traffic_;
    } has_has_live_traffic_;
    union HasBboxUnion {
      constexpr HasBboxUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr bbox_;
    } has_bbox_;
    union HasHasTransitTilesUnion {
      constexpr HasHasTransitTilesUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      bool has_transit_tiles_;
    } has_has_transit_tiles_;
    union HasOsmChangesetUnion {
      constexpr HasOsmChangesetUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      uint64_t osm_changeset_;
    } has_osm_changeset_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    uint32_t _oneof_case_[7];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_status_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Status

// bool has_tiles = 1;
inline bool Status::_internal_has_has_tiles() const {
  return has_has_tiles_case() == kHasTiles;
}
inline bool Status::has_has_tiles() const {
  return _internal_has_has_tiles();
}
inline void Status::set_has_has_tiles() {
  _impl_._oneof_case_[0] = kHasTiles;
}
inline void Status::clear_has_tiles() {
  if (_internal_has_has_tiles()) {
    _impl_.has_has_tiles_.has_tiles_ = false;
    clear_has_has_has_tiles();
  }
}
inline bool Status::_internal_has_tiles() const {
  if (_internal_has_has_tiles()) {
    return _impl_.has_has_tiles_.has_tiles_;
  }
  return false;
}
inline void Status::_internal_set_has_tiles(bool value) {
  if (!_internal_has_has_tiles()) {
    clear_has_has_tiles();
    set_has_has_tiles();
  }
  _impl_.has_has_tiles_.has_tiles_ = value;
}
inline bool Status::has_tiles() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_tiles)
  return _internal_has_tiles();
}
inline void Status::set_has_tiles(bool value) {
  _internal_set_has_tiles(value);
  // @@protoc_insertion_point(field_set:valhalla.Status.has_tiles)
}

// bool has_admins = 2;
inline bool Status::_internal_has_has_admins() const {
  return has_has_admins_case() == kHasAdmins;
}
inline bool Status::has_has_admins() const {
  return _internal_has_has_admins();
}
inline void Status::set_has_has_admins() {
  _impl_._oneof_case_[1] = kHasAdmins;
}
inline void Status::clear_has_admins() {
  if (_internal_has_has_admins()) {
    _impl_.has_has_admins_.has_admins_ = false;
    clear_has_has_has_admins();
  }
}
inline bool Status::_internal_has_admins() const {
  if (_internal_has_has_admins()) {
    return _impl_.has_has_admins_.has_admins_;
  }
  return false;
}
inline void Status::_internal_set_has_admins(bool value) {
  if (!_internal_has_has_admins()) {
    clear_has_has_admins();
    set_has_has_admins();
  }
  _impl_.has_has_admins_.has_admins_ = value;
}
inline bool Status::has_admins() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_admins)
  return _internal_has_admins();
}
inline void Status::set_has_admins(bool value) {
  _internal_set_has_admins(value);
  // @@protoc_insertion_point(field_set:valhalla.Status.has_admins)
}

// bool has_timezones = 3;
inline bool Status::_internal_has_has_timezones() const {
  return has_has_timezones_case() == kHasTimezones;
}
inline bool Status::has_has_timezones() const {
  return _internal_has_has_timezones();
}
inline void Status::set_has_has_timezones() {
  _impl_._oneof_case_[2] = kHasTimezones;
}
inline void Status::clear_has_timezones() {
  if (_internal_has_has_timezones()) {
    _impl_.has_has_timezones_.has_timezones_ = false;
    clear_has_has_has_timezones();
  }
}
inline bool Status::_internal_has_timezones() const {
  if (_internal_has_has_timezones()) {
    return _impl_.has_has_timezones_.has_timezones_;
  }
  return false;
}
inline void Status::_internal_set_has_timezones(bool value) {
  if (!_internal_has_has_timezones()) {
    clear_has_has_timezones();
    set_has_has_timezones();
  }
  _impl_.has_has_timezones_.has_timezones_ = value;
}
inline bool Status::has_timezones() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_timezones)
  return _internal_has_timezones();
}
inline void Status::set_has_timezones(bool value) {
  _internal_set_has_timezones(value);
  // @@protoc_insertion_point(field_set:valhalla.Status.has_timezones)
}

// bool has_live_traffic = 4;
inline bool Status::_internal_has_has_live_traffic() const {
  return has_has_live_traffic_case() == kHasLiveTraffic;
}
inline bool Status::has_has_live_traffic() const {
  return _internal_has_has_live_traffic();
}
inline void Status::set_has_has_live_traffic() {
  _impl_._oneof_case_[3] = kHasLiveTraffic;
}
inline void Status::clear_has_live_traffic() {
  if (_internal_has_has_live_traffic()) {
    _impl_.has_has_live_traffic_.has_live_traffic_ = false;
    clear_has_has_has_live_traffic();
  }
}
inline bool Status::_internal_has_live_traffic() const {
  if (_internal_has_has_live_traffic()) {
    return _impl_.has_has_live_traffic_.has_live_traffic_;
  }
  return false;
}
inline void Status::_internal_set_has_live_traffic(bool value) {
  if (!_internal_has_has_live_traffic()) {
    clear_has_has_live_traffic();
    set_has_has_live_traffic();
  }
  _impl_.has_has_live_traffic_.has_live_traffic_ = value;
}
inline bool Status::has_live_traffic() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_live_traffic)
  return _internal_has_live_traffic();
}
inline void Status::set_has_live_traffic(bool value) {
  _internal_set_has_live_traffic(value);
  // @@protoc_insertion_point(field_set:valhalla.Status.has_live_traffic)
}

// string bbox = 5;
inline bool Status::_internal_has_bbox() const {
  return has_bbox_case() == kBbox;
}
inline bool Status::has_bbox() const {
  return _internal_has_bbox();
}
inline void Status::set_has_bbox() {
  _impl_._oneof_case_[4] = kBbox;
}
inline void Status::clear_bbox() {
  if (_internal_has_bbox()) {
    _impl_.has_bbox_.bbox_.Destroy();
    clear_has_has_bbox();
  }
}
inline const std::string& Status::bbox() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.bbox)
  return _internal_bbox();
}
template <typename ArgT0, typename... ArgT>
inline void Status::set_bbox(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_bbox()) {
    clear_has_bbox();
    set_has_bbox();
    _impl_.has_bbox_.bbox_.InitDefault();
  }
  _impl_.has_bbox_.bbox_.Set( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:valhalla.Status.bbox)
}
inline std::string* Status::mutable_bbox() {
  std::string* _s = _internal_mutable_bbox();
  // @@protoc_insertion_point(field_mutable:valhalla.Status.bbox)
  return _s;
}
inline const std::string& Status::_internal_bbox() const {
  if (_internal_has_bbox()) {
    return _impl_.has_bbox_.bbox_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void Status::_internal_set_bbox(const std::string& value) {
  if (!_internal_has_bbox()) {
    clear_has_bbox();
    set_has_bbox();
    _impl_.has_bbox_.bbox_.InitDefault();
  }
  _impl_.has_bbox_.bbox_.Set(value, GetArenaForAllocation());
}
inline std::string* Status::_internal_mutable_bbox() {
  if (!_internal_has_bbox()) {
    clear_has_bbox();
    set_has_bbox();
    _impl_.has_bbox_.bbox_.InitDefault();
  }
  return _impl_.has_bbox_.bbox_.Mutable(      GetArenaForAllocation());
}
inline std::string* Status::release_bbox() {
  // @@protoc_insertion_point(field_release:valhalla.Status.bbox)
  if (_internal_has_bbox()) {
    clear_has_has_bbox();
    return _impl_.has_bbox_.bbox_.Release();
  } else {
    return nullptr;
  }
}
inline void Status::set_allocated_bbox(std::string* bbox) {
  if (has_has_bbox()) {
    clear_has_bbox();
  }
  if (bbox != nullptr) {
    set_has_bbox();
    _impl_.has_bbox_.bbox_.InitAllocated(bbox, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:valhalla.Status.bbox)
}

// string version = 6;
inline void Status::clear_version() {
  _impl_.version_.ClearToEmpty();
}
inline const std::string& Status::version() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.version)
  return _internal_version();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Status::set_version(ArgT0&& arg0, ArgT... args) {
 
 _impl_.version_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:valhalla.Status.version)
}
inline std::string* Status::mutable_version() {
  std::string* _s = _internal_mutable_version();
  // @@protoc_insertion_point(field_mutable:valhalla.Status.version)
  return _s;
}
inline const std::string& Status::_internal_version() const {
  return _impl_.version_.Get();
}
inline void Status::_internal_set_version(const std::string& value) {
  
  _impl_.version_.Set(value, GetArenaForAllocation());
}
inline std::string* Status::_internal_mutable_version() {
  
  return _impl_.version_.Mutable(GetArenaForAllocation());
}
inline std::string* Status::release_version() {
  // @@protoc_insertion_point(field_release:valhalla.Status.version)
  return _impl_.version_.Release();
}
inline void Status::set_allocated_version(std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  _impl_.version_.SetAllocated(version, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.version_.IsDefault()) {
    _impl_.version_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:valhalla.Status.version)
}

// uint32 tileset_last_modified = 7;
inline void Status::clear_tileset_last_modified() {
  _impl_.tileset_last_modified_ = 0u;
}
inline uint32_t Status::_internal_tileset_last_modified() const {
  return _impl_.tileset_last_modified_;
}
inline uint32_t Status::tileset_last_modified() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.tileset_last_modified)
  return _internal_tileset_last_modified();
}
inline void Status::_internal_set_tileset_last_modified(uint32_t value) {
  
  _impl_.tileset_last_modified_ = value;
}
inline void Status::set_tileset_last_modified(uint32_t value) {
  _internal_set_tileset_last_modified(value);
  // @@protoc_insertion_point(field_set:valhalla.Status.tileset_last_modified)
}

// repeated string available_actions = 8;
inline int Status::_internal_available_actions_size() const {
  return _impl_.available_actions_.size();
}
inline int Status::available_actions_size() const {
  return _internal_available_actions_size();
}
inline void Status::clear_available_actions() {
  _impl_.available_actions_.Clear();
}
inline std::string* Status::add_available_actions() {
  std::string* _s = _internal_add_available_actions();
  // @@protoc_insertion_point(field_add_mutable:valhalla.Status.available_actions)
  return _s;
}
inline const std::string& Status::_internal_available_actions(int index) const {
  return _impl_.available_actions_.Get(index);
}
inline const std::string& Status::available_actions(int index) const {
  // @@protoc_insertion_point(field_get:valhalla.Status.available_actions)
  return _internal_available_actions(index);
}
inline std::string* Status::mutable_available_actions(int index) {
  // @@protoc_insertion_point(field_mutable:valhalla.Status.available_actions)
  return _impl_.available_actions_.Mutable(index);
}
inline void Status::set_available_actions(int index, const std::string& value) {
  _impl_.available_actions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:valhalla.Status.available_actions)
}
inline void Status::set_available_actions(int index, std::string&& value) {
  _impl_.available_actions_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:valhalla.Status.available_actions)
}
inline void Status::set_available_actions(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.available_actions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:valhalla.Status.available_actions)
}
inline void Status::set_available_actions(int index, const char* value, size_t size) {
  _impl_.available_actions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:valhalla.Status.available_actions)
}
inline std::string* Status::_internal_add_available_actions() {
  return _impl_.available_actions_.Add();
}
inline void Status::add_available_actions(const std::string& value) {
  _impl_.available_actions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:valhalla.Status.available_actions)
}
inline void Status::add_available_actions(std::string&& value) {
  _impl_.available_actions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:valhalla.Status.available_actions)
}
inline void Status::add_available_actions(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.available_actions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:valhalla.Status.available_actions)
}
inline void Status::add_available_actions(const char* value, size_t size) {
  _impl_.available_actions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:valhalla.Status.available_actions)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Status::available_actions() const {
  // @@protoc_insertion_point(field_list:valhalla.Status.available_actions)
  return _impl_.available_actions_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Status::mutable_available_actions() {
  // @@protoc_insertion_point(field_mutable_list:valhalla.Status.available_actions)
  return &_impl_.available_actions_;
}

// bool has_transit_tiles = 9;
inline bool Status::_internal_has_has_transit_tiles() const {
  return has_has_transit_tiles_case() == kHasTransitTiles;
}
inline bool Status::has_has_transit_tiles() const {
  return _internal_has_has_transit_tiles();
}
inline void Status::set_has_has_transit_tiles() {
  _impl_._oneof_case_[5] = kHasTransitTiles;
}
inline void Status::clear_has_transit_tiles() {
  if (_internal_has_has_transit_tiles()) {
    _impl_.has_has_transit_tiles_.has_transit_tiles_ = false;
    clear_has_has_has_transit_tiles();
  }
}
inline bool Status::_internal_has_transit_tiles() const {
  if (_internal_has_has_transit_tiles()) {
    return _impl_.has_has_transit_tiles_.has_transit_tiles_;
  }
  return false;
}
inline void Status::_internal_set_has_transit_tiles(bool value) {
  if (!_internal_has_has_transit_tiles()) {
    clear_has_has_transit_tiles();
    set_has_has_transit_tiles();
  }
  _impl_.has_has_transit_tiles_.has_transit_tiles_ = value;
}
inline bool Status::has_transit_tiles() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.has_transit_tiles)
  return _internal_has_transit_tiles();
}
inline void Status::set_has_transit_tiles(bool value) {
  _internal_set_has_transit_tiles(value);
  // @@protoc_insertion_point(field_set:valhalla.Status.has_transit_tiles)
}

// uint64 osm_changeset = 10;
inline bool Status::_internal_has_osm_changeset() const {
  return has_osm_changeset_case() == kOsmChangeset;
}
inline bool Status::has_osm_changeset() const {
  return _internal_has_osm_changeset();
}
inline void Status::set_has_osm_changeset() {
  _impl_._oneof_case_[6] = kOsmChangeset;
}
inline void Status::clear_osm_changeset() {
  if (_internal_has_osm_changeset()) {
    _impl_.has_osm_changeset_.osm_changeset_ = uint64_t{0u};
    clear_has_has_osm_changeset();
  }
}
inline uint64_t Status::_internal_osm_changeset() const {
  if (_internal_has_osm_changeset()) {
    return _impl_.has_osm_changeset_.osm_changeset_;
  }
  return uint64_t{0u};
}
inline void Status::_internal_set_osm_changeset(uint64_t value) {
  if (!_internal_has_osm_changeset()) {
    clear_has_osm_changeset();
    set_has_osm_changeset();
  }
  _impl_.has_osm_changeset_.osm_changeset_ = value;
}
inline uint64_t Status::osm_changeset() const {
  // @@protoc_insertion_point(field_get:valhalla.Status.osm_changeset)
  return _internal_osm_changeset();
}
inline void Status::set_osm_changeset(uint64_t value) {
  _internal_set_osm_changeset(value);
  // @@protoc_insertion_point(field_set:valhalla.Status.osm_changeset)
}

inline bool Status::has_has_has_tiles() const {
  return has_has_tiles_case() != HAS_HAS_TILES_NOT_SET;
}
inline void Status::clear_has_has_has_tiles() {
  _impl_._oneof_case_[0] = HAS_HAS_TILES_NOT_SET;
}
inline bool Status::has_has_has_admins() const {
  return has_has_admins_case() != HAS_HAS_ADMINS_NOT_SET;
}
inline void Status::clear_has_has_has_admins() {
  _impl_._oneof_case_[1] = HAS_HAS_ADMINS_NOT_SET;
}
inline bool Status::has_has_has_timezones() const {
  return has_has_timezones_case() != HAS_HAS_TIMEZONES_NOT_SET;
}
inline void Status::clear_has_has_has_timezones() {
  _impl_._oneof_case_[2] = HAS_HAS_TIMEZONES_NOT_SET;
}
inline bool Status::has_has_has_live_traffic() const {
  return has_has_live_traffic_case() != HAS_HAS_LIVE_TRAFFIC_NOT_SET;
}
inline void Status::clear_has_has_has_live_traffic() {
  _impl_._oneof_case_[3] = HAS_HAS_LIVE_TRAFFIC_NOT_SET;
}
inline bool Status::has_has_bbox() const {
  return has_bbox_case() != HAS_BBOX_NOT_SET;
}
inline void Status::clear_has_has_bbox() {
  _impl_._oneof_case_[4] = HAS_BBOX_NOT_SET;
}
inline bool Status::has_has_has_transit_tiles() const {
  return has_has_transit_tiles_case() != HAS_HAS_TRANSIT_TILES_NOT_SET;
}
inline void Status::clear_has_has_has_transit_tiles() {
  _impl_._oneof_case_[5] = HAS_HAS_TRANSIT_TILES_NOT_SET;
}
inline bool Status::has_has_osm_changeset() const {
  return has_osm_changeset_case() != HAS_OSM_CHANGESET_NOT_SET;
}
inline void Status::clear_has_has_osm_changeset() {
  _impl_._oneof_case_[6] = HAS_OSM_CHANGESET_NOT_SET;
}
inline Status::HasHasTilesCase Status::has_has_tiles_case() const {
  return Status::HasHasTilesCase(_impl_._oneof_case_[0]);
}
inline Status::HasHasAdminsCase Status::has_has_admins_case() const {
  return Status::HasHasAdminsCase(_impl_._oneof_case_[1]);
}
inline Status::HasHasTimezonesCase Status::has_has_timezones_case() const {
  return Status::HasHasTimezonesCase(_impl_._oneof_case_[2]);
}
inline Status::HasHasLiveTrafficCase Status::has_has_live_traffic_case() const {
  return Status::HasHasLiveTrafficCase(_impl_._oneof_case_[3]);
}
inline Status::HasBboxCase Status::has_bbox_case() const {
  return Status::HasBboxCase(_impl_._oneof_case_[4]);
}
inline Status::HasHasTransitTilesCase Status::has_has_transit_tiles_case() const {
  return Status::HasHasTransitTilesCase(_impl_._oneof_case_[5]);
}
inline Status::HasOsmChangesetCase Status::has_osm_changeset_case() const {
  return Status::HasOsmChangesetCase(_impl_._oneof_case_[6]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace valhalla

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_status_2eproto
