#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5,6};
	int l=0,n=0;
	int lenth = sizeof(a)/sizeof(a[1]);
	int r = lenth - 1;
	printf("������Ҫ���ҵ����֣�");
	scanf("%d",&n); 
	while(l <= r)
	{
		int mid = (r + l)/2;
		if(a[mid] < n)
			l=mid +1;
		else if(a[mid] > n)
			r = mid - 1;
		else 
		{	
			printf("�ҵ��ˣ�");break; 
		}
	}
	if(l > r)
		printf("mei zhao dao!");
	return 0;
	
} 
