#include <stdio.h>
#include <NRPPA_NRPPA-PDU.h>
#include <NRPPA_InitiatingMessage.h>
#include <NRPPA_PositioningInformationRequest.h>
#include <NRPPA_ProtocolIE-Field.h>
#include <asn_SEQUENCE_OF.h>
/*
 * This is a custom function which writes the
 * encoded output into some FILE stream.
 */

static int write_out(const void *buffer, size_t size, void *app_key)
{
  FILE *out_fp = app_key;
  size_t wrote;

  wrote = fwrite(buffer, 1, size, out_fp);

  return (wrote == size) ? 0 : -1;
}

int main(int ac, char **av)
{
  int ret_seq;

  // ---------------
  // CONFIGURATION PART

  NRPPA_NRPPA_PDU_t *pdu;
  
  // Allocate
  pdu = calloc(1, sizeof(NRPPA_NRPPA_PDU_t)); /* not malloc! */
  if (!pdu) {
    perror("calloc() failed");
    exit(71); /* better, EX_OSERR */
  }

  pdu->present = NRPPA_NRPPA_PDU_PR_initiatingMessage;
  
  NRPPA_InitiatingMessage_t *initMsg;
  
  // Allocate
  initMsg = calloc(1, sizeof(NRPPA_InitiatingMessage_t)); /* not malloc! */
  if (!initMsg) {
    perror("calloc() failed");
    exit(71); /* better, EX_OSERR */
  }
  
  initMsg->procedureCode = 9;
  initMsg->criticality = 0;
  initMsg->nrppatransactionID = 123;
  initMsg->value.present = NRPPA_InitiatingMessage__value_PR_PositioningInformationRequest;

  NRPPA_PositioningInformationRequest_t posReq;

  // NRPPA_PositioningInformationRequest_IEs_t *posIe;

  // // Allocate
  // posIe = calloc(1, sizeof(NRPPA_PositioningInformationRequest_IEs_t)); /* not malloc! */
  // if (!posIe) {
  //   perror("calloc() failed");
  //   exit(71); /* better, EX_OSERR */
  // }

  // posIe->id = 12; // id-RequestedSRSTransmissionCharacteristics = 12
  // posIe->criticality = 1; // ignore (В теории, т.к. Criticality ::= ENUMERATED { reject, ignore, notify })

  // Later, if needed, I will add SRS Transmission Characterictics.
  // Because now it seems that it is not nessesary.
  // From NRPPA Spec: "If the Requested SRS Transmission Characteristics IE is included in the POSITIONING INFORMATION REQUEST 
  // message, the NG-RAN node may take this information into account when configuring SRS transmissions for the UE".

  // posIe->value.present = NRPPA_PositioningInformationRequest_IEs__value_PR_RequestedSRSTransmissionCharacteristics;

  // NRPPA_RequestedSRSTransmissionCharacteristics_t reqSrs;
  // reqSrs.resourceType = ???;
  // reqSrs.bandwidth = ???;

  // NRPPA_SRSResourceSet_Item *srsResource;
  // srsResource SOMETHING SOMETHING

  // ret_seq = ASN_SEQUENCE_ADD(&reqSrs.listOfSRSResourceSet->list, srsResource);
  // if (ret_seq != 0) {
  //   perror("ASN_SEQUENCE_ADD failed");
  //   exit(1);
  // }

  // posIe->value.choice.RequestedSRSTransmissionCharacteristics = reqSrs;
  
  // ret_seq = ASN_SEQUENCE_ADD(&posReq.protocolIEs.list, posIe);
  // if (ret_seq != 0) {
  //   perror("ASN_SEQUENCE_ADD failed");
  //   exit(1);
  // }
  
  initMsg->value.choice.PositioningInformationRequest = posReq;

  pdu->choice.initiatingMessage = initMsg;


  // ---------------------
  // MAIN PART

  if (ac < 2) {
    fprintf(stderr, "Specify filename for BER output\n");
  } else {
    const char *filename = av[1];
    FILE *fp = fopen(filename, "wb"); /* for BER output */

    if (!fp) {
      perror(filename);
      exit(71); /* better, EX_OSERR */
    }

    void *buffer = NULL;
    ssize_t encoded = aper_encode_to_new_buffer(&asn_DEF_NRPPA_NRPPA_PDU, 0, pdu, &buffer);
    printf("number of bytes in buffer: %ld\n", encoded);
    
    if (encoded == -1) {
      printf("aper encoding failed\n");
      printf("but you can take a look at xer encoding:\n");
      xer_fprint(stdout, &asn_DEF_NRPPA_NRPPA_PDU, pdu);
      exit(1);
    }
    
    int written = fwrite(buffer, 1, encoded, fp);
    printf("N bytes written: %d\n", written);
    if (written == encoded) {
      printf("write successfull\n");
    } else {
      printf("write failed\n");
      exit(1);
    }

    for (int i = 0; i < encoded; i++) {
      printf("%x ", *((unsigned char *)buffer + i));
    }
    printf("<- that is hexadecimal representation of buffer\n");


    asn_codec_ctx_t st = {.max_stack_size = 100 * 1000};
    size_t length = encoded;
    NRPPA_NRPPA_PDU_t dec_pdu;
    memset(&dec_pdu, 0, sizeof(dec_pdu));
    NRPPA_NRPPA_PDU_t *dec_pdu_ptr = &dec_pdu;

    asn_dec_rval_t dec_ret;
    dec_ret = aper_decode(&st, &asn_DEF_NRPPA_NRPPA_PDU, (void **)&dec_pdu_ptr, buffer, length, 0, 0);

    if (dec_ret.code != RC_OK) {
      printf("Decode: dec_ret.code != RC_OK\n");
      exit(1);
    }
    printf("buffer successfully decoded back\n");
    printf("Decoded message:\n");
    xer_fprint(stdout, &asn_DEF_NRPPA_NRPPA_PDU, dec_pdu_ptr);


    fclose(fp);
    fprintf(stderr, "Created %s with APER encoded NRPPA_MeasurementRequest\n", filename);
  }

  /* Also print the constructed NRPPA_MeasurementRequest XER encoded (XML) */
  printf("Encoded message:\n");
  xer_fprint(stdout, &asn_DEF_NRPPA_NRPPA_PDU, pdu);

  return 0; /* Encoding finished successfully */
}