/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_internal_util */

#ifndef _Included_com_tightdb_internal_util
#define _Included_com_tightdb_internal_util
#ifdef __cplusplus
extern "C" {
#endif
#undef com_tightdb_internal_util_REQUIRED_JNI_VERSION
#define com_tightdb_internal_util_REQUIRED_JNI_VERSION 19i64
/*
 * Class:     com_tightdb_internal_util
 * Method:    nativeGetMemUsage
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_internal_util_nativeGetMemUsage
  (JNIEnv *, jclass);

/*
 * Class:     com_tightdb_internal_util
 * Method:    nativeGetVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_internal_util_nativeGetVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_tightdb_internal_util
 * Method:    nativeSetDebugLevel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_internal_util_nativeSetDebugLevel
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
