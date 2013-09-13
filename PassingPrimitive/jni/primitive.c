#include "primitive.h"
#include <stdio.h>
#include <android/log.h>

JNIEXPORT jboolean JNICALL Java_com_example_ndk_MainActivity_passBooleanReturnBoolean
  (JNIEnv *pEnv, jobject pObj, jboolean pBoolean)
{
	__android_log_print(ANDROID_LOG_INFO,  "native", "%d in %d bytes", pBoolean, sizeof(jboolean));
	return  (!pBoolean);
}

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    passByteReturnByte
 * Signature: (B)B
 */
JNIEXPORT jbyte JNICALL Java_com_example_ndk_MainActivity_passByteReturnByte
  (JNIEnv *pEnv, jobject pObj, jbyte pByte)
{
	__android_log_print(ANDROID_LOG_INFO, "native", "%d in %d bytes",pByte, sizeof(jbyte));
	return pByte + 1;
}

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    passCharReturnChar
 * Signature: (C)B
 */
JNIEXPORT  jchar JNICALL Java_com_example_ndk_MainActivity_passCharReturnChar
  (JNIEnv *pEnv, jobject jObj, jchar pChar)
{
	__android_log_print(ANDROID_LOG_INFO, "native", "%c in %d bytes", pChar, sizeof(jchar));
}

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    passShortReturnShort
 * Signature: (S)S
 */
JNIEXPORT jshort JNICALL Java_com_example_ndk_MainActivity_passShortReturnShort
  (JNIEnv *pEnv, jobject jObj, jshort pShort)
{
	__android_log_print(ANDROID_LOG_INFO, "native", "%d in %d bytes", pShort, sizeof(jshort));
}

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    passIntReturnInt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_example_ndk_MainActivity_passIntReturnInt
  (JNIEnv *pEnv, jobject jObj, jint pInt)
{
	__android_log_print(ANDROID_LOG_INFO, "native", "%d in %d bytes", pInt, sizeof(jint));
}

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    passLongReturnLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_example_ndk_MainActivity_passLongReturnLong
  (JNIEnv *pEnv, jobject jObj, jlong pLong)
{
	__android_log_print(ANDROID_LOG_INFO, "native", "%llu in %d bytes", pLong, sizeof(jlong));
}

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    passFloatReturnFloat
 * Signature: (F)F
 */
JNIEXPORT jfloat JNICALL Java_com_example_ndk_MainActivity_passFloatReturnFloat
  (JNIEnv *Env, jobject jObj, jfloat pFloat)
{
	__android_log_print(ANDROID_LOG_INFO, "native", "%f in %d bytes", pFloat, sizeof(jfloat));
}

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    passDoubleReturnDouble
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_com_example_ndk_MainActivity_passDoubleReturnDouble
  (JNIEnv *pEnv, jobject jObj, jdouble pDouble)
{
	__android_log_print(ANDROID_LOG_INFO, "native", "%f in %d bytes", pDouble, sizeof(jdouble));
}


