/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_OtherRATMeasuredResultsValue_H_
#define	_NRPPA_OtherRATMeasuredResultsValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_OtherRATMeasuredResultsValue_PR {
	NRPPA_OtherRATMeasuredResultsValue_PR_NOTHING,	/* No components present */
	NRPPA_OtherRATMeasuredResultsValue_PR_resultGERAN,
	NRPPA_OtherRATMeasuredResultsValue_PR_resultUTRAN,
	NRPPA_OtherRATMeasuredResultsValue_PR_otherRATMeasuredResultsValue_Extension
} NRPPA_OtherRATMeasuredResultsValue_PR;

/* Forward declarations */
struct NRPPA_ResultGERAN;
struct NRPPA_ResultUTRAN;
struct NRPPA_ProtocolIE_Single_Container;

/* NRPPA_OtherRATMeasuredResultsValue */
typedef struct NRPPA_OtherRATMeasuredResultsValue {
	NRPPA_OtherRATMeasuredResultsValue_PR present;
	union NRPPA_OtherRATMeasuredResultsValue_u {
		struct NRPPA_ResultGERAN	*resultGERAN;
		struct NRPPA_ResultUTRAN	*resultUTRAN;
		struct NRPPA_ProtocolIE_Single_Container	*otherRATMeasuredResultsValue_Extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_OtherRATMeasuredResultsValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_OtherRATMeasuredResultsValue;
extern asn_CHOICE_specifics_t asn_SPC_NRPPA_OtherRATMeasuredResultsValue_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_OtherRATMeasuredResultsValue_1[3];
extern asn_per_constraints_t asn_PER_type_NRPPA_OtherRATMeasuredResultsValue_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_OtherRATMeasuredResultsValue_H_ */
#include <asn_internal.h>
