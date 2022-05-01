#ifndef CLASS_H
# define CLASS_H
#include <iostream>
#include <time.h>   
using namespace std;
class Base
{
	public:
	virtual ~Base();
};
class A : public Base	{};
class B : public Base	{};
class C : public Base	{};
typedef Base* (*createClass)(void);
#endif