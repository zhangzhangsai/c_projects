#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	return 0;
//}�п������
int main()
{
	int a = 0;
	int b = 0;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	return 0;
}
