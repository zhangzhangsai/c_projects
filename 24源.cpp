#include<iostream>
using namespace std;
//指针和引用调用对象中的成员
class point
{
private:
	int x, y;
public:
	void set_point(int, int);
	int getx();
	int gety();
};
void point::set_point(int m,int n)
{
	x = m; y = n;
}
int point::getx()
{
	return x;
}
int point::gety()
{
	return y;
}
int main()
{
	point A;
	point* pp = &A;
	point& B = A;
	pp->set_point(2, 3);
	cout << "x=" << pp->getx() << ' ' << "y=" << pp->gety() << endl;
	cout << "x=" << (*pp).getx() << ' ' << "y=" << (*pp).gety() << endl;
	cout << "x=" << B.getx() << ' ' << "y=" << B.gety() << endl;
	return 0;
}