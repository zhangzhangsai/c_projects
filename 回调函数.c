#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void menu()
{
	printf("###########################################\n");
	printf("#####  1,add 2.Sub 3,Mul 4,Div 0.exit #####\n");
	printf("###########################################\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void calc(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������������");
	scanf("%d%d", &x, &y);
	printf("%d\n", p(x, y));
	Sleep(1000);
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("���������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("�˳���Ϸ"); 
			break;
		default:
			printf("����Ƿ�");
			Sleep(1000);
			break;
			
		}
		system("cls");
	} while (input);
	return 0;
}