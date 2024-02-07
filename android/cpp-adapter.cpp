#include <jni.h>
#include "react-native-keyboard-controller.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_keyboardcontroller_KeyboardControllerModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return keyboardcontroller::multiply(a, b);
}
