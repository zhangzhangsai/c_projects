#include<stdio.h>
/*int bin_search(int arr[],int n,int *pindex);
int bin_search(int arr[],int n,int *pindex)   //������ʽ����Ϊָ�� 
{
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[1]) - 1;       //��ָ��������㣬�������Ϊ4or8 
	int mid = 0;
	while(left<=right)                  //�ں����ⲿ���ܶ�������������� 
	{
		mid = (left + right)/2;
		if(n < arr[mid])
			right = mid - 1;
		else if(n > arr[mid])
			left = mid + 1;
		else
			return *pindex = mid;
	}
	if(left > right)
		return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = 0;
	int index = 0;
	int *pindex = &index;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d",&n); 
	int ret = bin_search(arr,n,pindex);         //���鴫�ݹ�ȥ������Ԫ�صĵ�ַ 
	if(ret == -1)
		printf("û���ҵ���");
	else
		printf("�ҵ��ˣ��±�Ϊ��%d",*pindex);
}*/











///////////�����Ǵ����///// 
#include<stdio.h>
int bin_search(int arr[],int n,int sz);
int bin_search(int arr[],int n,int sz)   //������ʽ����Ϊָ�� 
{
	int left = 0;
	int right = sz - 1;       //��ָ��������㣬�������Ϊ4or8 
	int mid = 0;
	while(left<=right)                  //�ں����ⲿ���ܶ�������������� 
	{
		mid = (left + right)/2;
		if(n < arr[mid])
			right = mid - 1;
		else if(n > arr[mid])
			left = mid + 1;
		else
			return mid;
	}
		return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = 0;
	int sz = sizeof(arr)/sizeof(arr[1]);
	int index = 0;
	int *pindex = &index;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d",&n); 
	int ret = bin_search(arr,n,sz);         //���鴫�ݹ�ȥ������Ԫ�صĵ�ַ 
	if(ret == -1)
		printf("û���ҵ���");
	else
		printf("�ҵ��ˣ��±�Ϊ��%d",ret);
}
