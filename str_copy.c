#include<stdio.h>
#include<assert.h>
char* str_copy(char* dest, const char* src)
{
	char* ret = dest;        //保存起始地址
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)       //若赋值‘\0’结果为假不循环
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "**************";   
	char arr2[] = "hello";         
	printf("%s", str_copy(arr1, arr2)); //链式访问
	return 0;
}