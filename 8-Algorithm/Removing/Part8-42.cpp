#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(vector<int>& v, int num)
{
	cout << "v" << num << " : ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;
}

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(50);

	Print(v1, 1);

	vector<int>::iterator iter_end;
	// �������� ���Ҹ� ���������� ������ ��, ���� �������� �ʴ´�. (�����)
	iter_end = remove(v1.begin(), v1.end(), 30);

	Print(v1, 1);
	
	// ������ �����ϴ� �Լ��� erase()
	v1.erase(iter_end, v1.end());
	Print(v1, 1);

	return 0;
}