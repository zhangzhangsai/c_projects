#include<iostream>
#include<cmath>
using namespace std;
class complex
{
private:
	float real, imag;
public:
	complex();
	void init(float,float);
	float fabcomplex();
};
complex::complex()
{
	real = 1.3; imag = 2.0;
}
float complex::fabcomplex()
{
	float t = real * real + imag + imag;
	return sqrt(t);
}
void complex::init(float r, float i)
{
	real = r; imag = i;
}
int main()
{
	complex A;
	complex* p = new complex;
	A.init(1.2, 3.2);
	p->init(2.1, 3.1);
	cout << A.fabcomplex() << endl;
	cout << p->fabcomplex() << endl;







	return 0;
}