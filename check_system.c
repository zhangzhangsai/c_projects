#include<stdio.h>
//int check_sys(int a)
//{ 
//	int a = 1;
//	//char*   ������һ�β��������ֽ� 
//	char* p = (char*) & a;      //&a��int*���͵ģ�Ҫǿ������ת��
//	return *p;          //*pΪ1��С��
//
//}
int check_sys()
{
	int a = 1;
	return *(char*)&a;       //��ַ����ָ��
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
		printf("С��");
	else
		printf("���");
	return 0;
}