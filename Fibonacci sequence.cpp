#include<stdio.h>
int Fib(int n)
{
	if(n<=2)
		return 1;
	return Fib(n-1)+Fib(n-2);
}
int main()
{
	int n = 0;
	printf("��Ҫ��ӡ�ڼ���쳲���������");
	scanf("%d",&n); 
	int ret = Fib(n);
	printf("��%d��쳲�������Ϊ%d",n,ret);
	 
}
