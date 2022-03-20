#include<iostream>
using namespace std;
//隐式定义内联函数，可以提高程序的效率，但仅限于成员函数相当简短，
//第一种定义成员函数的方法更普遍
class point
{
private:
	int x, y;
public:
	void set_point(int a, int b)  //设置坐标点
	{
		x = a; y = b;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};
int main()
{
	point A;
	A. set_point(2, 4);
	cout << "x=" << A.getx() << ' ' << "y=" << A.gety() << endl;
	return 0;
}