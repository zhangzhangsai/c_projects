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
	int sz = strlen(arr);    //��һ��
	arr[0] = arr[sz - 1];     //�ڶ���
	arr[sz - 1] = '\0';              //������
	if(strlen(arr+1)>=2)  //�ݹ����arr+1���ַ����� 
		reverse_string(arr + 1);
	arr[sz - 1] = tmp; //���Ĳ�
}
int main()
{
	char arr[] = "hello world";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}