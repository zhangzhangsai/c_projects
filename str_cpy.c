#include<stdio.h>
void str_cpy(char* arr1, char* arr2)
{                                //最好加上判断指针是否有效if（*arr ！=NULL）
	while (*arr1++ = *arr2++)
	{
		//*arr1++ = *arr2++;
	}
}
int main()
{
	char arr1[] = "**********";
	char arr2[] = "hello";
	str_cpy(arr1,arr2);
	printf("%s",arr1);
	return 0;
}
