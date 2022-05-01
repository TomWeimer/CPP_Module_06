#include "cast.hpp"
//pas de chiffre ne peut pas etre un nombre 
bool isChar(string litteral)
{
	if (litteral.length() != 1)
		return (false);
	if (litteral[0] < '0' || litteral[0] > '9')
		return (true);
	return (false);
}

bool isInt(string litteral)
{
	int i;
	int length;

	i = 0;
	length = litteral.length();
	if (litteral[0] == '-' && litteral[1] != '\0')
		i++;
	for (; i < length ; i++)
	{
		if (litteral[i] > '9' || litteral[i] < '0')
			return (false);
	}
	//	check overflow
	return (true);
}

bool isFloat(string litteral)
{
	int		i;
	int		length;
	bool	coma = false;

	i = 0;
	if (litteral[0] == '-' && litteral[1] != '\0')
		i++;
	length = litteral.length();
	if (litteral.at(length - 1) != 'f')
		return (false);
	for (; i < length - 1; i++)
	{
		if (litteral[i] == '.')
		{
			if (coma == true)
				return (false);
			coma = true;
		}
		else if (litteral[i] > '9' || litteral[i] < '0')
			return (false);
	}
		//check overflow
	return (true);
}

bool isDouble(string litteral)
{
	int		i;
	int		length;
	bool	coma = false;

	i = 0;
	if (litteral[0] == '-' && litteral[1] != '\0')
		i++;
	length = litteral.length();
	for (; i < length ; i++)
	{
		if (litteral[i] == '.')
		{
			if (coma == true)
				return (false);
			coma = true;
		}
		else if (litteral[i] > '9' || litteral[i] < '0')
			return (false);
	}
	//check overflow
	return (true);
}


int	litteralType(string litteral)
{
	t_type	functions[4] = {isChar, isInt, isFloat, isDouble};
	int		type[5] = {CHAR, INT, FLOAT, DOUBLE, OTHER};

	for (int i = 0; i < 4; i++)
	{
		if (functions[i](litteral) == true)
			return (type[i]);
	}
	return (type[4]);

}

void otherType(string litteral)
{
	int i;

	i = 0;
	if (litteral[0] == '-' && litteral[1] != '\0')
		i = 1;
	else if (litteral[0] == '+' && litteral[1] != '\0')
		i = 1;
	
	if (litteral.compare(i, litteral.length() - i, "inf") == 0)
	{
		printSpeciaux(litteral);
	}
	else if (litteral.compare("nan") == 0)
	{
		printSpeciaux(litteral);
	}
}