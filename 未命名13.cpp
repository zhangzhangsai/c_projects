#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20]={0};
	system("shutdown -s -t 60");     
error:
	printf("��ĵ��Խ���60s�ڹػ������������������ػ�ȡ����");
	scanf("%s",input);
    if(strcmp(input,"������") == 0)         
    {
		system("shutdown -a");                //��whileѭ��Ҳ����  
    }
	else
		goto error;  //again��error�������κ�һ�����ɣ�������������� 
	return 0;
}
//while(1)
//{
//	 printf("��ĵ��Խ���60s�ڹػ������������������ػ�ȡ����");
//   scanf("%s",input);
//    if(strcmp(input,"������") == 0)         
//   {
//		system("shutdown -a");  break;              
//    }
//	
//}
