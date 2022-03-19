#include<iostream>
#include<cmath>
using namespace std;
int sroot(int input)
{
	return sqrt(input);
}
double sroot(double input)
{
	return sqrt(input);
}
long sroot(long input)
{
	return sqrt(input);
}
int main()
{
	int i = 4;
	float f = 2.4;
	long l = 4;
	cout << sroot(i) << endl;
	cout << sroot(f) << endl;
	cout << sroot(l)<< endl;
	return 0;
}