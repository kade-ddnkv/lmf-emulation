/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_DL_PRSMutingPattern_H_
#define	_NRPPA_DL_PRSMutingPattern_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_DL_PRSMutingPattern_PR {
	NRPPA_DL_PRSMutingPattern_PR_NOTHING,	/* No components present */
	NRPPA_DL_PRSMutingPattern_PR_two,
	NRPPA_DL_PRSMutingPattern_PR_four,
	NRPPA_DL_PRSMutingPattern_PR_six,
	NRPPA_DL_PRSMutingPattern_PR_eight,
	NRPPA_DL_PRSMutingPattern_PR_sixteen,
	NRPPA_DL_PRSMutingPattern_PR_thirty_two,
	NRPPA_DL_PRSMutingPattern_PR_choice_extension
} NRPPA_DL_PRSMutingPattern_PR;

/* Forward declarations */
struct NRPPA_ProtocolIE_Single_Container;

/* NRPPA_DL-PRSMutingPattern */
typedef struct NRPPA_DL_PRSMutingPattern {
	NRPPA_DL_PRSMutingPattern_PR present;
	union NRPPA_DL_PRSMutingPattern_u {
		BIT_STRING_t	 two;
		BIT_STRING_t	 four;
		BIT_STRING_t	 six;
		BIT_STRING_t	 eight;
		BIT_STRING_t	 sixteen;
		BIT_STRING_t	 thirty_two;
		struct NRPPA_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_DL_PRSMutingPattern_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_DL_PRSMutingPattern;
extern asn_CHOICE_specifics_t asn_SPC_NRPPA_DL_PRSMutingPattern_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_DL_PRSMutingPattern_1[7];
extern asn_per_constraints_t asn_PER_type_NRPPA_DL_PRSMutingPattern_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_DL_PRSMutingPattern_H_ */
#include <asn_internal.h>
