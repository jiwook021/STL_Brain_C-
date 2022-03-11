#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
};

int main()
{
	Point* p1 = new Point(2, 3); // 메모리 할당
	Point* p2 = new Point(5, 5); // 메모리 할당

	p1->Print(); // p1의 멤버 함수 호출
	p2->Print();

	delete p1; // 메모리 제거
	delete p2;
	return 0;
}