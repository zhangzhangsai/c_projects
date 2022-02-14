#include<stdio.h>
int Fact(int n)
{
	if(n<=1)
		return 1;
	else 
		return n*Fact(n-1);
}
int main()
{
	int n = 0;
	printf("请输入n的值：");
	scanf("%d",&n);
	int ret = Fact(n);
	printf("%d的阶乘为：%d",n,ret);
	return 0; 
}
