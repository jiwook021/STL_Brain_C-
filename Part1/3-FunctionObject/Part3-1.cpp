#include <iostream>
using namespace std;

void Print()
{
	cout << "Global Function" << endl;
}

void Print(int a, int b)
{
	cout << "Global Function: " << a << ',' << b << endl;
}

struct Functor
{
	void operator()()
	{
		cout << "Function object: " << endl;
	}

	void operator()(int a, int b)
	{
		cout << "Function object:  " << a << ',' << b << endl;
	}
};

int main()
{
	Functor functor;

	Print();    
	functor();  
	
	Print(10, 20);
	functor(10, 20);
	return 0;
}