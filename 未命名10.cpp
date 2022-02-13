#include<stdio.h>
int main()
{
	int i=0,j=0;
	int m = 0;
	for(i=1;i<10;i++)     //控制行数 
	{
		for(j=1;j<=i;j++)       //j<=i是为了控制几行有几列 
		{	
			m = i * j;
			printf("%d*%d=%-2d ",i,j,m);  //%2d是为了与下面的右对齐，-2d是左对齐 
			if(i==j)
				printf("\n");
			
		}
	}
	return 0;
}
