/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NRPPA-CommonDataTypes"
 * 	found in "/home/kade-ddnkv/openairinterface5g/openair3/NRPPA/MESSAGES/ASN1/38455.asn"
 * 	`asn1c -gen-APER -gen-UPER -no-gen-OER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/kade-ddnkv/openairinterface5g/openair3/NRPPA/build/MESSAGES`
 */

#ifndef	_NRPPA_ProtocolIE_ID_H_
#define	_NRPPA_ProtocolIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NRPPA_ProtocolIE-ID */
typedef long	 NRPPA_ProtocolIE_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NRPPA_ProtocolIE_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NRPPA_ProtocolIE_ID;
asn_struct_free_f NRPPA_ProtocolIE_ID_free;
asn_struct_print_f NRPPA_ProtocolIE_ID_print;
asn_constr_check_f NRPPA_ProtocolIE_ID_constraint;
ber_type_decoder_f NRPPA_ProtocolIE_ID_decode_ber;
der_type_encoder_f NRPPA_ProtocolIE_ID_encode_der;
xer_type_decoder_f NRPPA_ProtocolIE_ID_decode_xer;
xer_type_encoder_f NRPPA_ProtocolIE_ID_encode_xer;
jer_type_encoder_f NRPPA_ProtocolIE_ID_encode_jer;
per_type_decoder_f NRPPA_ProtocolIE_ID_decode_uper;
per_type_encoder_f NRPPA_ProtocolIE_ID_encode_uper;
per_type_decoder_f NRPPA_ProtocolIE_ID_decode_aper;
per_type_encoder_f NRPPA_ProtocolIE_ID_encode_aper;
#define NRPPA_ProtocolIE_ID_id_Cause	((NRPPA_ProtocolIE_ID_t)0)
#define NRPPA_ProtocolIE_ID_id_CriticalityDiagnostics	((NRPPA_ProtocolIE_ID_t)1)
#define NRPPA_ProtocolIE_ID_id_LMF_UE_Measurement_ID	((NRPPA_ProtocolIE_ID_t)2)
#define NRPPA_ProtocolIE_ID_id_ReportCharacteristics	((NRPPA_ProtocolIE_ID_t)3)
#define NRPPA_ProtocolIE_ID_id_MeasurementPeriodicity	((NRPPA_ProtocolIE_ID_t)4)
#define NRPPA_ProtocolIE_ID_id_MeasurementQuantities	((NRPPA_ProtocolIE_ID_t)5)
#define NRPPA_ProtocolIE_ID_id_RAN_UE_Measurement_ID	((NRPPA_ProtocolIE_ID_t)6)
#define NRPPA_ProtocolIE_ID_id_E_CID_MeasurementResult	((NRPPA_ProtocolIE_ID_t)7)
#define NRPPA_ProtocolIE_ID_id_OTDOACells	((NRPPA_ProtocolIE_ID_t)8)
#define NRPPA_ProtocolIE_ID_id_OTDOA_Information_Type_Group	((NRPPA_ProtocolIE_ID_t)9)
#define NRPPA_ProtocolIE_ID_id_OTDOA_Information_Type_Item	((NRPPA_ProtocolIE_ID_t)10)
#define NRPPA_ProtocolIE_ID_id_MeasurementQuantities_Item	((NRPPA_ProtocolIE_ID_t)11)
#define NRPPA_ProtocolIE_ID_id_RequestedSRSTransmissionCharacteristics	((NRPPA_ProtocolIE_ID_t)12)
#define NRPPA_ProtocolIE_ID_id_Cell_Portion_ID	((NRPPA_ProtocolIE_ID_t)14)
#define NRPPA_ProtocolIE_ID_id_OtherRATMeasurementQuantities	((NRPPA_ProtocolIE_ID_t)15)
#define NRPPA_ProtocolIE_ID_id_OtherRATMeasurementQuantities_Item	((NRPPA_ProtocolIE_ID_t)16)
#define NRPPA_ProtocolIE_ID_id_OtherRATMeasurementResult	((NRPPA_ProtocolIE_ID_t)17)
#define NRPPA_ProtocolIE_ID_id_WLANMeasurementQuantities	((NRPPA_ProtocolIE_ID_t)19)
#define NRPPA_ProtocolIE_ID_id_WLANMeasurementQuantities_Item	((NRPPA_ProtocolIE_ID_t)20)
#define NRPPA_ProtocolIE_ID_id_WLANMeasurementResult	((NRPPA_ProtocolIE_ID_t)21)
#define NRPPA_ProtocolIE_ID_id_TDD_Config_EUTRA_Item	((NRPPA_ProtocolIE_ID_t)22)
#define NRPPA_ProtocolIE_ID_id_Assistance_Information	((NRPPA_ProtocolIE_ID_t)23)
#define NRPPA_ProtocolIE_ID_id_Broadcast	((NRPPA_ProtocolIE_ID_t)24)
#define NRPPA_ProtocolIE_ID_id_AssistanceInformationFailureList	((NRPPA_ProtocolIE_ID_t)25)
#define NRPPA_ProtocolIE_ID_id_SRSConfiguration	((NRPPA_ProtocolIE_ID_t)26)
#define NRPPA_ProtocolIE_ID_id_MeasurementResult	((NRPPA_ProtocolIE_ID_t)27)
#define NRPPA_ProtocolIE_ID_id_TRP_ID	((NRPPA_ProtocolIE_ID_t)28)
#define NRPPA_ProtocolIE_ID_id_TRPInformationTypeList	((NRPPA_ProtocolIE_ID_t)29)
#define NRPPA_ProtocolIE_ID_id_TRPInformationList	((NRPPA_ProtocolIE_ID_t)30)
#define NRPPA_ProtocolIE_ID_id_MeasurementBeamInfoRequest	((NRPPA_ProtocolIE_ID_t)31)
#define NRPPA_ProtocolIE_ID_id_ResultSS_RSRP	((NRPPA_ProtocolIE_ID_t)32)
#define NRPPA_ProtocolIE_ID_id_ResultSS_RSRQ	((NRPPA_ProtocolIE_ID_t)33)
#define NRPPA_ProtocolIE_ID_id_ResultCSI_RSRP	((NRPPA_ProtocolIE_ID_t)34)
#define NRPPA_ProtocolIE_ID_id_ResultCSI_RSRQ	((NRPPA_ProtocolIE_ID_t)35)
#define NRPPA_ProtocolIE_ID_id_AngleOfArrivalNR	((NRPPA_ProtocolIE_ID_t)36)
#define NRPPA_ProtocolIE_ID_id_GeographicalCoordinates	((NRPPA_ProtocolIE_ID_t)37)
#define NRPPA_ProtocolIE_ID_id_PositioningBroadcastCells	((NRPPA_ProtocolIE_ID_t)38)
#define NRPPA_ProtocolIE_ID_id_LMF_Measurement_ID	((NRPPA_ProtocolIE_ID_t)39)
#define NRPPA_ProtocolIE_ID_id_RAN_Measurement_ID	((NRPPA_ProtocolIE_ID_t)40)
#define NRPPA_ProtocolIE_ID_id_TRP_MeasurementRequestList	((NRPPA_ProtocolIE_ID_t)41)
#define NRPPA_ProtocolIE_ID_id_TRP_MeasurementResponseList	((NRPPA_ProtocolIE_ID_t)42)
#define NRPPA_ProtocolIE_ID_id_TRP_MeasurementReportList	((NRPPA_ProtocolIE_ID_t)43)
#define NRPPA_ProtocolIE_ID_id_SRSType	((NRPPA_ProtocolIE_ID_t)44)
#define NRPPA_ProtocolIE_ID_id_ActivationTime	((NRPPA_ProtocolIE_ID_t)45)
#define NRPPA_ProtocolIE_ID_id_SRSResourceSetID	((NRPPA_ProtocolIE_ID_t)46)
#define NRPPA_ProtocolIE_ID_id_TRPList	((NRPPA_ProtocolIE_ID_t)47)
#define NRPPA_ProtocolIE_ID_id_SRSSpatialRelation	((NRPPA_ProtocolIE_ID_t)48)
#define NRPPA_ProtocolIE_ID_id_SystemFrameNumber	((NRPPA_ProtocolIE_ID_t)49)
#define NRPPA_ProtocolIE_ID_id_SlotNumber	((NRPPA_ProtocolIE_ID_t)50)
#define NRPPA_ProtocolIE_ID_id_SRSResourceTrigger	((NRPPA_ProtocolIE_ID_t)51)
#define NRPPA_ProtocolIE_ID_id_TRPMeasurementQuantities	((NRPPA_ProtocolIE_ID_t)52)
#define NRPPA_ProtocolIE_ID_id_AbortTransmission	((NRPPA_ProtocolIE_ID_t)53)
#define NRPPA_ProtocolIE_ID_id_SFNInitialisationTime	((NRPPA_ProtocolIE_ID_t)54)
#define NRPPA_ProtocolIE_ID_id_ResultNR	((NRPPA_ProtocolIE_ID_t)55)
#define NRPPA_ProtocolIE_ID_id_ResultEUTRA	((NRPPA_ProtocolIE_ID_t)56)

#ifdef __cplusplus
}
#endif

#endif	/* _NRPPA_ProtocolIE_ID_H_ */
#include <asn_internal.h>
