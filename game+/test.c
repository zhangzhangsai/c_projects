#include"game.h"
void menu()
{
	printf("########################\n");
	printf("##1.play    0.exit######\n");
	printf("########################\n");
}
void game()
{

	//������
	char Mine[ROWS][COLS] = { 0 };
	//�Ų���
	char Show[ROWS][COLS] = { 0 };
	//��ʼ����
	Init_board(Mine, ROWS, COLS,'0');
	Init_board(Show, ROWS, COLS,'*');
	//��ӡ��
	//Display_board(Mine, ROWS, COLS);
	Display_board(Show, ROW, COL);
	//������
	Set_mine(Mine, ROW, COL);
	Display_board(Mine, ROW, COL);
	FindMine(Mine, Show, ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 2: printf("�˳���Ϸ"); break;
		default:printf("����Ƿ�"); break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}