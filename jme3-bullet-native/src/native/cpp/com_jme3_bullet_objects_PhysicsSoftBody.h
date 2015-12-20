/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_bullet_objects_PhysicsSoftBody */

#ifndef _Included_com_jme3_bullet_objects_PhysicsSoftBody
#define _Included_com_jme3_bullet_objects_PhysicsSoftBody
#ifdef __cplusplus
extern "C" {
#endif
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_NONE
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_NONE 0L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_01
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_01 1L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_02
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_02 2L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_03
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_03 4L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_04
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_04 8L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_05
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_05 16L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_06
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_06 32L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_07
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_07 64L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_08
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_08 128L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_09
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_09 256L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_10
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_10 512L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_11
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_11 1024L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_12
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_12 2048L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_13
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_13 4096L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_14
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_14 8192L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_15
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_15 16384L
#undef com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_16
#define com_jme3_bullet_objects_PhysicsSoftBody_COLLISION_GROUP_16 32768L
/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    createFromTriMesh
 * Signature: (Ljava/nio/IntBuffer;Ljava/nio/FloatBuffer;IZ)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_createFromTriMesh
  (JNIEnv *, jobject, jobject, jobject, jint, jboolean);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    ctr_PhysicsSoftBody
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_ctr_1PhysicsSoftBody__
  (JNIEnv *, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    ctr_PhysicsSoftBody
 * Signature: (I[Lcom/jme3/math/Vector3f;[F)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_ctr_1PhysicsSoftBody__I_3Lcom_jme3_math_Vector3f_2_3F
  (JNIEnv *, jobject, jint, jobjectArray, jfloatArray);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    initDefault
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_initDefault
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setSoftBodyWorldInfo
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setSoftBodyWorldInfo
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getSoftBodyWorldInfo
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getSoftBodyWorldInfo
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    appendMaterial
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_appendMaterial
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getMaterials
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getMaterials
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    addForce
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_addForce__JLcom_jme3_math_Vector3f_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    addForce
 * Signature: (JLcom/jme3/math/Vector3f;I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_addForce__JLcom_jme3_math_Vector3f_2I
  (JNIEnv *, jobject, jlong, jobject, jint);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    addAeroForceToNode
 * Signature: (JLcom/jme3/math/Vector3f;I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_addAeroForceToNode
  (JNIEnv *, jobject, jlong, jobject, jint);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    addAeroForceToFace
 * Signature: (JLcom/jme3/math/Vector3f;I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_addAeroForceToFace
  (JNIEnv *, jobject, jlong, jobject, jint);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    addVelocity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_addVelocity__JLcom_jme3_math_Vector3f_2
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setVelocity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setVelocity
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    addVelocity
 * Signature: (JLcom/jme3/math/Vector3f;I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_addVelocity__JLcom_jme3_math_Vector3f_2I
  (JNIEnv *, jobject, jlong, jobject, jint);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setMass
 * Signature: (JIF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setMass
  (JNIEnv *, jobject, jlong, jint, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getMass
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getMass
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getTotalMass
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getTotalMass
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setTotalMass
 * Signature: (JFZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setTotalMass
  (JNIEnv *, jobject, jlong, jfloat, jboolean);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setTotalDensity
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setTotalDensity
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setVolumeMass
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setVolumeMass
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setVolumeDensity
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setVolumeDensity
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    applyPhysicsTransform
 * Signature: (JLcom/jme3/math/Transform;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_applyPhysicsTransform
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    applyPhysicsTranslate
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_applyPhysicsTranslate
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    applyPhysicsRotation
 * Signature: (JLcom/jme3/math/Quaternion;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_applyPhysicsRotation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    applyPhysicsScale
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_applyPhysicsScale
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setPhysicsTransform
 * Signature: (JLcom/jme3/math/Transform;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setPhysicsTransform
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getPhysicsTransform
 * Signature: (JLcom/jme3/math/Transform;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getPhysicsTransform
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setPhysicsLocation
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setPhysicsLocation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getPhysicsLocation
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getPhysicsLocation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setPhysicsRotation
 * Signature: (JLcom/jme3/math/Quaternion;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setPhysicsRotation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getPhysicsRotation
 * Signature: (JLcom/jme3/math/Quaternion;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getPhysicsRotation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getRestLenghtScale
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getRestLenghtScale
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setRestLenghtScale
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setRestLenghtScale
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    setPose
 * Signature: (JZZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_setPose
  (JNIEnv *, jobject, jlong, jboolean, jboolean);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    resetLinkRestLengths
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_resetLinkRestLengths
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getVolume
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getVolume
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getClusterCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getClusterCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    generateBendingConstraints
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_generateBendingConstraints
  (JNIEnv *, jobject, jlong, jint, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    randomizeConstraints
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_randomizeConstraints
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    releaseCluster
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_releaseCluster
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    releaseClusters
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_releaseClusters
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    generateClusters
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_generateClusters
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    isInWorld
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_isInWorld
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    getBoundingCenter
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_getBoundingCenter
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_objects_PhysicsSoftBody
 * Method:    updateTriMesh
 * Signature: (JILjava/nio/IntBuffer;Ljava/nio/FloatBuffer;Ljava/nio/FloatBuffer;ZZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_objects_PhysicsSoftBody_updateTriMesh
  (JNIEnv *, jobject, jlong, jint, jobject, jobject, jobject, jboolean, jboolean);

#ifdef __cplusplus
}
#endif
#endif