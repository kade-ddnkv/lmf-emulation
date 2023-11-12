# lmf-emulation

_asn1 nrppa-pdu_ - пытаюсь создать свое ASN1 сообщение, которое должно принять gNB  
_asn1 ngap-pdu_ - выгрузил логи из сообщения N1N2MessageTransfer для session modification request для примера; оно шло от smf к amf  

_n1n2_post_nrppa_ - пытаюсь запросить N1N2MessageTransfer в AMF  
_n2_post_nrppa_ - пытаюсь запросить NonUEN2MessageTransfer в AMF  

test_nrppa.c - пытаюсь закодировать ASN1 NRPPA сообщение в APER кодировке (т.к. в ней работает OAI)
