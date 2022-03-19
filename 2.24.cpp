#include<iostream>
using namespace std;
int main()
{
	int i = 0;
 	int j = 0;
	int k = 0;
	int flag = 0;
	for (i = 0; i <101; i++)
	{
		for (j = 0; j <51; j++)
		{
			for (k = 0; k <21; k++)
			{
				if (i + 2 * j + 5 * k == 100)
					flag++;
			}
		}
	}
	cout << flag << endl;
	return 0;
}