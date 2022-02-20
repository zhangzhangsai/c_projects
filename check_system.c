#include<stdio.h>
//int check_sys(int a)
//{ 
//	int a = 1;
//	//char*   决定了一次操作几个字节 
//	char* p = (char*) & a;      //&a是int*类型的，要强制类型转换
//	return *p;          //*p为1则小端
//
//}
int check_sys()
{
	int a = 1;
	return *(char*)&a;       //地址就是指针
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}