/*
 * @file rand.c
 * @Author: wangxt<wangxt@tiros.com.cn>
 * @Created on: 2014-6-19
 */
#include "../../jni_include/sys_xrand.h"
#include "../../jni_include/jni_system.h"

int sys_rand(){
	JNIEnv * g_env;
	(*jvm)->AttachCurrentThread(jvm, &g_env, 0);

	jclass cls = (*g_env)->FindClass(g_env, "xc/api/Xrand");
	jmethodID mid = (*g_env)->GetStaticMethodID(g_env, cls, "sys_rand", "()I");
	jint rand = (*g_env)->CallStaticIntMethod(g_env, cls, mid);
	(*g_env)->DeleteLocalRef(g_env, cls);
	return rand;
}
