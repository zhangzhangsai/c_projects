#include<iostream>
using namespace std;
class complex
{
private:
	double real,imag;
public:
	complex();
	complex(double,double);
	~complex();
	double fabs();
};
complex::complex():imag(0.0),real(0.0){}
complex::complex(double r,double i):real(r),imag(i){}
complex::~complex(){}
double complex::fabs()
{
	double t = real * real + imag * imag;
	return t;
}
int main()
{
	complex c[4] = {
		complex(1.3,2.3),
		complex(1.4,4.2),
		complex(2.3,4.2),       //������캯��������ʼ��
		complex(5.4,2.3)
	};
	/*complex c[4] = {
		(1.3,2.3),
	    (1.4,4.2),          //һ�������Ĺ��캯������ֱ��д
		(2.3,4.2),
		(5.4,2.3)
	}*/
	for (int i = 0; i < 4; i++)
	{
		cout << c[i].fabs() << endl;
	}
	return 0;
}