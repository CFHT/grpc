/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     third_party/istio/security/proto/providers/google/meshca.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef THIRD_PARTY_ISTIO_SECURITY_PROTO_PROVIDERS_GOOGLE_MESHCA_PROTO_UPB_H_
#define THIRD_PARTY_ISTIO_SECURITY_PROTO_PROVIDERS_GOOGLE_MESHCA_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct google_security_meshca_v1_MeshCertificateRequest;
struct google_security_meshca_v1_MeshCertificateResponse;
typedef struct google_security_meshca_v1_MeshCertificateRequest google_security_meshca_v1_MeshCertificateRequest;
typedef struct google_security_meshca_v1_MeshCertificateResponse google_security_meshca_v1_MeshCertificateResponse;
extern const upb_msglayout google_security_meshca_v1_MeshCertificateRequest_msginit;
extern const upb_msglayout google_security_meshca_v1_MeshCertificateResponse_msginit;
struct google_protobuf_Duration;
extern const upb_msglayout google_protobuf_Duration_msginit;


/* google.security.meshca.v1.MeshCertificateRequest */

UPB_INLINE google_security_meshca_v1_MeshCertificateRequest *google_security_meshca_v1_MeshCertificateRequest_new(upb_arena *arena) {
  return (google_security_meshca_v1_MeshCertificateRequest *)_upb_msg_new(&google_security_meshca_v1_MeshCertificateRequest_msginit, arena);
}
UPB_INLINE google_security_meshca_v1_MeshCertificateRequest *google_security_meshca_v1_MeshCertificateRequest_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_security_meshca_v1_MeshCertificateRequest *ret = google_security_meshca_v1_MeshCertificateRequest_new(arena);
  return (ret && upb_decode(buf, size, ret, &google_security_meshca_v1_MeshCertificateRequest_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *google_security_meshca_v1_MeshCertificateRequest_serialize(const google_security_meshca_v1_MeshCertificateRequest *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_security_meshca_v1_MeshCertificateRequest_msginit, arena, len);
}

UPB_INLINE upb_strview google_security_meshca_v1_MeshCertificateRequest_request_id(const google_security_meshca_v1_MeshCertificateRequest *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview google_security_meshca_v1_MeshCertificateRequest_csr(const google_security_meshca_v1_MeshCertificateRequest *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview); }
UPB_INLINE bool google_security_meshca_v1_MeshCertificateRequest_has_validity(const google_security_meshca_v1_MeshCertificateRequest *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(16, 32)); }
UPB_INLINE const struct google_protobuf_Duration* google_security_meshca_v1_MeshCertificateRequest_validity(const google_security_meshca_v1_MeshCertificateRequest *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct google_protobuf_Duration*); }

UPB_INLINE void google_security_meshca_v1_MeshCertificateRequest_set_request_id(google_security_meshca_v1_MeshCertificateRequest *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void google_security_meshca_v1_MeshCertificateRequest_set_csr(google_security_meshca_v1_MeshCertificateRequest *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview) = value;
}
UPB_INLINE void google_security_meshca_v1_MeshCertificateRequest_set_validity(google_security_meshca_v1_MeshCertificateRequest *msg, struct google_protobuf_Duration* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* google_security_meshca_v1_MeshCertificateRequest_mutable_validity(google_security_meshca_v1_MeshCertificateRequest *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)google_security_meshca_v1_MeshCertificateRequest_validity(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    google_security_meshca_v1_MeshCertificateRequest_set_validity(msg, sub);
  }
  return sub;
}

/* google.security.meshca.v1.MeshCertificateResponse */

UPB_INLINE google_security_meshca_v1_MeshCertificateResponse *google_security_meshca_v1_MeshCertificateResponse_new(upb_arena *arena) {
  return (google_security_meshca_v1_MeshCertificateResponse *)_upb_msg_new(&google_security_meshca_v1_MeshCertificateResponse_msginit, arena);
}
UPB_INLINE google_security_meshca_v1_MeshCertificateResponse *google_security_meshca_v1_MeshCertificateResponse_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_security_meshca_v1_MeshCertificateResponse *ret = google_security_meshca_v1_MeshCertificateResponse_new(arena);
  return (ret && upb_decode(buf, size, ret, &google_security_meshca_v1_MeshCertificateResponse_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *google_security_meshca_v1_MeshCertificateResponse_serialize(const google_security_meshca_v1_MeshCertificateResponse *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_security_meshca_v1_MeshCertificateResponse_msginit, arena, len);
}

UPB_INLINE upb_strview const* google_security_meshca_v1_MeshCertificateResponse_cert_chain(const google_security_meshca_v1_MeshCertificateResponse *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE upb_strview* google_security_meshca_v1_MeshCertificateResponse_mutable_cert_chain(google_security_meshca_v1_MeshCertificateResponse *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE upb_strview* google_security_meshca_v1_MeshCertificateResponse_resize_cert_chain(google_security_meshca_v1_MeshCertificateResponse *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor(msg, UPB_SIZE(0, 0), len, UPB_TYPE_STRING, arena);
}
UPB_INLINE bool google_security_meshca_v1_MeshCertificateResponse_add_cert_chain(google_security_meshca_v1_MeshCertificateResponse *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor(msg, UPB_SIZE(0, 0), UPB_SIZE(8, 16), UPB_TYPE_STRING, &val,
      arena);
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* THIRD_PARTY_ISTIO_SECURITY_PROTO_PROVIDERS_GOOGLE_MESHCA_PROTO_UPB_H_ */