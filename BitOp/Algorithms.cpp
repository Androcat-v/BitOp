#include "Algorithms.h"
#include <bitset>
#include <iostream>

std::size_t RemoveBit(std::size_t param, std::size_t bitIndex)
{
    std::size_t mask = 1ULL << bitIndex;
    return param & ~mask;
}

std::size_t FindHighest(std::size_t param)
{
    if (param == 0) {
        return -1;
    }

    std::size_t i = CHAR_BIT * sizeof(param) - 1;
    for (; i > 0; i--) {
        if (param >> i & 1ULL) {
            return i;
        }
    }
    return 0; 
}

std::size_t ResetBit(std::size_t param, std::size_t bitIndex)
{
    std::size_t mask = 1ULL << bitIndex;
    return param & ~mask;
}

std::size_t MoveBits(std::size_t param) {
    std::size_t highest = FindHighest(param);

    param &= ~(1ULL << highest);
    param <<= 1;
    return param | 1;
}

std::size_t Find10(std::size_t param)
{
    std::size_t i = FindHighest(param);
    int count = 0;
    for (; i > 0; i--) {
        if ((param >> i & 1ULL) && !(param >> (i - 1) & 1ULL)) {
            count++;
        }
    }
    return count;
}

std::size_t Find00(std::size_t param)
{
    std::size_t i = FindHighest(param);
    int count = 0;
    for (; i > 0; i--) {
        if (!(param >> i & 1ULL) && !(param >> (i - 1) & 1ULL)) {
            count++;
        }
    }
    return count;
}
