#include<iostream>
using namespace std;
int main()
{
	int* parr = new int[20];
	int j = 1;
	int i = 1;
	int index = 0;
	while (index < 20)
	{
		if (index < 2)
		{
			parr[index] = 1; 
		}
		else
		{
			int* ptmp = new int;
			*ptmp = i + j;
			parr[index] = *ptmp;
			i = j;
			j = *ptmp;
			delete ptmp;
		}
		cout << parr[index] << ' ';
		index++;
	};
	delete[]parr;
	return 0;
}