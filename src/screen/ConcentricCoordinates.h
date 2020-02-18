//
// Created by Lukas Tenbrink on 01.02.20.
//

#ifndef LED_FAN_CONCENTRICCOORDINATES_H
#define LED_FAN_CONCENTRICCOORDINATES_H


#include <util/IntRoller.h>

class ConcentricCoordinates {
public:
    static float *ringRadii(float *result, int count);
    static float *sampledCartesian(IntRoller *resolution, float *radii, int *count);

    static IntRoller *resolution(int ringCount, int a, int b);
};


#endif //LED_FAN_CONCENTRICCOORDINATES_H
