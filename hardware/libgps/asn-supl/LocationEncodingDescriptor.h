/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Ver2-ULP-Components"
 * 	found in "../ver2-ulp-components.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_LocationEncodingDescriptor_H_
#define	_LocationEncodingDescriptor_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LocationEncodingDescriptor {
	LocationEncodingDescriptor_lCI	= 0,
	LocationEncodingDescriptor_aSN1	= 1
	/*
	 * Enumeration is extensible
	 */
} e_LocationEncodingDescriptor;

/* LocationEncodingDescriptor */
typedef long	 LocationEncodingDescriptor_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationEncodingDescriptor;
asn_struct_free_f LocationEncodingDescriptor_free;
asn_struct_print_f LocationEncodingDescriptor_print;
asn_constr_check_f LocationEncodingDescriptor_constraint;
ber_type_decoder_f LocationEncodingDescriptor_decode_ber;
der_type_encoder_f LocationEncodingDescriptor_encode_der;
xer_type_decoder_f LocationEncodingDescriptor_decode_xer;
xer_type_encoder_f LocationEncodingDescriptor_encode_xer;
per_type_decoder_f LocationEncodingDescriptor_decode_uper;
per_type_encoder_f LocationEncodingDescriptor_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LocationEncodingDescriptor_H_ */
#include <asn_internal.h>