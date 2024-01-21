#include "Algorithms.h"
#include <bitset>

std::size_t RemoveBit(std::size_t param, std::size_t bitIndex)
{
	std::bitset<CHAR_BIT * sizeof(param)> bitVal(param);

	for (std::size_t i = bitIndex; i > 0; i--) {
		bitVal[i] = bitVal[i - 1];
	}
	bitVal[0] = false;
	return bitVal.to_ullong();
}

std::size_t FindHighest(std::size_t param)
{
	std::bitset<CHAR_BIT * sizeof(param)> bitVal(param);

	std::size_t i = bitVal.size() - 1;
	for (; i > 0; i--) {
		if (bitVal[i]) { break; }
	}
	return i;
}

std::size_t ResetBit(std::size_t param, std::size_t bitIndex) 
{
	std::bitset<CHAR_BIT * sizeof(param)> bitVal(param);
	bitVal[bitIndex] = false;
	return bitVal.to_ullong();
}

std::size_t MoveBits(std::size_t param) 
{
	std::bitset<CHAR_BIT * sizeof(param)> bitVal(param);
	std::size_t h = FindHighest(param);
	bool j = bitVal[h];

	for (std::size_t i = h; i > 0; i--) {
		bitVal[i] = bitVal[i - 1];
	}
	bitVal[0] = j;

	return bitVal.to_ullong();
}

std::size_t Find10(std::size_t param)
{
	std::bitset<CHAR_BIT * sizeof(param)> bitVal(param);
	std::size_t i = FindHighest(param);
	int j = 0;
	for (i; i > 0; i--) {
		if ((bitVal[i] == 1) && (bitVal[i - 1] == 0)) {
			j++;
		}
	}
	return j;
}

std::size_t Find00(std::size_t param)
{
	std::bitset<CHAR_BIT * sizeof(param)> bitVal(param);
	std::size_t i = FindHighest(param);
	int j = 0;
	for (i; i > 0; i--) {
		if ((bitVal[i] == 0) && (bitVal[i - 1] == 0)) {
			j++;
		}
	}
	return j;
}