#pragma once
#include <iostream>
#include <string>
#include <queue>

using namespace std;
class Star {
public:
    double intensity() const;
private:
    string identifier;
    double distance;
};


