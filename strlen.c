#include<stdio.h>
#include<assert.h>
int strlen(const char* ptr)  //Ҫ���ַ������ȣ����ݲ��ɸı�
{
	assert(*ptr != NULL);//�϶�
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
