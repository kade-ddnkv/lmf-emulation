/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_PRSResourceSet_Item_H_
#define	_NRPPA_PRSResourceSet_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "NRPPA_PRSResource-List.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_PRSResourceSet_Item__subcarrierSpacing {
	NRPPA_PRSResourceSet_Item__subcarrierSpacing_kHz15	= 0,
	NRPPA_PRSResourceSet_Item__subcarrierSpacing_kHz30	= 1,
	NRPPA_PRSResourceSet_Item__subcarrierSpacing_kHz60	= 2,
	NRPPA_PRSResourceSet_Item__subcarrierSpacing_kHz120	= 3
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_PRSResourceSet_Item__subcarrierSpacing;
typedef enum NRPPA_PRSResourceSet_Item__combSize {
	NRPPA_PRSResourceSet_Item__combSize_n2	= 0,
	NRPPA_PRSResourceSet_Item__combSize_n4	= 1,
	NRPPA_PRSResourceSet_Item__combSize_n6	= 2,
	NRPPA_PRSResourceSet_Item__combSize_n12	= 3
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_PRSResourceSet_Item__combSize;
typedef enum NRPPA_PRSResourceSet_Item__cPType {
	NRPPA_PRSResourceSet_Item__cPType_normal	= 0,
	NRPPA_PRSResourceSet_Item__cPType_extended	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_PRSResourceSet_Item__cPType;
typedef enum NRPPA_PRSResourceSet_Item__resourceSetPeriodicity {
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n4	= 0,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n5	= 1,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n8	= 2,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n10	= 3,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n16	= 4,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n20	= 5,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n32	= 6,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n40	= 7,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n64	= 8,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n80	= 9,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n160	= 10,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n320	= 11,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n640	= 12,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n1280	= 13,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n2560	= 14,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n5120	= 15,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n10240	= 16,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n20480	= 17,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n40960	= 18,
	NRPPA_PRSResourceSet_Item__resourceSetPeriodicity_n81920	= 19
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_PRSResourceSet_Item__resourceSetPeriodicity;
typedef enum NRPPA_PRSResourceSet_Item__resourceRepetitionFactor {
	NRPPA_PRSResourceSet_Item__resourceRepetitionFactor_rf1	= 0,
	NRPPA_PRSResourceSet_Item__resourceRepetitionFactor_rf2	= 1,
	NRPPA_PRSResourceSet_Item__resourceRepetitionFactor_rf4	= 2,
	NRPPA_PRSResourceSet_Item__resourceRepetitionFactor_rf6	= 3,
	NRPPA_PRSResourceSet_Item__resourceRepetitionFactor_rf8	= 4,
	NRPPA_PRSResourceSet_Item__resourceRepetitionFactor_rf16	= 5,
	NRPPA_PRSResourceSet_Item__resourceRepetitionFactor_rf32	= 6
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_PRSResourceSet_Item__resourceRepetitionFactor;
typedef enum NRPPA_PRSResourceSet_Item__resourceTimeGap {
	NRPPA_PRSResourceSet_Item__resourceTimeGap_tg1	= 0,
	NRPPA_PRSResourceSet_Item__resourceTimeGap_tg2	= 1,
	NRPPA_PRSResourceSet_Item__resourceTimeGap_tg4	= 2,
	NRPPA_PRSResourceSet_Item__resourceTimeGap_tg8	= 3,
	NRPPA_PRSResourceSet_Item__resourceTimeGap_tg16	= 4,
	NRPPA_PRSResourceSet_Item__resourceTimeGap_tg32	= 5
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_PRSResourceSet_Item__resourceTimeGap;
typedef enum NRPPA_PRSResourceSet_Item__resourceNumberofSymbols {
	NRPPA_PRSResourceSet_Item__resourceNumberofSymbols_n2	= 0,
	NRPPA_PRSResourceSet_Item__resourceNumberofSymbols_n4	= 1,
	NRPPA_PRSResourceSet_Item__resourceNumberofSymbols_n6	= 2,
	NRPPA_PRSResourceSet_Item__resourceNumberofSymbols_n12	= 3
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_PRSResourceSet_Item__resourceNumberofSymbols;

/* Forward declarations */
struct NRPPA_PRSMuting;
struct NRPPA_ProtocolExtensionContainer;

/* NRPPA_PRSResourceSet-Item */
typedef struct NRPPA_PRSResourceSet_Item {
	long	 pRSResourceSetID;
	long	 subcarrierSpacing;
	long	 pRSbandwidth;
	long	 startPRB;
	long	 pointA;
	long	 combSize;
	long	 cPType;
	long	 resourceSetPeriodicity;
	long	 resourceSetSlotOffset;
	long	 resourceRepetitionFactor;
	long	 resourceTimeGap;
	long	 resourceNumberofSymbols;
	struct NRPPA_PRSMuting	*pRSMuting;	/* OPTIONAL */
	long	 pRSResourceTransmitPower;
	NRPPA_PRSResource_List_t	 pRSResource_List;
	struct NRPPA_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_PRSResourceSet_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_subcarrierSpacing_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_combSize_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_cPType_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_resourceSetPeriodicity_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_resourceRepetitionFactor_45;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_resourceTimeGap_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NRPPA_resourceNumberofSymbols_62;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_PRSResourceSet_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_NRPPA_PRSResourceSet_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_PRSResourceSet_Item_1[16];

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_PRSResourceSet_Item_H_ */
#include <asn_internal.h>
