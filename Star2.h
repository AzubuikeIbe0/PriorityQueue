#pragma once
#include <iostream>
#include <string>
#include <queue>
#include "Star.h"
using namespace std;

class Star2 {

private:
    string identifier;
    double distance;
    bool operator<(const Star& star2) const;

public:
    Star2(string id, double dist);
    string getIdentifier() const;
    double intensity() const;
    bool operator< (const Star2& star2) const;

};