/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_PRSInformationPos_H_
#define	_NRPPA_PRSInformationPos_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NRPPA_ProtocolExtensionContainer;

/* NRPPA_PRSInformationPos */
typedef struct NRPPA_PRSInformationPos {
	long	*pRS_IDPos;	/* OPTIONAL */
	long	 pRS_Resource_Set_IDPos;
	long	 pRS_Resource_IDPos;
	struct NRPPA_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_PRSInformationPos_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_PRSInformationPos;
extern asn_SEQUENCE_specifics_t asn_SPC_NRPPA_PRSInformationPos_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_PRSInformationPos_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_PRSInformationPos_H_ */
#include <asn_internal.h>
