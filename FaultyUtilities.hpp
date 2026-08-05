#pragma once
#include <random>
#include <cmath>

inline std::random_device rd;

inline int RandomInt(int min, int max) {
    std::uniform_int_distribution<> distr(min, max);
    return distr(rd);
}

inline float RandomFloatPrecise(float min, float max, uint8_t precision) { /* slow but controls number of decimal points */
    min *= (float)std::pow(10, precision);
    max *= (float)std::pow(10, precision);
    std::uniform_int_distribution<> distr(min, max);
    return (float)distr(rd) / (float)std::pow(10, precision);
}

inline float RandomFloat(float min, float max) {
    std::uniform_real_distribution<float> distr(min, max);
    return distr(rd);
}

inline double RandomDouble(double min, double max) {
    std::uniform_real_distribution<double> distr(min, max);
    return distr(rd);
}
