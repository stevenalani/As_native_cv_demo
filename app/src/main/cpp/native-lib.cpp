#include <jni.h>
#include <string>
#include <opencv2/core.hpp>
extern "C"
JNIEXPORT jstring JNICALL
Java_de_hs_1esslingen_as_1native_1cv_1demo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
