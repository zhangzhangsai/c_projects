#include<stdio.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	printf("��Ҫ��ӡ�ڼ���쳲���������");
	scanf("%d",&n); 
	int ret = Fib(n);
	printf("��%d��쳲�������Ϊ:%d",n,ret);
	 
}