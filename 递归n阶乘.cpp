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
	printf("������n��ֵ��");
	scanf("%d",&n);
	long ret = Mul(n);
	printf("%d�Ľ׳�Ϊ��%ld",n,ret);
	return 0; 
}
