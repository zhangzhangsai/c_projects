#include<stdio.h>
int main()
{
	int i=0,j=0;
	int m = 0;
	for(i=1;i<10;i++)     //�������� 
	{
		for(j=1;j<=i;j++)       //j<=i��Ϊ�˿��Ƽ����м��� 
		{	
			m = i * j;
			printf("%d*%d=%-2d ",i,j,m);  //%2d��Ϊ����������Ҷ��룬-2d������� 
			if(i==j)
				printf("\n");
			
		}
	}
	return 0;
}
