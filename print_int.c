#include<stdio.h>
void print_int(int n)
{
	if (n > 9)
	{
		printf("%d  ", n % 10);
		print_int(n / 10);
	}
	else
	{
		printf("%d  ", n);
	}
	
}
int main()
{
	int n = 0; 
	printf("input a interger");
	scanf("%d", &n);
	print_int(n);
	return 0;
}