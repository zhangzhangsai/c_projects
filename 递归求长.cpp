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
	int Len = str_len(arr);       //�������鴫��������ĵ�ַ���൱���β�Ϊָ�� 
	printf("%d",Len);
	return 0;
}
