#include<stdio.h>
#include<assert.h>
int strlen(const char* ptr)  //要求字符串长度，内容不可改变
{
	assert(*ptr != NULL);//断定
	int count = 0;
	while (*ptr != '\0')
	{
		ptr++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdefghijklmn";
	int ret = strlen(arr);
	printf("%d",ret);
	return 0;
}
