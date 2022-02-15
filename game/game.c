#include"game.h"
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if(j < col-1)
				printf("|");
		}printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}	printf("\n");
		}
		
			
		

		
	}
}
void PlayerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0; int y = 0;
	printf("玩家走：>");
	while (1)
	{
		printf("请输入所要下的坐标：");
		scanf("%d%d", &x, &y);
		if (x <= row && x>0 && y > 0 && y <= col)
		{
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("位置已有棋子\n");
			}
		}
		else
			printf("位置非法,请重新输入！\n");
	}
	
 
	
}
void ComputerBoard(char Board[ROW][COL], int row, int col)
{
	int x = 0; int y = 0;
	printf("电脑输入：\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}		
	}
}
char Is_winner(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][0] != ' ')
				return Board[i][1];
		if(Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[1][i] != ' ')
			return Board[2][i];
	}
	if (Board[0][0] == Board[1][1] && Board[2][2] == Board[1][1] && Board[1][1] != ' ')
		return Board[1][1];
	if (Board[2][0] == Board[1][1] && Board[0][2] == Board[1][1] && Board[1][1] != ' ')
		return Board[1][1];
	if (Is_full(Board,ROW,COL) == 1)
		return 'q';
	else
		return 'C';
	
}
int Is_full(char Board[ROW][COL], int row, int col)
{
	int i = 0; int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}