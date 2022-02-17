#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	while (n )
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}printf("%d", count);
//	return 0;
//}上述代码存在问题：当n为-1时       下面为方法二：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//			count++;
//	}printf("%d", count);
//	return 0;
//         上述两个时间复杂度仍为O(logn)，注意，这里的log是指以2为底的对数，logn其实就是n的二进制表示的位数          下面为第三种方法：
int main()
{
	int count = 1;
	int n = 0;
	scanf("%d", &n);
	while (n & (n-1))             //得到了0代表着只有一个“1”
	{
		n = n & (n - 1);         //每次都会减少一个二进置位1
		count++; 
	}
	printf("%d", count);
	return 0;       
}               //他的时间复杂度只与1的个数有关