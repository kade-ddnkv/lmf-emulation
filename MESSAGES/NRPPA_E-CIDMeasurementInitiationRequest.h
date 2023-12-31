/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Contents"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_E_CIDMeasurementInitiationRequest_H_
#define	_NRPPA_E_CIDMeasurementInitiationRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRPPA_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NRPPA_E-CIDMeasurementInitiationRequest */
typedef struct NRPPA_E_CIDMeasurementInitiationRequest {
	NRPPA_ProtocolIE_Container_2789P0_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_E_CIDMeasurementInitiationRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_E_CIDMeasurementInitiationRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_NRPPA_E_CIDMeasurementInitiationRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_E_CIDMeasurementInitiationRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_E_CIDMeasurementInitiationRequest_H_ */
#include <asn_internal.h>
