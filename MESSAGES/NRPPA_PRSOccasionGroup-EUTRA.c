/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_PRSOccasionGroup-EUTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NRPPA_PRSOccasionGroup_EUTRA_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NRPPA_PRSOccasionGroup_EUTRA_value2enum_1[] = {
	{ 0,	3,	"og2" },
	{ 1,	3,	"og4" },
	{ 2,	3,	"og8" },
	{ 3,	4,	"og16" },
	{ 4,	4,	"og32" },
	{ 5,	4,	"og64" },
	{ 6,	5,	"og128" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NRPPA_PRSOccasionGroup_EUTRA_enum2value_1[] = {
	6,	/* og128(6) */
	3,	/* og16(3) */
	0,	/* og2(0) */
	4,	/* og32(4) */
	1,	/* og4(1) */
	5,	/* og64(5) */
	2	/* og8(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_NRPPA_PRSOccasionGroup_EUTRA_specs_1 = {
	asn_MAP_NRPPA_PRSOccasionGroup_EUTRA_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NRPPA_PRSOccasionGroup_EUTRA_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NRPPA_PRSOccasionGroup_EUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_PRSOccasionGroup_EUTRA = {
	"PRSOccasionGroup-EUTRA",
	"PRSOccasionGroup-EUTRA",
	&asn_OP_NativeEnumerated,
	asn_DEF_NRPPA_PRSOccasionGroup_EUTRA_tags_1,
	sizeof(asn_DEF_NRPPA_PRSOccasionGroup_EUTRA_tags_1)
		/sizeof(asn_DEF_NRPPA_PRSOccasionGroup_EUTRA_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_PRSOccasionGroup_EUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_PRSOccasionGroup_EUTRA_tags_1)
		/sizeof(asn_DEF_NRPPA_PRSOccasionGroup_EUTRA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NRPPA_PRSOccasionGroup_EUTRA_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NRPPA_PRSOccasionGroup_EUTRA_specs_1	/* Additional specs */
};

