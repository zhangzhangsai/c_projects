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
	int ret = Mul(n);
	printf("%d�Ľ׳�Ϊ��%d",n,ret);
	return 0; 
}
