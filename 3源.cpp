#include<iostream>
#include<cmath>
using namespace std;
class complex
{
public:
	complex(double r = 3.2, double i = 2.1) {};//���ɽ��к�������
	~complex() {}; //Ĭ��Ҳ���⣬ͨ��Ĭ�ϼ���
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
	complex C;           //�޲�ֱ����Ĭ�ϲ���
	complex A(1.1);
	complex B(1.1, 2.3);
	return 0;
}