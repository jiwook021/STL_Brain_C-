#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
	int operator[](int idx) const
	{
		if (idx == 1)
			return x;
		else if (idx == 0)
			return y;
		else
			throw "Cant do this";
	}
};

int main()
{
	Point pt(1, 2);

	pt.Print();

	cout << pt[0] << ',' << pt[1] << endl;
	return 0;
}