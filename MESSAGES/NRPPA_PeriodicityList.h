/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_PeriodicityList_H_
#define	_NRPPA_PeriodicityList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRPPA_PeriodicityItem.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NRPPA_PeriodicityList */
typedef struct NRPPA_PeriodicityList {
	A_SEQUENCE_OF(NRPPA_PeriodicityItem_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_PeriodicityList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_PeriodicityList;
extern asn_SET_OF_specifics_t asn_SPC_NRPPA_PeriodicityList_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_PeriodicityList_1[1];
extern asn_per_constraints_t asn_PER_type_NRPPA_PeriodicityList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_PeriodicityList_H_ */
#include <asn_internal.h>
