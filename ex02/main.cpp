#include "Class.hpp"

Base* generate(void)
{
	switch (rand() % 3 + 1)
	{
		case 1:
		{
			cout << "Type created:	is A" << endl;
			return (new A);
			break;
		}
		case 2:
		{
			cout << "Type created:	is B" << endl;
			return (new B);
			break;
		}
		case 3:
		{
			cout << "Type created:	is C" << endl;
			return (new C);
			break;
		}
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		cout << "Ptr:		is A" << endl;
	else if (dynamic_cast<B*>(p))
		cout << "Ptr:		is B" << endl;
	else if (dynamic_cast<C*>(p))
		cout << "Ptr:		is C" << endl;
	else
		cout << "No type" << endl;
}

void identify(Base& p)
{
	try 
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		cout << "Ref:		is A" << endl;
		return ;
	}
	catch (bad_cast e) { (void)e; };
	try 
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		cout << "Ref:		is B" << endl;
		return ;
	}
	catch (bad_cast e){ (void)e; };
	try 
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		cout << "Ref:		is C" << endl;
		return ;
	}
	catch (bad_cast e){ (void)e; };
	cout << "No type" << endl;
	return ;
}

Base::~Base(void)
{
	
}
int main()
{
	std::srand(std::time(NULL));
	Base *ptr;
	ptr = generate();
	Base& ref = *ptr;
	identify(ptr);
	identify(ref);
	delete (ptr);
}