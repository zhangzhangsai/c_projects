#include"game.h"
void menu()
{
	printf("########################\n");
	printf("##1.play    0.exit######\n");
	printf("########################\n");
}
void game()
{

	//布置雷
	char Mine[ROWS][COLS] = { 0 };
	//排查雷
	char Show[ROWS][COLS] = { 0 };
	//初始化雷
	Init_board(Mine, ROWS, COLS,'0');
	Init_board(Show, ROWS, COLS,'*');
	//打印表
	//Display_board(Mine, ROWS, COLS);
	Display_board(Show, ROW, COL);
	//布置雷
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
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 2: printf("退出游戏"); break;
		default:printf("输入非法"); break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}