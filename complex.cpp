#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
private:
	float real, imag;
public:
	void init(float r, float i)
	{
		real = r;
		imag = i;
	}
	float fabs_complex()
	{
		double t = real * real + imag * imag;
		return sqrt(t);
	}
};
int main()
{
	Complex A;
	A.init(1.1, 2.0);
	cout << "复数的绝对值为：" << A.fabs_complex() << endl;

	return 0;
}