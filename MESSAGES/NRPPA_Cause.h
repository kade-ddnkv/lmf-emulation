/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_Cause_H_
#define	_NRPPA_Cause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRPPA_CauseRadioNetwork.h"
#include "NRPPA_CauseProtocol.h"
#include "NRPPA_CauseMisc.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_Cause_PR {
	NRPPA_Cause_PR_NOTHING,	/* No components present */
	NRPPA_Cause_PR_radioNetwork,
	NRPPA_Cause_PR_protocol,
	NRPPA_Cause_PR_misc,
	NRPPA_Cause_PR_cause_Extension
} NRPPA_Cause_PR;

/* Forward declarations */
struct NRPPA_ProtocolIE_Single_Container;

/* NRPPA_Cause */
typedef struct NRPPA_Cause {
	NRPPA_Cause_PR present;
	union NRPPA_Cause_u {
		NRPPA_CauseRadioNetwork_t	 radioNetwork;
		NRPPA_CauseProtocol_t	 protocol;
		NRPPA_CauseMisc_t	 misc;
		struct NRPPA_ProtocolIE_Single_Container	*cause_Extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_Cause;
extern asn_CHOICE_specifics_t asn_SPC_NRPPA_Cause_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_Cause_1[4];
extern asn_per_constraints_t asn_PER_type_NRPPA_Cause_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_Cause_H_ */
#include <asn_internal.h>
