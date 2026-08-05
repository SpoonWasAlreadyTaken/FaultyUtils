#pragma once
#include <random>

inline std::random_device rd;

inline int RandomNumber(int min, int max) // generates a random number based on input parameters
{
    std::uniform_int_distribution<> distr(min, max);
    return distr(rd);
}
