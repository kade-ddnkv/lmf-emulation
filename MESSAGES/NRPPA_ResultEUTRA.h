/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_ResultEUTRA_H_
#define	_NRPPA_ResultEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NRPPA_ResultEUTRA_Item;

/* NRPPA_ResultEUTRA */
typedef struct NRPPA_ResultEUTRA {
	A_SEQUENCE_OF(struct NRPPA_ResultEUTRA_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_ResultEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_ResultEUTRA;
extern asn_SET_OF_specifics_t asn_SPC_NRPPA_ResultEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_ResultEUTRA_1[1];
extern asn_per_constraints_t asn_PER_type_NRPPA_ResultEUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_ResultEUTRA_H_ */
#include <asn_internal.h>
