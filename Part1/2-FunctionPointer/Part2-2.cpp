#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "int: " << n << endl;
}

int main()
{
	void(*pf)(int);
	pf = Print;

	Print(10); // �Լ� ȣ��
	pf(10);    // �����͸� �̿��� �Լ� ȣ��, ù ��° ���
	(*pf)(10); // �����͸� �̿��� �Լ� ȣ��, �� ��° ���

	cout << endl;
	cout << Print << endl;
	cout << pf << endl;
	cout << *pf << endl;
	return 0;
}