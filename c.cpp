#include<stdio.h>
int main(){
	int count = 0;
	int i = 0;
	for(;i<100;i++)
	{
		if(i%10 == 9)     //��λ��9�ĸ��� 
			count++;     
		if(i/10 == 9)    //ʮλ��9�ĸ��� ��������else if ������ͻ�ʡ��һ��ʮλ�ϵ�9 
			count++;
	}printf("%d",count);
	return 0;
} 
