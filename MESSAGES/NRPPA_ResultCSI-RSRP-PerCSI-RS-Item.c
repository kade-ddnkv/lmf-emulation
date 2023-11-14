/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_ResultCSI-RSRP-PerCSI-RS-Item.h"

#include "NRPPA_ProtocolExtensionContainer.h"
static int
memb_NRPPA_cSI_RS_Index_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 95L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NRPPA_cSI_RS_Index_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  95 }	/* (0..95) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_ResultCSI_RSRP_PerCSI_RS_Item, cSI_RS_Index),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NRPPA_cSI_RS_Index_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NRPPA_cSI_RS_Index_constraint_1
		},
		0, 0, /* No default value */
		"cSI-RS-Index"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_ResultCSI_RSRP_PerCSI_RS_Item, valueCSI_RSRP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ValueRSRP_NR,
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
		"valueCSI-RSRP"
		},
	{ ATF_POINTER, 1, offsetof(struct NRPPA_ResultCSI_RSRP_PerCSI_RS_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ProtocolExtensionContainer_2816P59,
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
static const int asn_MAP_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cSI-RS-Index */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* valueCSI-RSRP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_specs_1 = {
	sizeof(struct NRPPA_ResultCSI_RSRP_PerCSI_RS_Item),
	offsetof(struct NRPPA_ResultCSI_RSRP_PerCSI_RS_Item, _asn_ctx),
	asn_MAP_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item = {
	"ResultCSI-RSRP-PerCSI-RS-Item",
	"ResultCSI-RSRP-PerCSI-RS-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tags_1,
	sizeof(asn_DEF_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tags_1)
		/sizeof(asn_DEF_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tags_1)
		/sizeof(asn_DEF_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_1,
	3,	/* Elements count */
	&asn_SPC_NRPPA_ResultCSI_RSRP_PerCSI_RS_Item_specs_1	/* Additional specs */
};

