#include <iostream>
using namespace std;

class Array
{
	int* arr;
	int size;
	int capacity;

public:
	Array(int cap = 100) : arr(0), size(0), capacity(cap)
	{
		arr = new int[capacity];
	}

	~Array()
	{
		delete[] arr;
	}

	void Add(int data)
	{
		if (size < capacity)
			arr[size++] = data;
	}

	int Size() const
	{
		return size;
	}

	int operator[](int idx) const
	{
		cout << "ar.operator[](int) const" << endl;
		return arr[idx];
	}

	int& operator[](int idx)
	{
		cout << "ar.operator[](int)" << endl;
		return arr[idx];
	}
};

int main()
{
	Array ar(10);
	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	cout << ar[0] << endl;  // ar.operator[](int)�� ȣ��
	cout << endl;

	const Array& ar2 = ar;
	cout << ar2[0] << endl; // ar.operator[](int) const�� ȣ��
	cout << endl;

	ar[0] = 100; // ar.operator[](int)�� ȣ��
	cout << ar[0] << endl;
	//ar2[0] = 100;
	return 0;

}