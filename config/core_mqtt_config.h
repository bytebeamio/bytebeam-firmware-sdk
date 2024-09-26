#ifndef CORE_MQTT_CONFIG_H
#define CORE_MQTT_CONFIG_H

#include <stdio.h>

#define LogError(message) printf("Error: %s\n", message)
#define LogWarn(message) printf("Warning: %s\n", message)
#define LogInfo(message) printf("Info: %s\n", message)

#define MQTT_STATE_ARRAY_MAX_COUNT (10U)

#define MQTT_MAX_CONNACK_RECEIVE_RETRY_COUNT (2U)

#define MQTT_PINGRESP_TIMEOUT_MS (5000U)

#define MQTT_RECV_POLLING_TIMEOUT_MS (1U)

#endif /* CORE_MQTT_CONFIG_H */
