#include <string.h>
#include <jni.h>

JNIEXPORT jstring JNICALL Java_com_example_hellondk_MainActivity_getHelloNDK
  (JNIEnv* pEnv, jobject pObj)
{
	return (*pEnv)->NewStringUTF(pEnv, "Hello NDK!");
}
