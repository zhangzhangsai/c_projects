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
//}��������������⣺��nΪ-1ʱ       ����Ϊ��������
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
//         ��������ʱ�临�Ӷ���ΪO(logn)��ע�⣬�����log��ָ��2Ϊ�׵Ķ�����logn��ʵ����n�Ķ����Ʊ�ʾ��λ��          ����Ϊ�����ַ�����
int main()
{
	int count = 1;
	int n = 0;
	scanf("%d", &n);
	while (n & (n-1))             //�õ���0������ֻ��һ����1��
	{
		n = n & (n - 1);         //ÿ�ζ������һ��������λ1
		count++; 
	}
	printf("%d", count);
	return 0;       
}               //����ʱ�临�Ӷ�ֻ��1�ĸ����й�