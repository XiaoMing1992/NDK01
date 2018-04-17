//
// Created by HP on 2018-2-22.
//
#include "guyuanjun_com_ndk01_JniTest.h"
#include <stdio.h>

/*
 * Class:     guyuanjun_com_ndk01_JniTest
 * Method:    get
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_guyuanjun_com_ndk01_JniTest_get
  (JNIEnv * env, jobject thiz){
        printf("invoke get in c++\n");
        return env->NewStringUTF("hello from JNI !");
  }

/*
 * Class:     guyuanjun_com_ndk01_JniTest
 * Method:    set
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_guyuanjun_com_ndk01_JniTest_set
  (JNIEnv * env, jobject thiz, jstring string){
       printf("invoke set in c++\n");
       char* str = (char*)env->GetStringUTFChars(string, NULL);
       printf("%s\n", str);
       env->ReleaseStringUTFChars(string, str);
  }

