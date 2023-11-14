/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_NG_RANAccessPointPosition_H_
#define	_NRPPA_NG_RANAccessPointPosition_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_NG_RANAccessPointPosition__latitudeSign {
	NRPPA_NG_RANAccessPointPosition__latitudeSign_north	= 0,
	NRPPA_NG_RANAccessPointPosition__latitudeSign_south	= 1
} e_NRPPA_NG_RANAccessPointPosition__latitudeSign;
typedef enum NRPPA_NG_RANAccessPointPosition__directionOfAltitude {
	NRPPA_NG_RANAccessPointPosition__directionOfAltitude_height	= 0,
	NRPPA_NG_RANAccessPointPosition__directionOfAltitude_depth	= 1
} e_NRPPA_NG_RANAccessPointPosition__directionOfAltitude;

/* Forward declarations */
struct NRPPA_ProtocolExtensionContainer;

/* NRPPA_NG-RANAccessPointPosition */
typedef struct NRPPA_NG_RANAccessPointPosition {
	long	 latitudeSign;
	long	 latitude;
	long	 longitude;
	long	 directionOfAltitude;
	long	 altitude;
	long	 uncertaintySemi_major;
	long	 uncertaintySemi_minor;
	long	 orientationOfMajorAxis;
	long	 uncertaintyAltitude;
	long	 confidence;
	struct NRPPA_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_NG_RANAccessPointPosition_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_latitudeSign_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_directionOfAltitude_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_NG_RANAccessPointPosition;
extern asn_SEQUENCE_specifics_t asn_SPC_NRPPA_NG_RANAccessPointPosition_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_NG_RANAccessPointPosition_1[11];

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_NG_RANAccessPointPosition_H_ */
#include <asn_internal.h>
