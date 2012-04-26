/* bn.h for openssl */


#ifndef CYASSL_BN_H_
#define CYASSL_BN_H_

#include <cyassl/ctaocrypt/settings.h>

#ifdef __cplusplus
    extern "C" {
#endif

typedef struct CYASSL_BIGNUM {
    int neg;         /* openssh deference */
} CYASSL_BIGNUM;        


typedef struct CYASSL_BN_CTX CYASSL_BN_CTX;


CYASSL_API CYASSL_BN_CTX* CyaSSL_BN_CTX_new(void);
CYASSL_API void           CyaSSL_BN_CTX_init(CYASSL_BN_CTX*);
CYASSL_API void           CyaSSL_BN_CTX_free(CYASSL_BN_CTX*);

CYASSL_API CYASSL_BIGNUM* CyaSSL_BN_new(void);
CYASSL_API void           CyaSSL_BN_free(CYASSL_BIGNUM*);
CYASSL_API void           CyaSSL_BN_clear_free(CYASSL_BIGNUM*);


CYASSL_API int CyaSSL_BN_sub(CYASSL_BIGNUM*, const CYASSL_BIGNUM*,
	                         const CYASSL_BIGNUM*);
CYASSL_API int CyaSSL_BN_mod(CYASSL_BIGNUM*, const CYASSL_BIGNUM*,
	                         const CYASSL_BIGNUM*, const CYASSL_BN_CTX*);

CYASSL_API const CYASSL_BIGNUM* CyaSSL_BN_value_one(void);


CYASSL_API int CyaSSL_BN_num_bytes(const CYASSL_BIGNUM*);
CYASSL_API int CyaSSL_BN_num_bits(const CYASSL_BIGNUM*);

CYASSL_API int CyaSSL_BN_is_zero(const CYASSL_BIGNUM*);
CYASSL_API int CyaSSL_BN_is_one(const CYASSL_BIGNUM*);
CYASSL_API int CyaSSL_BN_is_odd(const CYASSL_BIGNUM*);

CYASSL_API int CyaSSL_BN_cmp(const CYASSL_BIGNUM*, const CYASSL_BIGNUM*);

CYASSL_API int CyaSSL_BN_bn2bin(const CYASSL_BIGNUM*, unsigned char*);
CYASSL_API CYASSL_BIGNUM* CyaSSL_BN_bin2bn(const unsigned char*, int len,
	                            CYASSL_BIGNUM* ret);

CYASSL_API int CyaSSL_mask_bits(CYASSL_BIGNUM*, int n);


typedef CYASSL_BIGNUM BIGNUM;
typedef CYASSL_BN_CTX BN_CTX;

#define BN_CTX_new        CyaSSL_BN_CTX_new
#define BN_CTX_init       CyaSSL_BN_CTX_init
#define BN_CTX_free       CyaSSL_BN_CTX_free

#define BN_new        CyaSSL_BN_new
#define BN_free       CyaSSL_BN_free
#define BN_clear_free CyaSSL_BN_clear_free

#define BN_num_bytes CyaSSL_BN_num_bytes
#define BN_num_bits  CyaSSL_BN_num_bits

#define BN_is_zero  CyaSSL_BN_is_zero
#define BN_is_one   CyaSSL_BN_is_one
#define BN_is_odd   CyaSSL_BN_is_odd

#define BN_cmp    CyaSSL_BN_cmp

#define BN_bn2bin  CyaSSL_BN_bn2bin
#define BN_bin2bn  CyaSSL_BN_bin2bn

#define BN_mod       CyaSSL_BN_mod
#define BN_sub       CyaSSL_BN_sub
#define BN_value_one CyaSSL_BN_value_one

#define BN_mask_bits CyaSSL_mask_bits

#ifdef __cplusplus
    }  /* extern "C" */ 
#endif


#endif /* CYASSL__H_ */

