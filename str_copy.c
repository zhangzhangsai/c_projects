#include<stdio.h>
#include<assert.h>
char* str_copy(char* dest, const char* src)
{
	char* ret = dest;        //������ʼ��ַ
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)       //����ֵ��\0�����Ϊ�ٲ�ѭ��
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "**************";   
	char arr2[] = "hello";         
	printf("%s", str_copy(arr1, arr2)); //��ʽ����
	return 0;
}