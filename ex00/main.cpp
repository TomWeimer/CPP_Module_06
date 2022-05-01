#include "cast.hpp"

void	scalarConversion(string litteral)
{
	t_convert	functions[4]	= {toChar, toInt, toFloat, toDouble};
	int			types[5]		= {CHAR, INT, FLOAT, DOUBLE, OTHER};
	int			actualType;

	actualType = litteralType(litteral);
	for (int i = 0; i < 4; i++)
	{
		if (actualType == types[i])
			return (functions[i](litteral));
	}
	//return ;
	return (otherType(litteral));
}

int	main(int argc, char *argv[])
{
	string	litteral;

	if (argc == 2)
	{
		litteral = argv[1];
		try
		{
			scalarConversion(litteral);
		}
		catch (out_of_range& e)
		{
			cout << e.what() << endl;
		}
	}
	else
		cout << "The numbers of arguments are incorrect!" << endl;
	return (1);
}