#include "randomengine.h"
#include <random>


int RandomEngine::randomNumber(int from, int to)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(from, to);
    return distrib(gen);
}
