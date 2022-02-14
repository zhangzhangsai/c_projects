#include<stdio.h>
int main(){
	int count = 0;
	int i = 0;
	for(;i<100;i++)
	{
		if(i%10 == 9)     //个位的9的个数 
			count++;     
		if(i/10 == 9)    //十位的9的个数 ，不能用else if ，否则就会省略一个十位上的9 
			count++;
	}printf("%d",count);
	return 0;
} 
