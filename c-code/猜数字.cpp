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
	ret = rand()%100+1;           //����1-100������� 

	while(1)
	{
		printf("input a intger��");
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
		 	printf("cai dui le��ϲ�㣡\n");
			break;
	    }
	}
}
int main()
{
	int n = 0;
	srand(time(NULL));              //�����������ʼ�� ��NULLΪ��ָ�� 
	do
	{
			menu();                              //�˵�Ҳ��ѭ�������� 
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
	}while(n);                    //����Ҫ�Ƚ���һ����Ϸ����ʹ��do��while��� 
	return 0;
}
