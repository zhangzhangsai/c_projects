#include<stdio.h>
int Mul(int n)
{
	if(n != 0)
		return n*Mul(n-1);
	return 1;
}
int main()
{
	int n = 0;
	printf("请输入n的值：");
	scanf("%d",&n);
	int ret = Mul(n);
	printf("%d的阶乘为：%d",n,ret);
	return 0; 
}
