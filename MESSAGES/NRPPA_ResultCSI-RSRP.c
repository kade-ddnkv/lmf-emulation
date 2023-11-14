/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_ResultCSI-RSRP.h"

#include "NRPPA_ResultCSI-RSRP-Item.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NRPPA_ResultCSI_RSRP_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (SIZE(1..9)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NRPPA_ResultCSI_RSRP_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NRPPA_ResultCSI_RSRP_Item,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NRPPA_ResultCSI_RSRP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NRPPA_ResultCSI_RSRP_specs_1 = {
	sizeof(struct NRPPA_ResultCSI_RSRP),
	offsetof(struct NRPPA_ResultCSI_RSRP, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_ResultCSI_RSRP = {
	"ResultCSI-RSRP",
	"ResultCSI-RSRP",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NRPPA_ResultCSI_RSRP_tags_1,
	sizeof(asn_DEF_NRPPA_ResultCSI_RSRP_tags_1)
		/sizeof(asn_DEF_NRPPA_ResultCSI_RSRP_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_ResultCSI_RSRP_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_ResultCSI_RSRP_tags_1)
		/sizeof(asn_DEF_NRPPA_ResultCSI_RSRP_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NRPPA_ResultCSI_RSRP_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NRPPA_ResultCSI_RSRP_1,
	1,	/* Single element */
	&asn_SPC_NRPPA_ResultCSI_RSRP_specs_1	/* Additional specs */
};

