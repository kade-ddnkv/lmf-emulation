/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_MeasurementBeamInfo.h"

#include "NRPPA_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NRPPA_MeasurementBeamInfo_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NRPPA_MeasurementBeamInfo, pRS_Resource_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_PRS_Resource_ID,
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
		"pRS-Resource-ID"
		},
	{ ATF_POINTER, 3, offsetof(struct NRPPA_MeasurementBeamInfo, pRS_Resource_Set_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_PRS_Resource_Set_ID,
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
		"pRS-Resource-Set-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct NRPPA_MeasurementBeamInfo, sSB_Index),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_SSB_Index,
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
		"sSB-Index"
		},
	{ ATF_POINTER, 1, offsetof(struct NRPPA_MeasurementBeamInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ProtocolExtensionContainer_2816P20,
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
		"iE-Extensions"
		},
};
static const int asn_MAP_NRPPA_MeasurementBeamInfo_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NRPPA_MeasurementBeamInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NRPPA_MeasurementBeamInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pRS-Resource-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pRS-Resource-Set-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sSB-Index */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NRPPA_MeasurementBeamInfo_specs_1 = {
	sizeof(struct NRPPA_MeasurementBeamInfo),
	offsetof(struct NRPPA_MeasurementBeamInfo, _asn_ctx),
	asn_MAP_NRPPA_MeasurementBeamInfo_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NRPPA_MeasurementBeamInfo_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_MeasurementBeamInfo = {
	"MeasurementBeamInfo",
	"MeasurementBeamInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_NRPPA_MeasurementBeamInfo_tags_1,
	sizeof(asn_DEF_NRPPA_MeasurementBeamInfo_tags_1)
		/sizeof(asn_DEF_NRPPA_MeasurementBeamInfo_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_MeasurementBeamInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_MeasurementBeamInfo_tags_1)
		/sizeof(asn_DEF_NRPPA_MeasurementBeamInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NRPPA_MeasurementBeamInfo_1,
	4,	/* Elements count */
	&asn_SPC_NRPPA_MeasurementBeamInfo_specs_1	/* Additional specs */
};
