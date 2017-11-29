package com.jnidemo_iii;



public class JniUntil {
    public static int a=7;
    public static int b=8;

    public static int sum(int a,int b){
        return a+b;
    }

    public native int askByJni();

    static {
        System.loadLibrary("JniTest");
    }

}
