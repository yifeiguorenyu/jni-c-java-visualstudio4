#include "ndk1_Simple4.h"
//c调用java的方法
JNIEXPORT void JNICALL Java_ndk1_Simple4_callAddMethod
(JNIEnv * env, jobject jobj) {
	jclass jclazz = (*env)->GetObjectClass(env, jobj);
	jmethodID jmethod_id = (*env)->GetMethodID(env, jclazz, "add", "(II)I");
 jint sum=(*env)->CallIntMethod(env, jobj,jmethod_id , 23, 1098);
 printf("sum=%d", sum);
}