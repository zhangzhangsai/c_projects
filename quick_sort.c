#include<stdio.h>
#include<stdlib.h>

//整形数组
//int cmp_int(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}

//int main()
//{
//	int arr[] = { 1，2，3，4，6，5，9，8，5};
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	qsort(arr, sz, sizeof(arr[1]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//字符数组
//int cmp_int(const void* a, const void* b)
//{
//	if (*(char*)a > *(char*)b)
//		return 1;
//	else if (*(char*)a == *(char*)b)
//		return 0;
//	else
//		return -1;
//}
//int main()
//{
//	char arr[] = { 'a','b','g','r','c' };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	qsort(arr, sz, sizeof(arr[1]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
struct stu
{
	char name[10];
	int age;
};
int cmp_stu_by_age(const void* a, const void* b)
{
	return ((struct stu*)a)->age - ((struct stu*)b)->age;
}

int main()
{
	struct stu student[2] = {{"losi",21},{"wangci",17}};
	int sz = sizeof(student) / sizeof(student[1]);
	qsort(student, sz, sizeof(student[1]), cmp_stu_by_age);
	return 0;
}