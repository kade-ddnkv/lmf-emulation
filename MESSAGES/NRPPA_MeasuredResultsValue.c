/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-IEs"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#include "NRPPA_MeasuredResultsValue.h"

#include "NRPPA_ResultRSRP-EUTRA.h"
#include "NRPPA_ResultRSRQ-EUTRA.h"
#include "NRPPA_ProtocolIE-Single-Container.h"
static int
memb_NRPPA_valueAngleOfArrival_EUTRA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 719L)) {
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
memb_NRPPA_valueTimingAdvanceType1_EUTRA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 7690L)) {
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
memb_NRPPA_valueTimingAdvanceType2_EUTRA_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 7690L)) {
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
static asn_per_constraints_t asn_PER_memb_NRPPA_valueAngleOfArrival_EUTRA_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  719 }	/* (0..719) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NRPPA_valueTimingAdvanceType1_EUTRA_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  0,  7690 }	/* (0..7690) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_NRPPA_valueTimingAdvanceType2_EUTRA_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  0,  7690 }	/* (0..7690) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NRPPA_MeasuredResultsValue_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_NRPPA_MeasuredResultsValue_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_MeasuredResultsValue, choice.valueAngleOfArrival_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NRPPA_valueAngleOfArrival_EUTRA_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NRPPA_valueAngleOfArrival_EUTRA_constraint_1
		},
		0, 0, /* No default value */
		"valueAngleOfArrival-EUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_MeasuredResultsValue, choice.valueTimingAdvanceType1_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NRPPA_valueTimingAdvanceType1_EUTRA_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NRPPA_valueTimingAdvanceType1_EUTRA_constraint_1
		},
		0, 0, /* No default value */
		"valueTimingAdvanceType1-EUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NRPPA_MeasuredResultsValue, choice.valueTimingAdvanceType2_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_NRPPA_valueTimingAdvanceType2_EUTRA_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_NRPPA_valueTimingAdvanceType2_EUTRA_constraint_1
		},
		0, 0, /* No default value */
		"valueTimingAdvanceType2-EUTRA"
		},
	{ ATF_POINTER, 0, offsetof(struct NRPPA_MeasuredResultsValue, choice.resultRSRP_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ResultRSRP_EUTRA,
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
		"resultRSRP-EUTRA"
		},
	{ ATF_POINTER, 0, offsetof(struct NRPPA_MeasuredResultsValue, choice.resultRSRQ_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ResultRSRQ_EUTRA,
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
		"resultRSRQ-EUTRA"
		},
	{ ATF_POINTER, 0, offsetof(struct NRPPA_MeasuredResultsValue, choice.measuredResultsValue_Extension),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPPA_ProtocolIE_Single_Container_2792P9,
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
		"measuredResultsValue-Extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NRPPA_MeasuredResultsValue_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* valueAngleOfArrival-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* valueTimingAdvanceType1-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* valueTimingAdvanceType2-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* resultRSRP-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* resultRSRQ-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* measuredResultsValue-Extension */
};
asn_CHOICE_specifics_t asn_SPC_NRPPA_MeasuredResultsValue_specs_1 = {
	sizeof(struct NRPPA_MeasuredResultsValue),
	offsetof(struct NRPPA_MeasuredResultsValue, _asn_ctx),
	offsetof(struct NRPPA_MeasuredResultsValue, present),
	sizeof(((struct NRPPA_MeasuredResultsValue *)0)->present),
	asn_MAP_NRPPA_MeasuredResultsValue_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NRPPA_MeasuredResultsValue = {
	"MeasuredResultsValue",
	"MeasuredResultsValue",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NRPPA_MeasuredResultsValue_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_NRPPA_MeasuredResultsValue_1,
	6,	/* Elements count */
	&asn_SPC_NRPPA_MeasuredResultsValue_specs_1	/* Additional specs */
};

