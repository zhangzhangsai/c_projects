#include<stdio.h>
int str_len(char arr[])
{
	if(*arr != '\0')
		return 1+str_len(arr+1);
	return 0;
}
int main()
{
	char arr[] = "not ill";
	int Len = str_len(arr);       //传递数组传的是数组的地址，相当于形参为指针 
	printf("%d",Len);
	return 0;
}
