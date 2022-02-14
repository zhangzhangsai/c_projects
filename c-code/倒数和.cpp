#include<stdio.h>
int main()
{
	int i=0;float sum = 0.0;
	int flag = 1;
	for(i=1;i<=100;i++)
	{
		sum +=flag*1.0/i;
		flag = -flag;       //-o?¨¢¨¦D? 
	}
	printf("%lf",sum);       //%lf2?¨º?%d 
	return 0;
 } 
