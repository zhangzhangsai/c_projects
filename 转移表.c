#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("*******************************************\n");
	printf("***    0.exit       1.Add       2.Sub   ***\n");
	printf("****      3.Mul             4.Div      ****\n");
	printf("*******************************************\n");
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
	return x*y;
}
int Div(int x, int y)
{
	return x/y;
}

int main()
{
	int (*parr[5])(int,int) = {0, Add, Sub, Mul, Div};
	int ret = 0;
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			printf("������������������");
			scanf("%d%d", &x, &y);
			ret = parr[input](x, y);
			printf("%d", ret);
			break;
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ��");
			break;
		}
		else
		{
			printf("����Ƿ���");
			
		}
		system("cls");
	} while (input);
	return 0;
}
