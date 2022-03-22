#include<iostream>
#include<cmath>
using namespace std;
class complex
{
public:
	complex(double r = 3.2, double i = 2.1) {};//不可进行函数重载
	~complex() {}; //默认也是这，通常默认即可
	double fab_complex();
private:
	double real, imag;
};
double complex::fab_complex()
{
	double t = real * real + imag * imag;
	return sqrt(t);
}
int main()
{
	complex C;           //无参直接用默认参数
	complex A(1.1);
	complex B(1.1, 2.3);
	return 0;
}