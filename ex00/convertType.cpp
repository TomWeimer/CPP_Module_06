#include "cast.hpp"

void toChar(string litteral)
{
	char character;

	character = litteral[0];
	print(character);
	print(static_cast<int>(character));
	print(static_cast<float>(character));
	print(static_cast<double>(character));
}

void toInt(string litteral)
{
	int integer;
	size_t size;

	integer = stoi(litteral, &size);
	print(integer);
	print(static_cast<char>(integer));
	print(static_cast<float>(integer));
	print(static_cast<double>(integer));
}

void toFloat(string litteral)
{
	float floatNumber;
	size_t size;

	floatNumber = stof(litteral, &size);
	print(floatNumber);
	print(static_cast<char>(floatNumber));
	print(static_cast<int>(floatNumber));
	print(static_cast<double>(floatNumber));
}

void toDouble(string litteral)
{
	double doubleNumber;
	size_t size;

	doubleNumber = stod(litteral, &size);
	print(doubleNumber);
	print(static_cast<char>(doubleNumber));
	print(static_cast<int>(doubleNumber));
	print(static_cast<float>(doubleNumber));
}