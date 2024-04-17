#pragma once
#include "Star.h"

class StarCompare {
public:
    bool operator()(const Star& star1, const Star& star2) const;

    double intensity(double distance) const;
};