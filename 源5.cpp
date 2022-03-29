#include<iostream>
using namespace std;
class point
{
public:
	point(int a = 0, int b = 0); //默认参数应该放在类内定义
	point(const point& p);
	~point() {};
	void print();
private:
	int x, y;
};
point::point(int a, int b) :x(a), y(b) {};
point::point(const point& p)
{
	x = 2 * p.x;
	y = 2 * p.y;
}
void point::print()
{
	cout << x << ' ' << y << endl;
}
point p_init()         // 对象是返回值第三种调用自定义拷贝构造函数
{
	point p5(3, 4);
	return p5;
}
void p_print(point p7)   //，对象是形参第二种调用自定义拷贝构造函数
{
	p7.print();
}
int main()
{
	point p1;
	p1.print();
	point p2(3, 2);
	p2.print();
	point p3(p2);     //使用自定义拷贝构造函数初始化
	p3.print();
	point p4 = p3;      //使用自定义拷贝函数初始化
	p4.print();
	point p6 = p_init();
	p6.print();
	p_print(p6);
	return 0;
}