
#ifndef _REFACTOR_CONFIG_H_
#define _REFACTOR_CONFIG_H_

// force the compiler to show a warning to confirm that this file is included
//#warning **** refactor_config.h: Using Settings from this File ****

#ifdef FIRMWARE_REFACTOR

//#warning **** Build: Refactor ****

//#undef USE_BERRY_DEBUG
//#define USE_BERRY_DEBUG

#ifdef USE_MQTT_AWS_IOT_LIGHT
#undef USE_MQTT_AWS_IOT_LIGHT
#endif // USE_MQTT_AWS_IOT_LIGHT

#ifndef USE_MQTT_TLS
#define USE_MQTT_TLS
#endif // USE_MQTT_TLS


#ifndef USE_MQTT_TLS_CA_CERT
#define USE_MQTT_TLS_CA_CERT
#endif // USE_MQTT_TLS_CA_CERT
#ifndef USE_MQTT_AWS_IOT
#define USE_MQTT_AWS_IOT
#endif // USE_MQTT_AWS_IOT


#ifdef MQTT_PORT
#undef MQTT_PORT
#endif // MQTT_PORT
#define MQTT_PORT 8883

#ifdef MQTT_TLS_ENABLED
#undef MQTT_TLS_ENABLED
#endif // MQTT_TLS_ENABLED
#define MQTT_TLS_ENABLED true

// -- CODE_IMAGE_STR is the name shown between brackets on the Information page or in INFO MQTT messages
#ifdef CODE_IMAGE_STR
#undef CODE_IMAGE_STR
#endif // CODE_IMAGE_STR
#define CODE_IMAGE_STR "refactor"

#ifdef WIFI_CONFIG_TOOL
#undef WIFI_CONFIG_TOOL
#endif
#define WIFI_CONFIG_TOOL WIFI_MANAGER_RESET_ONLY

#ifndef NO_CAPTIVE_PORTAL
#define NO_CAPTIVE_PORTAL
#endif

#endif // FIRMWARE_REFACTOR



#endif // _REFACTOR_CONFIG_H_
