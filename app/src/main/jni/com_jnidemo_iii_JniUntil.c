//
// Created by DengJf on 2017/10/31.
//
#include "com_jnidemo_iii_JniUntil.h"

JNIEXPORT jint JNICALL Java_com_jnidemo_1iii_JniUntil_askByJni
        (JNIEnv * env, jobject obj){
    //获取JniUntil实例
    jclass jniuntil=(*env)->GetObjectClass(env,obj);
    //获取a的id
    //第一个参数是环境，第二个参数是实例，第三个参数是变量名，第四个参数是签名
    jfieldID a_id=(*env)->GetStaticFieldID(env,jniuntil,"a","I");
    //通过a的id获取a的值
    jint a=(*env)->GetStaticIntField(env,jniuntil,a_id);
    //获取b的id
    jfieldID b_id=(*env)->GetStaticFieldID(env,jniuntil,"b","I");
    //通过b的id获取b的值
    jint b=(*env)->GetStaticIntField(env,jniuntil,b_id);
    //获取函数JniUntil.sum函数id
    //第一个参数是环境，第二个参数是实例，第三个参数是函数名，第四个参数是签名
    jmethodID id_sum=(*env)->GetStaticMethodID(env,jniuntil,"sum","(II)I");
    //调用sum函数
    //第一个参数是环境，第二个参数是实例，第三个参数是函数的id号，第四、五个参数是是sum()函数的参数
    int c=(*env)->CallStaticIntMethod(env,jniuntil,id_sum,a,b);
    //返回sum函数结果
    return c;
}

