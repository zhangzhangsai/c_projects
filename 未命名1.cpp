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
	printf("������n��ֵ��");
	scanf("%d",&n);
	int ret = Fact(n);
	printf("%d�Ľ׳�Ϊ��%d",n,ret);
	return 0; 
}
