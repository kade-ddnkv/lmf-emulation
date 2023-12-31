/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Contents"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_MeasurementReport_H_
#define	_NRPPA_MeasurementReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRPPA_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NRPPA_MeasurementReport */
typedef struct NRPPA_MeasurementReport {
	NRPPA_ProtocolIE_Container_2789P19_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRPPA_MeasurementReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_MeasurementReport;
extern asn_SEQUENCE_specifics_t asn_SPC_NRPPA_MeasurementReport_specs_1;
extern asn_TYPE_member_t asn_MBR_NRPPA_MeasurementReport_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_MeasurementReport_H_ */
#include <asn_internal.h>
