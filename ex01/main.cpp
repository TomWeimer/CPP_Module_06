#include "main.hpp"
uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *data = new Data;
	data->c = 'a';
	data->integer = 42;
	data->floatNumber = 0.42;
	data->doubleNumber = 0.00042;

	std::cout << sizeof(*data) << std::endl;
	std::cout << "Address data: " << data << std::endl;
	std::cout << "Ptr : " << serialize(data) << std::endl;
	std::cout << "Address data: " << deserialize(serialize(data)) << std::endl;
	delete data;
}