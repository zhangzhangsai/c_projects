#include<stdio.h>
void print(int n)
{
	if(n>9)
		print(n/10);
	printf("%d ",n%10);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	print(n);
	return 0;
 } 
