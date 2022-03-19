#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
inline float func(float x)
{
	return  2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
}
int main()
{
	float right = 0;
	float left = 0;
	float middle = 0;
again:
	cout << "ÇëÊäÈë×ó·¶Î§£º" << endl;
	cin >> left;
	cout << "ÇëÊäÈëÓÒ·¶Î§£º" << endl;
	cin >> right;
	if (func(right) * func(left) <= 0)
	{
		do
		{
			middle = (right + left) / 2;
			if (func(middle) * func(right) <= 0)
			{
				left = middle;
			}
			else
			{
				right = middle;
			}
		} while (fabs(func(middle)) > 0.000001);
	}
	else
	{
		cout << "ÇëÖØÐÂÊäÈëÒ»¸ö·¶Î§£º" << endl;
		system("cls");
		goto again;
	}
	cout << "¸ù£º" << middle;
	return 0;
}