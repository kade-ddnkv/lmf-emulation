/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_UL-AoA.h"

#include "NRPPA_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NRPPA_azimuthAoA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 3599L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NRPPA_zenithAoA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 1799L)) {
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
static asn_per_constraints_t asn_PER_type_NRPPA_angleCoordinateSystem_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NRPPA_azimuthAoA_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  3599 }	/* (0..3599) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NRPPA_zenithAoA_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1799 }	/* (0..1799) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NRPPA_angleCoordinateSystem_value2enum_4[] = {
	{ 0,	3,	"lCS" },
	{ 1,	3,	"gCS" }
};
static const unsigned int asn_MAP_NRPPA_angleCoordinateSystem_enum2value_4[] = {
	1,	/* gCS(1) */
	0	/* lCS(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NRPPA_angleCoordinateSystem_specs_4 = {
	asn_MAP_NRPPA_angleCoordinateSystem_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NRPPA_angleCoordinateSystem_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NRPPA_angleCoordinateSystem_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NRPPA_angleCoordinateSystem_4 = {
	"angleCoordinateSystem",
	"angleCoordinateSystem",
	&asn_OP_NativeEnumerated,
	asn_DEF_NRPPA_angleCoordinateSystem_tags_4,
	sizeof(asn_DEF_NRPPA_angleCoordinateSystem_tags_4)
		/sizeof(asn_DEF_NRPPA_angleCoordinateSystem_tags_4[0]) - 1, /* 1 */
	asn_DEF_NRPPA_angleCoordinateSystem_tags_4,	/* Same as above */
	sizeof(asn_DEF_NRPPA_angleCoordinateSystem_tags_4)
		/sizeof(asn_DEF_NRPPA_angleCoordinateSystem_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NRPPA_angleCoordinateSystem_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NRPPA_angleCoordinateSystem_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NRPPA_UL_AoA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_UL_AoA, azimuthAoA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NRPPA_azimuthAoA_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NRPPA_azimuthAoA_constraint_1
		},
		0, 0, /* No default value */
		"azimuthAoA"
		},
	{ ATF_POINTER, 3, offsetof(struct NRPPA_UL_AoA, zenithAoA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NRPPA_zenithAoA_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NRPPA_zenithAoA_constraint_1
		},
		0, 0, /* No default value */
		"zenithAoA"
		},
	{ ATF_POINTER, 2, offsetof(struct NRPPA_UL_AoA, angleCoordinateSystem),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_angleCoordinateSystem_4,
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
		"angleCoordinateSystem"
		},
	{ ATF_POINTER, 1, offsetof(struct NRPPA_UL_AoA, iE_extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ProtocolExtensionContainer_2816P99,
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
		"iE-extensions"
		},
};
static const int asn_MAP_NRPPA_UL_AoA_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NRPPA_UL_AoA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NRPPA_UL_AoA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* azimuthAoA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* zenithAoA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* angleCoordinateSystem */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NRPPA_UL_AoA_specs_1 = {
	sizeof(struct NRPPA_UL_AoA),
	offsetof(struct NRPPA_UL_AoA, _asn_ctx),
	asn_MAP_NRPPA_UL_AoA_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NRPPA_UL_AoA_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_UL_AoA = {
	"UL-AoA",
	"UL-AoA",
	&asn_OP_SEQUENCE,
	asn_DEF_NRPPA_UL_AoA_tags_1,
	sizeof(asn_DEF_NRPPA_UL_AoA_tags_1)
		/sizeof(asn_DEF_NRPPA_UL_AoA_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_UL_AoA_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_UL_AoA_tags_1)
		/sizeof(asn_DEF_NRPPA_UL_AoA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NRPPA_UL_AoA_1,
	4,	/* Elements count */
	&asn_SPC_NRPPA_UL_AoA_specs_1	/* Additional specs */
};

