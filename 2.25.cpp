#include<iostream>
using namespace std;
void sort(int&a,int&b)
{
	if (a > b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
}
int main()
{
	int input1 = 0;
	int input2 = 0;
	cin >>input1 >> input2;
	sort(input1, input2);
	cout << input1 << ' ' << input2 << endl;
	return 0;
}