#include"game.h"
void game()
{
	char ret = 0;
	char Board[ROW][COL] = { 0 };
	InitBoard(Board,ROW,COL); 
	DisplayBoard(Board, ROW, COL);
	while (1)
	{ 
		PlayerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		ret = Is_winner(Board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerBoard(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		ret = Is_winner(Board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("player is winnner!\n");
	if (ret == '#')
		printf("Computer is winnner!\n");
	if (ret == 'q')
		printf("Equal!\n");
}
void menu()
{
	printf("#################\n");
	printf("##1.play 0.exit##\n");
	printf("#################\n");
}
void test()
{
	srand(time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("���������룺\n"); break;
		}
	} while (input);

}
int main()
{

	test();
	return 0;
}
