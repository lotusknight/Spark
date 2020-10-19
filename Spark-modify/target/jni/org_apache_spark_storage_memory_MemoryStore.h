/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_spark_storage_memory_MemoryStore */

#ifndef _Included_org_apache_spark_storage_memory_MemoryStore
#define _Included_org_apache_spark_storage_memory_MemoryStore
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_spark_storage_memory_MemoryStore
 * Method:    putIntoNative
 * Signature: (Ljava/lang/Object;Lscala/reflect/ClassTag;)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_memory_MemoryStore_putIntoNative
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_apache_spark_storage_memory_MemoryStore
 * Method:    getFromNative
 * Signature: (JLscala/reflect/ClassTag;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_apache_spark_storage_memory_MemoryStore_getFromNative
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     org_apache_spark_storage_memory_MemoryStore
 * Method:    getSizeNative
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_spark_storage_memory_MemoryStore_getSizeNative
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_apache_spark_storage_memory_MemoryStore
 * Method:    removeNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_spark_storage_memory_MemoryStore_removeNative
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif