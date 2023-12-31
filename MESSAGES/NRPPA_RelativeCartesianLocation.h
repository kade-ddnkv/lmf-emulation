/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_RelativeCartesianLocation_H_
#define	_NRPPA_RelativeCartesianLocation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "NRPPA_LocationUncertainty.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_RelativeCartesianLocation__xYZunit {
	NRPPA_RelativeCartesianLocation__xYZunit_mm	= 0,
	NRPPA_RelativeCartesianLocation__xYZunit_cm	= 1,
	NRPPA_RelativeCartesianLocation__xYZunit_dm	= 2
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_RelativeCartesianLocation__xYZunit;

/* Forward declarations */
struct NRPPA_ProtocolExtensionContainer;

/* NRPPA_RelativeCartesianLocation */
typedef struct NRPPA_RelativeCartesianLocation {
	long	 xYZunit;
	long	 xvalue;
	long	 yvalue;
	long	 zvalue;
	NRPPA_LocationUncertainty_t	 locationUncertainty;
	struct NRPPA_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_RelativeCartesianLocation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_xYZunit_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_RelativeCartesianLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_NRPPA_RelativeCartesianLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_RelativeCartesianLocation_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_RelativeCartesianLocation_H_ */
#include <asn_internal.h>
