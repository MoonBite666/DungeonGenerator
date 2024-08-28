#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H

#include <random>

namespace RG{
    inline static std::random_device rd;
    inline static std::mt19937 gen(rd());

    template<typename T>
    inline T randInteger(const T min, const T max) {
        std::uniform_int_distribution<decltype(min)> dis(min,max);
        return dis(gen);
    }
}

#endif //RANDOMGENERATOR_H
