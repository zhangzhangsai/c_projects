#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20]={0};
	system("shutdown -s -t 60");     
error:
	printf("你的电脑将在60s内关机，如果输入你是猪，则关机取消：");
	scanf("%s",input);
    if(strcmp(input,"我是猪") == 0)         
    {
		system("shutdown -a");                //用while循环也可以  
    }
	else
		goto error;  //again，error。。。任何一个都可，但是最好有意义 
	return 0;
}
//while(1)
//{
//	 printf("你的电脑将在60s内关机，如果输入你是猪，则关机取消：");
//   scanf("%s",input);
//    if(strcmp(input,"我是猪") == 0)         
//   {
//		system("shutdown -a");  break;              
//    }
//	
//}
