#include "StarCompare.h"

bool StarCompare::operator()(const Star& star1, const Star& star2) const
{
    return star1.intensity() < star2.intensity();
}

double StarCompare::intensity(double distance) const
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



