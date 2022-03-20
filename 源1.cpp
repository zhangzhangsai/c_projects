#include<iostream>
using namespace std;
class point
{
private:
	int x, y;
public:
	void set_point(int, int);
	int getx();
	int gety();
};
void point::set_point(int a, int b)
{
	x = a;
	y = b;
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
	point op;
	op.set_point(1, 2);
	cout << "x=" << op.getx() << ' ' << "y=" << op.gety() << endl;
	return 0;
}