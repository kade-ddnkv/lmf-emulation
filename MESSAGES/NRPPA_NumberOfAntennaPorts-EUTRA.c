/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_NumberOfAntennaPorts-EUTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NRPPA_NumberOfAntennaPorts_EUTRA_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NRPPA_NumberOfAntennaPorts_EUTRA_value2enum_1[] = {
	{ 0,	8,	"n1-or-n2" },
	{ 1,	2,	"n4" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NRPPA_NumberOfAntennaPorts_EUTRA_enum2value_1[] = {
	0,	/* n1-or-n2(0) */
	1	/* n4(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_NRPPA_NumberOfAntennaPorts_EUTRA_specs_1 = {
	asn_MAP_NRPPA_NumberOfAntennaPorts_EUTRA_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NRPPA_NumberOfAntennaPorts_EUTRA_enum2value_1,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NRPPA_NumberOfAntennaPorts_EUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_NumberOfAntennaPorts_EUTRA = {
	"NumberOfAntennaPorts-EUTRA",
	"NumberOfAntennaPorts-EUTRA",
	&asn_OP_NativeEnumerated,
	asn_DEF_NRPPA_NumberOfAntennaPorts_EUTRA_tags_1,
	sizeof(asn_DEF_NRPPA_NumberOfAntennaPorts_EUTRA_tags_1)
		/sizeof(asn_DEF_NRPPA_NumberOfAntennaPorts_EUTRA_tags_1[0]), /* 1 */
	asn_DEF_NRPPA_NumberOfAntennaPorts_EUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_NRPPA_NumberOfAntennaPorts_EUTRA_tags_1)
		/sizeof(asn_DEF_NRPPA_NumberOfAntennaPorts_EUTRA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NRPPA_NumberOfAntennaPorts_EUTRA_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NRPPA_NumberOfAntennaPorts_EUTRA_specs_1	/* Additional specs */
};

