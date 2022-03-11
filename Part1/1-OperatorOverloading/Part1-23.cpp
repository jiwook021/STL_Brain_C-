#include <iostream>
using namespace std;

class A
{

};

class B
{
public:
	B() { cout << "B() Constructor" << endl; }
	B(A& _a) { cout << "B(A _a) Constructor" << endl; }
	B(int n) { cout << "B(int n) Constructor" << endl; }
	B(double d) { cout << "B(double d) Constructor" << endl; }
};

int main()
{
	A a;
	int n = 10;
	double d = 5.5;

	B b;   // B() ������ ȣ��
	// �����Ϸ��� a Ÿ���� ��ü�� b�� �������� ��ȯ�ϱ� ���� �����ڸ� Ȯ���Ѵ�.
	b = a; // b = B(a) �Ͻ��� ������ ȣ�� �� ����
	b = n; // b = B(n) �Ͻ��� ������ ȣ�� �� ����
	b = d; // b = B(d) �Ͻ��� ������ ȣ�� �� ����
	return 0;
}