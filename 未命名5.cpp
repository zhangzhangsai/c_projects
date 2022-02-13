#include<stdio.h>
/*int bin_search(int arr[],int n,int *pindex);
int bin_search(int arr[],int n,int *pindex)   //对于形式参数为指针 
{
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[1]) - 1;       //对指针进行运算，她都结果为4or8 
	int mid = 0;
	while(left<=right)                  //在函数外部不能对数组进行求长运算 
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
	printf("请输入要查找的数字：");
	scanf("%d",&n); 
	int ret = bin_search(arr,n,pindex);         //数组传递过去的是首元素的地址 
	if(ret == -1)
		printf("没有找到！");
	else
		printf("找到了，下标为：%d",*pindex);
}*/











///////////上面是错误的///// 
#include<stdio.h>
int bin_search(int arr[],int n,int sz);
int bin_search(int arr[],int n,int sz)   //对于形式参数为指针 
{
	int left = 0;
	int right = sz - 1;       //对指针进行运算，她都结果为4or8 
	int mid = 0;
	while(left<=right)                  //在函数外部不能对数组进行求长运算 
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
	printf("请输入要查找的数字：");
	scanf("%d",&n); 
	int ret = bin_search(arr,n,sz);         //数组传递过去的是首元素的地址 
	if(ret == -1)
		printf("没有找到！");
	else
		printf("找到了，下标为：%d",ret);
}
