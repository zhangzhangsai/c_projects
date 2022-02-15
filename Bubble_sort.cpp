#include<stdio.h>
void Bubble_sort(int arr[],int sz)
{
    int i = 0;
	int j = 0;
	int tmp = 0;
	int flag = 0;
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-1-i;j++)
		{
			 flag = 1;
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 0;
			}		
		}
		if(flag == 1)
			break;
	}
}
int main()
{
	int arr[] = {1,3,4,3,6,4,5,7,8,9};
	int sz = sizeof(arr)/sizeof(arr[1]);
	Bubble_sort(arr,sz);
	for(int i = 0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0; 
} 
