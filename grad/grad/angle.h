#pragma once
#include "grad.h"

class angle {
public:
    angle(int degrees, int minutes, int seconds);
    angle(grad gr);
    operator grad() const;
    operator double() const;
    void printAngle();
private:
    int deg;
    int min;
    int sec;
};
