#include <jni.h>
#include <android/log.h>
#include <stdio.h>
/*
 * Class:     com_example_ndk_MainActivity
 * Method:    referenceAssignAndNew
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_ndk_MainActivity_referenceAssignAndNew
  (JNIEnv *pEnv, jobject pObj, jstring pString)
{
	jstring globalRefNew = (*pEnv)->NewGlobalRef(pEnv, pString);
	jstring globalRefNew2 = (*pEnv)->NewGlobalRef(pEnv, pString);

	jstring globalRefAssignment  = globalRefNew;

	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "pString and globalRefNew: %d",(*pEnv)->IsSameObject(pEnv, pString, globalRefNew));
	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "globalRefNew and globalRefNew2: %d",(*pEnv)->IsSameObject(pEnv, globalRefNew, globalRefNew2));
	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "globalRefAssignment and globalRefNew: %d",(*pEnv)->IsSameObject(pEnv, globalRefAssignment, globalRefNew));

	//jstring and jobject are actually a pointer to void (void*), so we can print the location they're pointing at
	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "pointer size:%u", sizeof(void*));
	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "pString :%u", pStirng);
	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "globalRefNew: %u", globalRefNew);
	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "globalRefNew2 :%u", globalRefNew2);
	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "globalRefAssignment:%u", globalRefAssignment);



	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "call DeleteGlobalRef 1");
	ги*pEnv)->DeleteGlobalRef(pEnv, globalRefNew);

	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "call DeleteGlobalRef 2");
	ги*pEnv)->DeleteGlobalRef(pEnv, globalRefNew);

	__android_log_print(ANDROID_LOG_INFO, "ReferenceAssignmentAndNew", "call DeleteGlobalRef 3");
	ги*pEnv)->DeleteGlobalRef(pEnv, globalRefNew);
}
/*
 * Class:     com_example_ndk_MainActivity
 * Method:    localReference
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ndk_MainActivity_localReference
  (JNIEnv *pEnv, jobject pObj, jstring pString, jboolean pDelete)
{
	jstring stStr;
	int i;
	__android_log_print(ANDROID_LOG_INFO, "localReference", "delete after allocation:%d", pDelete);

	for (i = 0; i < 10000; ++i)
	{
		stStr = (*pEnv)->NewLocalRef(pEnv, pString);
		if (pDelete)
		{
			(*pEnv)->DeleteLocalRef(pEnv, stStr);
		}
	}

}

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    globalReference
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ndk_MainActivity_globalReference
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     com_example_ndk_MainActivity
 * Method:    weekReference
 * Signature: (Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_example_ndk_MainActivity_weekReference
  (JNIEnv *, jobject, jstring, jboolean);
