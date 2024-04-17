#include "Star2.h"#include <string>
#include <queue>

using namespace std;

//bool Star2::operator<(const Star& star2) const
//{
//    return (intensity() < star2.intensity());
//}

bool Star2::operator<(const Star& star2) const
{
    // Compare based on intensity
    return intensity() < star2.intensity();
}

string Star2::getIdentifier() const
{
    return identifier;
}

double Star2::intensity() const
{
    // Calculate intensity based on size, brightness, and distance
   // For simplicity, let's assume intensity is inversely proportional to distance
   // and directly proportional to brightness and size

   // Some arbitrary constants for demonstration purposes
    const double brightnessFactor = 1.5;
    const double sizeFactor = 2.0;
    const double distanceFactor = 0.8; // Intensity decreases with distance

    // Calculate intensity
    double calculatedIntensity = brightnessFactor * sizeFactor / (distanceFactor * distance);

    return calculatedIntensity;
}

bool Star2::operator<(const Star2& star2) const
{
    return false;
}



Star2::Star2(string id, double dist)
{}
