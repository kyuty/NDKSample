/* DO NOT EDIT THIS FILE - it is machine generated */
#include "com_kyuty_ndksample_MainActivity.h"
#include "testCpp.h"
/* Header for class com_kyuty_ndksample_MainActivity */
extern "C" {

/*
 * Class:     com_kyuty_ndksample_MainActivity
 * Method:    getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_kyuty_ndksample_MainActivity_getStringFromNative
        (JNIEnv *env, jobject obj) {
    testCpp *tc;
    int temp = tc->getJniInt();
    if (temp == 666) {
        //return (*env)->NewStringUTF(env, "hello jni + 666");
        return env->NewStringUTF("hello jni + 666");
    } else {
        //return (*env)->NewStringUTF(env, "hello jni");
        return env->NewStringUTF("hello jni");
    }

}

JNIEXPORT void JNICALL
Java_com_kyuty_ndksample_MainActivity_getAnotherString(JNIEnv *env, jobject instance, jint n,
                                                       jintArray nn_, jstring str_) {
    jint *nn = env->GetIntArrayElements(nn_, NULL);
    const char *str = env->GetStringUTFChars(str_, 0);

    // TODO

    env->ReleaseIntArrayElements(nn_, nn, 0);
    env->ReleaseStringUTFChars(str_, str);
}

}
