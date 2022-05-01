#include "cast.hpp"
void print(char c)
{
	if (isprint(c))
	{
		cout << "char:	\'" << c << "\'" << endl;
	}
	else
		cout << "char:	Non displayable" << endl; 
}

void print(int integer)
{
	cout << "int:	" << integer  << endl;
}

void print(float floatNumber)
{
	cout << fixed << std::setprecision(2) << "float:	" << floatNumber << "f" << endl;
}

void print(double doubleNumber)
{
	cout << fixed << std::setprecision(2) << "double:	" << doubleNumber  << endl;
}

void printSpeciaux(string litteral)
{
	cout << "char:	impossible" << endl;
	cout << "int:	impossible" << endl;
	cout << "float:	" << litteral << "f" << endl;
	cout << "double:	" << litteral  << endl;

}
