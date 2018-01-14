/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_GANSSAddIonosphericModel_H_
#define	_GANSSAddIonosphericModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "IonosphericModel.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSAddIonosphericModel */
typedef struct GANSSAddIonosphericModel {
	BIT_STRING_t	 dataID;
	IonosphericModel_t	 ionoModel;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSAddIonosphericModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSAddIonosphericModel;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSAddIonosphericModel_H_ */
#include <asn_internal.h>