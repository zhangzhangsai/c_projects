#include<iostream>
#include<cmath>
using namespace std;
class complex
{
private:
	float real, imag;
public:
	complex(float, float);
	float fab_complex();
};
complex::complex(float a, float b)
{
	real = a;
	imag = b;
}
float complex::fab_complex()
{
	float t = real * real + imag * imag;
	return sqrt(t);
}
int main()
{
	//complex A(1.2, 1.5); //��һ�ֳ�ʼ��
	complex* pa = new complex(1.2, 1.5); //�ڶ��ֳ�ʼ��������������
	//cout << "fabs= " << A.fab_complex() << endl;
	delete pa;//��new'һһ��Ӧ��
	return 0;
}