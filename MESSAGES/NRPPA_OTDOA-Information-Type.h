/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Contents"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_OTDOA_Information_Type_H_
#define	_NRPPA_OTDOA_Information_Type_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NRPPA_ProtocolIE_Single_Container;

/* NRPPA_OTDOA-Information-Type */
typedef struct NRPPA_OTDOA_Information_Type {
	A_SEQUENCE_OF(struct NRPPA_ProtocolIE_Single_Container) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_OTDOA_Information_Type_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_OTDOA_Information_Type;
extern asn_SET_OF_specifics_t asn_SPC_NRPPA_OTDOA_Information_Type_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_OTDOA_Information_Type_1[1];
extern asn_per_constraints_t asn_PER_type_NRPPA_OTDOA_Information_Type_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_OTDOA_Information_Type_H_ */
#include <asn_internal.h>