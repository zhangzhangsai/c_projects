#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*****************\n");
	printf("**1.play 0.exit**\n");
	printf("*****************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;           //生成1-100的随机数 

	while(1)
	{
		printf("input a intger：");
		scanf("%d",&guess);
		if(guess < ret)
		{
			printf("xiao le \n");
		}
		else if(guess > ret)
		{
			printf("da le \n");
		}
		else
		{
		 	printf("cai dui le恭喜你！\n");
			break;
	    }
	}
}
int main()
{
	int n = 0;
	srand(time(NULL));              //生成随机数起始点 ，NULL为空指针 
	do
	{
			menu();                              //菜单也是循环的内容 
		printf("please select :");                 
		scanf("%d",&n);
		system("cls");
		switch(n)
		{
			case 1:game();break;
			case 0:
				printf("you xi jie shu!");break;
			default:
				printf("please a correct!");break;	
		}
	}while(n);                    //必须要先进行一次游戏，故使用do。while语句 
	return 0;
}
