#include <iostream>
using namespace std;

struct FuncObject
{
public:
	void operator()(int arg) const
	{
		cout << "Print int : " << arg << endl;
	}
};

void Print1(int arg)
{
	cout << "Print int : " << arg << endl;
}

int main()
{
	void (*Print2)(int) = Print1;
	FuncObject Print3;

	Print1(10); // 
	Print2(10); // 
	Print3(10); // 
	return 0;
}