#include <stdio.h>
#include <android/log.h>
#include <native.h>

JNIEXPORT jint JNICALL Java_com_example_ndk_methods_MainActivity_NativeAdd(JNIEnv* PEnv, jobject pObj, jint pa, jint pb)
{
	return pa + pb;
}

JNIEXPORT jint JNICALL Java_com_example_ndk_methods_MainActivity_NativeMulticate(JNIEnv* PEnv, jobject pObj, jint pa, jint pb)
{
	return pa * pb;
}


/*JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* pVm, void* reserved)
{
	JNIEnv* env;
	if( (*pVm)->GetEnv(pVm, (void **)&env, JNI_VERSION_1_6)){
		return -1;
	}
	JNINativeMethod nm[2];
	nm[0].name = "NativeAdd";
	nm[0].signature = "(II)I";
	nm[0].fnPtr = NativeAdd;

	nm[1].name = "NativeMulticate";
	nm[1].signature = "(II)I";
	nm[2].fnPtr = NativeMulticate;

	jclass  cls = (*env)->FindClass(env,"com.example.ndk.methods.MainActivity");
	//Register methods with env->RegisterNatives
	(*env)->RegisterNatives(evn, cls, nm, 2);
	return JNI_VERSION_1_6;
}*/
