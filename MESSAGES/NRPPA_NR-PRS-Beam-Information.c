/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_NR-PRS-Beam-Information.h"

#include "NRPPA_ProtocolExtensionContainer.h"
#include "NRPPA_NR-PRS-Beam-InformationItem.h"
#include "NRPPA_LCG-to-GCS-TranslationItem.h"
static int
memb_NRPPA_nR_PRS_Beam_InformationList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 2UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NRPPA_lCG_to_GCS_TranslationList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 3UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NRPPA_nR_PRS_Beam_InformationList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NRPPA_lCG_to_GCS_TranslationList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NRPPA_nR_PRS_Beam_InformationList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NRPPA_lCG_to_GCS_TranslationList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  3 }	/* (SIZE(1..3)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_NRPPA_nR_PRS_Beam_InformationList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NRPPA_NR_PRS_Beam_InformationItem,
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
static const ber_tlv_tag_t asn_DEF_NRPPA_nR_PRS_Beam_InformationList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NRPPA_nR_PRS_Beam_InformationList_specs_2 = {
	sizeof(struct NRPPA_NR_PRS_Beam_Information__nR_PRS_Beam_InformationList),
	offsetof(struct NRPPA_NR_PRS_Beam_Information__nR_PRS_Beam_InformationList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NRPPA_nR_PRS_Beam_InformationList_2 = {
	"nR-PRS-Beam-InformationList",
	"nR-PRS-Beam-InformationList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NRPPA_nR_PRS_Beam_InformationList_tags_2,
	sizeof(asn_DEF_NRPPA_nR_PRS_Beam_InformationList_tags_2)
		/sizeof(asn_DEF_NRPPA_nR_PRS_Beam_InformationList_tags_2[0]) - 1, /* 1 */
	asn_DEF_NRPPA_nR_PRS_Beam_InformationList_tags_2,	/* Same as above */
	sizeof(asn_DEF_NRPPA_nR_PRS_Beam_InformationList_tags_2)
		/sizeof(asn_DEF_NRPPA_nR_PRS_Beam_InformationList_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NRPPA_nR_PRS_Beam_InformationList_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NRPPA_nR_PRS_Beam_InformationList_2,
	1,	/* Single element */
	&asn_SPC_NRPPA_nR_PRS_Beam_InformationList_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NRPPA_lCG_to_GCS_TranslationList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NRPPA_LCG_to_GCS_TranslationItem,
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
static const ber_tlv_tag_t asn_DEF_NRPPA_lCG_to_GCS_TranslationList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NRPPA_lCG_to_GCS_TranslationList_specs_4 = {
	sizeof(struct NRPPA_NR_PRS_Beam_Information__lCG_to_GCS_TranslationList),
	offsetof(struct NRPPA_NR_PRS_Beam_Information__lCG_to_GCS_TranslationList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NRPPA_lCG_to_GCS_TranslationList_4 = {
	"lCG-to-GCS-TranslationList",
	"lCG-to-GCS-TranslationList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NRPPA_lCG_to_GCS_TranslationList_tags_4,
	sizeof(asn_DEF_NRPPA_lCG_to_GCS_TranslationList_tags_4)
		/sizeof(asn_DEF_NRPPA_lCG_to_GCS_TranslationList_tags_4[0]) - 1, /* 1 */
	asn_DEF_NRPPA_lCG_to_GCS_TranslationList_tags_4,	/* Same as above */
	sizeof(asn_DEF_NRPPA_lCG_to_GCS_TranslationList_tags_4)
		/sizeof(asn_DEF_NRPPA_lCG_to_GCS_TranslationList_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NRPPA_lCG_to_GCS_TranslationList_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_NRPPA_lCG_to_GCS_TranslationList_4,
	1,	/* Single element */
	&asn_SPC_NRPPA_lCG_to_GCS_TranslationList_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NRPPA_NR_PRS_Beam_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_NR_PRS_Beam_Information, nR_PRS_Beam_InformationList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NRPPA_nR_PRS_Beam_InformationList_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NRPPA_nR_PRS_Beam_InformationList_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NRPPA_nR_PRS_Beam_InformationList_constraint_1
		},
		0, 0, /* No default value */
		"nR-PRS-Beam-InformationList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_NR_PRS_Beam_Information, lCG_to_GCS_TranslationList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NRPPA_lCG_to_GCS_TranslationList_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NRPPA_lCG_to_GCS_TranslationList_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NRPPA_lCG_to_GCS_TranslationList_constraint_1
		},
		0, 0, /* No default value */
		"lCG-to-GCS-TranslationList"
		},
	{ ATF_POINTER, 1, offsetof(struct NRPPA_NR_PRS_Beam_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ProtocolExtensionContainer_2816P25,
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
static const int asn_MAP_NRPPA_NR_PRS_Beam_Information_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_NRPPA_NR_PRS_Beam_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NRPPA_NR_PRS_Beam_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nR-PRS-Beam-InformationList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lCG-to-GCS-TranslationList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NRPPA_NR_PRS_Beam_Information_specs_1 = {
	sizeof(struct NRPPA_NR_PRS_Beam_Information),
	offsetof(struct NRPPA_NR_PRS_Beam_Information, _asn_ctx),
	asn_MAP_NRPPA_NR_PRS_Beam_Information_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NRPPA_NR_PRS_Beam_Information_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_NR_PRS_Beam_Information = {
	"NR-PRS-Beam-Information",
	"NR-PRS-Beam-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_NRPPA_NR_PRS_Beam_Information_tags_1,
	sizeof(asn_DEF_NRPPA_NR_PRS_Beam_Information_tags_1)
		/sizeof(asn_DEF_NRPPA_NR_PRS_Beam_Information_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_NR_PRS_Beam_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_NR_PRS_Beam_Information_tags_1)
		/sizeof(asn_DEF_NRPPA_NR_PRS_Beam_Information_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NRPPA_NR_PRS_Beam_Information_1,
	3,	/* Elements count */
	&asn_SPC_NRPPA_NR_PRS_Beam_Information_specs_1	/* Additional specs */
};
