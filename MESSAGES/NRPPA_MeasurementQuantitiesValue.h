/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_MeasurementQuantitiesValue_H_
#define	_NRPPA_MeasurementQuantitiesValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_MeasurementQuantitiesValue {
	NRPPA_MeasurementQuantitiesValue_cell_ID	= 0,
	NRPPA_MeasurementQuantitiesValue_angleOfArrival	= 1,
	NRPPA_MeasurementQuantitiesValue_timingAdvanceType1	= 2,
	NRPPA_MeasurementQuantitiesValue_timingAdvanceType2	= 3,
	NRPPA_MeasurementQuantitiesValue_rSRP	= 4,
	NRPPA_MeasurementQuantitiesValue_rSRQ	= 5,
	/*
	 * Enumeration is extensible
	 */
	NRPPA_MeasurementQuantitiesValue_sS_RSRP	= 6,
	NRPPA_MeasurementQuantitiesValue_sS_RSRQ	= 7,
	NRPPA_MeasurementQuantitiesValue_cSI_RSRP	= 8,
	NRPPA_MeasurementQuantitiesValue_cSI_RSRQ	= 9,
	NRPPA_MeasurementQuantitiesValue_angleOfArrivalNR	= 10
} e_NRPPA_MeasurementQuantitiesValue;

/* NRPPA_MeasurementQuantitiesValue */
typedef long	 NRPPA_MeasurementQuantitiesValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NRPPA_MeasurementQuantitiesValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_MeasurementQuantitiesValue;
extern const asn_INTEGER_specifics_t asn_SPC_NRPPA_MeasurementQuantitiesValue_specs_1;
asn_struct_free_f NRPPA_MeasurementQuantitiesValue_free;
asn_struct_print_f NRPPA_MeasurementQuantitiesValue_print;
asn_constr_check_f NRPPA_MeasurementQuantitiesValue_constraint;
ber_type_decoder_f NRPPA_MeasurementQuantitiesValue_decode_ber;
der_type_encoder_f NRPPA_MeasurementQuantitiesValue_encode_der;
xer_type_decoder_f NRPPA_MeasurementQuantitiesValue_decode_xer;
xer_type_encoder_f NRPPA_MeasurementQuantitiesValue_encode_xer;
jer_type_encoder_f NRPPA_MeasurementQuantitiesValue_encode_jer;
per_type_decoder_f NRPPA_MeasurementQuantitiesValue_decode_uper;
per_type_encoder_f NRPPA_MeasurementQuantitiesValue_encode_uper;
per_type_decoder_f NRPPA_MeasurementQuantitiesValue_decode_aper;
per_type_encoder_f NRPPA_MeasurementQuantitiesValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_MeasurementQuantitiesValue_H_ */
#include <asn_internal.h>