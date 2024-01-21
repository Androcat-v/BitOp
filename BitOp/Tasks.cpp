#include "Tasks.h"
#include "Algorithms.h"
#include "Readers.h"
#include <iostream>
#include <bitset>

void Task1()
{
	using ParamBitSet = std::bitset<CHAR_BIT * sizeof(std::size_t)>;
	std::cout << "enter a number" << std::endl;
	std::size_t param = ReadSizeT();
	ParamBitSet bitVal(param);
	std::cout << bitVal << std::endl;

	std::cout << "enter a number of the bit (counting from right)" << std::endl;
	std::size_t bitIndex = ReadSizeT();

	std::cout << ParamBitSet(RemoveBit(param, bitIndex)) << std::endl;

}

void Task2()
{
	std::cout << "enter a number" << std::endl;
	std::size_t param = ReadSizeT();
	if (param != 0) { std::cout << "the index of the highest bit is  " << FindHighest(param) << std::endl; }
	else { std::cout << "no bits are equal to 1" << std::endl; };

}

void Task3()
{
	using ParamBitSet = std::bitset<CHAR_BIT * sizeof(std::size_t)>;
	std::cout << "enter a number" << std::endl;
	std::size_t param = ReadSizeT();
	ParamBitSet bitVal(param);
	std::cout << bitVal << std::endl;

	std::cout << "enter a number of the bit (counting from right)" << std::endl;
	std::size_t bitIndex = ReadSizeT();

	std::size_t result = ResetBit(param, bitIndex);
	std::cout << "The number after change: " << result << std::endl << ParamBitSet(result) << std::endl;
}

void Task4() 
{
	using ParamBitSet = std::bitset<CHAR_BIT * sizeof(std::size_t)>;
	std::cout << "enter a number" << std::endl;
	std::size_t param = ReadSizeT();
	ParamBitSet bitVal(param);
	std::cout << bitVal << std::endl;

	std::size_t result = MoveBits(param);
	std::cout << "The number after change: " << result << std::endl << ParamBitSet(result) << std::endl;
}

void Task5()
{
	using ParamBitSet = std::bitset<CHAR_BIT * sizeof(std::size_t)>;
	std::cout << "enter a number" << std::endl;
	std::size_t param = ReadSizeT();
	ParamBitSet bitVal(param);
	std::cout << bitVal << std::endl;
	std::cout << "The number of 10s: " << Find10(param) << std::endl;
}

void Task51()
{
	using ParamBitSet = std::bitset<CHAR_BIT * sizeof(std::size_t)>;
	std::cout << "enter a number" << std::endl;
	std::size_t param = ReadSizeT();
	ParamBitSet bitVal(param);
	std::cout << bitVal << std::endl;
	std::cout << "The number of 00s: " << Find00(param) << std::endl;
}
