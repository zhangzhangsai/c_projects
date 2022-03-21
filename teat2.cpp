#include<iostream>
using namespace std;
//这是定义成员函数的第三种方法：必须将声明和定义放在同一个头文件中，否则编译无法进行
class point
{
private:
	int x, y;
public:
	inline void set_point(int, int);    //声明可以不指出形参名字
	inline int getx();
	inline int gety();
};
inline void point::set_point(int a, int b)
{
	x = a; y = b;
}
inline int point::getx()
{
	return x;
}
inline int point::gety()            //定义和证明中inline取其一就好
{
	return y;
}
int main()
{
	point A;
	A.set_point(1, 3);
	cout << "x=" << A.getx() << ' ' << "y = " << A.gety() << endl;
	return 0;
}