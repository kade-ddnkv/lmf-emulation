/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-PDU-Contents"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_E-CIDMeasurementInitiationResponse.h"

asn_TYPE_member_t asn_MBR_NRPPA_E_CIDMeasurementInitiationResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_E_CIDMeasurementInitiationResponse, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ProtocolIE_Container_2789P1,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_NRPPA_E_CIDMeasurementInitiationResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NRPPA_E_CIDMeasurementInitiationResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_NRPPA_E_CIDMeasurementInitiationResponse_specs_1 = {
	sizeof(struct NRPPA_E_CIDMeasurementInitiationResponse),
	offsetof(struct NRPPA_E_CIDMeasurementInitiationResponse, _asn_ctx),
	asn_MAP_NRPPA_E_CIDMeasurementInitiationResponse_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_E_CIDMeasurementInitiationResponse = {
	"E-CIDMeasurementInitiationResponse",
	"E-CIDMeasurementInitiationResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_NRPPA_E_CIDMeasurementInitiationResponse_tags_1,
	sizeof(asn_DEF_NRPPA_E_CIDMeasurementInitiationResponse_tags_1)
		/sizeof(asn_DEF_NRPPA_E_CIDMeasurementInitiationResponse_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_E_CIDMeasurementInitiationResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_E_CIDMeasurementInitiationResponse_tags_1)
		/sizeof(asn_DEF_NRPPA_E_CIDMeasurementInitiationResponse_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NRPPA_E_CIDMeasurementInitiationResponse_1,
	1,	/* Elements count */
	&asn_SPC_NRPPA_E_CIDMeasurementInitiationResponse_specs_1	/* Additional specs */
};

