/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_WLANBand_H_
#define	_NRPPA_WLANBand_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NRPPA_WLANBand {
	NRPPA_WLANBand_band2dot4	= 0,
	NRPPA_WLANBand_band5	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NRPPA_WLANBand;

/* NRPPA_WLANBand */
typedef long	 NRPPA_WLANBand_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NRPPA_WLANBand_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_WLANBand;
extern const asn_INTEGER_specifics_t asn_SPC_NRPPA_WLANBand_specs_1;
asn_struct_free_f NRPPA_WLANBand_free;
asn_struct_print_f NRPPA_WLANBand_print;
asn_constr_check_f NRPPA_WLANBand_constraint;
ber_type_decoder_f NRPPA_WLANBand_decode_ber;
der_type_encoder_f NRPPA_WLANBand_encode_der;
xer_type_decoder_f NRPPA_WLANBand_decode_xer;
xer_type_encoder_f NRPPA_WLANBand_encode_xer;
jer_type_encoder_f NRPPA_WLANBand_encode_jer;
per_type_decoder_f NRPPA_WLANBand_decode_uper;
per_type_encoder_f NRPPA_WLANBand_encode_uper;
per_type_decoder_f NRPPA_WLANBand_decode_aper;
per_type_encoder_f NRPPA_WLANBand_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_WLANBand_H_ */
#include <asn_internal.h>
