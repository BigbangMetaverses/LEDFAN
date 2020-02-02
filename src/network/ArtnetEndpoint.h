//
// Created by Lukas Tenbrink on 02.02.20.
//

#ifndef LED_FAN_ARTNETENDPOINT_H
#define LED_FAN_ARTNETENDPOINT_H


#include "../../../../.platformio/packages/toolchain-xtensa32/xtensa-esp32-elf/include/stdint.h"

struct ArtnetEndpoint {
    int port;
    uint8_t *array;
    int arraySize;
};

#endif //LED_FAN_ARTNETENDPOINT_H
