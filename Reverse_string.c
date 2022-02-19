#include<stdio.h>
#include<string.h>
void reverse_string(char arr[])
{
//	char tmp = '0';
//	int right = strlen(arr) - 1;
//	int left = 0;;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
	char tmp = arr[0];
	int sz = strlen(arr);    //第一步
	arr[0] = arr[sz - 1];     //第二步
	arr[sz - 1] = '\0';              //第三步
	if(strlen(arr+1)>=2)  //递归调用arr+1的字符数组 
		reverse_string(arr + 1);
	arr[sz - 1] = tmp; //第四步
}
int main()
{
	char arr[] = "hello world";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}