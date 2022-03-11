#include <iostream>
using namespace std;

class A
{

};

class B
{
public:
	operator A()
	{
		cout << "operator A() call" << endl;
		return A();
	}

	operator int()
	{
		cout << "operator int() call" << endl;
		return 10;
	}

	operator double()
	{
		cout << "operator double() call" << endl;
		return 5.5;
	}
};

int main()
{
	A a;
	int n;
	double d;

	B b;
	a = b;  // b.operator A() �Ͻ��� ȣ��
	n = b;  // b.operator int() �Ͻ��� ȣ��
	d = b;  // b.operator double() �Ͻ��� ȣ��
	cout << endl;

	a = b.operator A(); // ������ ȣ��
	n = b.operator int();
	d = b.operator double();
	return 0;
}