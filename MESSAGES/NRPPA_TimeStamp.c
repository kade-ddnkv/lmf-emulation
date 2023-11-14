/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_TimeStamp.h"

#include "NRPPA_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NRPPA_TimeStamp_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_TimeStamp, systemFrameNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_SystemFrameNumber,
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
		"systemFrameNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_TimeStamp, slotIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NRPPA_TimeStampSlotIndex,
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
		"slotIndex"
		},
	{ ATF_POINTER, 2, offsetof(struct NRPPA_TimeStamp, measurementTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_SFNInitialisationTime,
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
		"measurementTime"
		},
	{ ATF_POINTER, 1, offsetof(struct NRPPA_TimeStamp, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ProtocolExtensionContainer_2816P91,
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
		"iE-Extension"
		},
};
static const int asn_MAP_NRPPA_TimeStamp_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_NRPPA_TimeStamp_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NRPPA_TimeStamp_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemFrameNumber */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* slotIndex */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measurementTime */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_NRPPA_TimeStamp_specs_1 = {
	sizeof(struct NRPPA_TimeStamp),
	offsetof(struct NRPPA_TimeStamp, _asn_ctx),
	asn_MAP_NRPPA_TimeStamp_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NRPPA_TimeStamp_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_TimeStamp = {
	"TimeStamp",
	"TimeStamp",
	&asn_OP_SEQUENCE,
	asn_DEF_NRPPA_TimeStamp_tags_1,
	sizeof(asn_DEF_NRPPA_TimeStamp_tags_1)
		/sizeof(asn_DEF_NRPPA_TimeStamp_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_TimeStamp_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_TimeStamp_tags_1)
		/sizeof(asn_DEF_NRPPA_TimeStamp_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NRPPA_TimeStamp_1,
	4,	/* Elements count */
	&asn_SPC_NRPPA_TimeStamp_specs_1	/* Additional specs */
};
