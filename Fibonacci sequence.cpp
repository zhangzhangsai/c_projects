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
	printf("你要打印第几个斐波那契数：");
	scanf("%d",&n); 
	int ret = Fib(n);
	printf("第%d个斐波那契数为%d",n,ret);
	 
}
