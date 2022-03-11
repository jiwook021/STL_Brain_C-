#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "Global Function: " << n << endl;
}

namespace A
{
	void Print(int n)
	{
		cout << "namespace A Global Function: " << n << endl;
	}
}

class Point
{
public:
	static void Print(int n)
	{
		cout << "Point class static member function: " << n << endl;
	}
};

int main()
{
	void (*pf)(int); 

	Print(10);        
	A::Print(10);     
	Point::Print(10); 

	pf = Print;
	pf(10);          
	pf = A::Print;
	pf(10);           
	pf = Point::Print;
	pf(10);          
	return 0;
}