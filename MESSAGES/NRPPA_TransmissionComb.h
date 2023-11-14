/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_TransmissionComb_H_
#define	_NRPPA_TransmissionComb_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_TransmissionComb_PR {
	NRPPA_TransmissionComb_PR_NOTHING,	/* No components present */
	NRPPA_TransmissionComb_PR_n2,
	NRPPA_TransmissionComb_PR_n4,
	NRPPA_TransmissionComb_PR_choice_extension
} NRPPA_TransmissionComb_PR;

/* Forward declarations */
struct NRPPA_ProtocolIE_Single_Container;

/* NRPPA_TransmissionComb */
typedef struct NRPPA_TransmissionComb {
	NRPPA_TransmissionComb_PR present;
	union NRPPA_TransmissionComb_u {
		struct NRPPA_TransmissionComb__n2 {
			long	 combOffset_n2;
			long	 cyclicShift_n2;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *n2;
		struct NRPPA_TransmissionComb__n4 {
			long	 combOffset_n4;
			long	 cyclicShift_n4;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *n4;
		struct NRPPA_ProtocolIE_Single_Container	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_TransmissionComb_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_TransmissionComb;
extern asn_CHOICE_specifics_t asn_SPC_NRPPA_TransmissionComb_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_TransmissionComb_1[3];
extern asn_per_constraints_t asn_PER_type_NRPPA_TransmissionComb_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_TransmissionComb_H_ */
#include <asn_internal.h>
