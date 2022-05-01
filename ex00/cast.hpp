#ifndef CAST_H
# define CAST_H

#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;

# define	CHAR	1
# define	INT		2
# define	FLOAT	3
# define	DOUBLE	4
# define	OTHER	5

int	litteralType(string litteral);
void print(char c);
void print(int integer);
void print(float floatNumber);
void print(double doubleNumber);
void printSpeciaux(string litteral);

void toChar(string litteral);
void toInt(string litteral);
void toFloat(string litteral);
void toDouble(string litteral);
void otherType(string litteral);

typedef bool(*t_type)(string);
typedef void(*t_convert)(string);
#endif