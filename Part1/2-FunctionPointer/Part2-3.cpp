#include <iostream>
using namespace std;

void Print()
{
	cout << "Statis Function Print()" << endl;
}

class Point
{
public:
	void Print()
	{
		cout << "Member Function Print()" << endl;
	}
};

int main()
{
	Point pt;
	Point* p = &pt;

	Print();    
	pt.Print(); 
	p->Print(); 
	return 0;
}