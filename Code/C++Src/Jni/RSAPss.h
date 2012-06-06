/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss */

#ifndef _Included_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
#define _Included_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
 * Method:    createRSASigner
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss_createRSASigner
  (JNIEnv *, jobject);

/*
 * Class:     edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
 * Method:    createRSAVerifier
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss_createRSAVerifier
  (JNIEnv *, jobject);

/*
 * Class:     edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
 * Method:    initRSAVerifier
 * Signature: (J[B[B)V
 */
JNIEXPORT void JNICALL Java_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss_initRSAVerifier
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray);

/*
 * Class:     edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
 * Method:    initRSACrtSigner
 * Signature: (J[B[B[B[B[B[B[B[B)V
 */
JNIEXPORT void JNICALL Java_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss_initRSACrtSigner
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
 * Method:    initRSASigner
 * Signature: (J[B[B[B)V
 */
JNIEXPORT void JNICALL Java_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss_initRSASigner
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
 * Method:    doSign
 * Signature: (J[BI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss_doSign
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss
 * Method:    doVerify
 * Signature: (J[B[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_biu_scapi_midLayer_asymmetricCrypto_digitalSignature_CryptoPPRSAPss_doVerify
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif