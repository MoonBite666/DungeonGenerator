#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H

#include <random>

namespace RG{
    inline static std::random_device rd;
    inline static std::mt19937 gen(rd());

    inline int randint(const int min, const int max) {
        std::uniform_int_distribution<> dis(min,max);
        return dis(gen);
    }
}

#endif //RANDOMGENERATOR_H
