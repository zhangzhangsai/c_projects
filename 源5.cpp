#include<iostream>
using namespace std;
class point
{
public:
	point(int a = 0, int b = 0); //Ĭ�ϲ���Ӧ�÷������ڶ���
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
point p_init()         // �����Ƿ���ֵ�����ֵ����Զ��忽�����캯��
{
	point p5(3, 4);
	return p5;
}
void p_print(point p7)   //���������βεڶ��ֵ����Զ��忽�����캯��
{
	p7.print();
}
int main()
{
	point p1;
	p1.print();
	point p2(3, 2);
	p2.print();
	point p3(p2);     //ʹ���Զ��忽�����캯����ʼ��
	p3.print();
	point p4 = p3;      //ʹ���Զ��忽��������ʼ��
	p4.print();
	point p6 = p_init();
	p6.print();
	p_print(p6);
	return 0;
}