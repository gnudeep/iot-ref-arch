/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_wso2_iot_refarch_rpi_agent_DHTSensor */

#ifndef _Included_com_pi4j_wiringpi_DHTSensor
#define _Included_com_pi4j_component_dht_DHTSensor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_pi4j_component_dht_DHTSensor
 * Method:    readSensor
 * Signature: (II)[F
 */
JNIEXPORT void JNICALL Java_org_wso2_iot_refarch_rpi_agent_DHTSensor_readSensor
  (JNIEnv *, jobject, jint, jint);
int * readDHTRaw(int, int );

#ifdef __cplusplus
}
#endif
#endif