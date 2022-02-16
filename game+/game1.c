#include"game.h"
void Init_board(char board[ROWS][COLS], int rows, int cols, char a)
{
    int i = 0; int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = a;
        }
    }
}
void Display_board(char board[ROWS][COLS], int row, int col)
{
    int i = 0; int j = 0; int k = 0;
    for (i = 0; i <= row ; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++)
    {  
        printf("%d ", i);
        for (j = 1; j <=col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
        
    }
}
void Set_mine(char board[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int count = EASY_COUNT;
    while (count)
    {
        x = rand() % row + 1;
        y = rand() % col + 1;
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
            
    }
}  
void FindMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int count = row * col - EASY_COUNT;
    while (count)
    {
        printf("请输入坐标：");
        scanf("%d%d", &x, &y);
        if (x > 0 && x <= row && y > 0 && y <= col)
        {
            if (Mine[x][y] == '0')
            {
                Show[x][y] = MineCount(Mine, x, y) + '0';
                Display_board(Show, row, col);
                count--;
            }
            else 
            {
                printf("你已被炸死\n"); break;
            }
        }
        else
        {
            printf("位置非法！\n");
        }
    }
    if (count == 0)
        printf("你赢了\n");
    
}
int MineCount(char Mine[ROWS][COLS], int x, int y)
{
    return Mine[x - 1][y] +
        Mine[x - 1][y - 1] +
        Mine[x - 1][y + 1] +
        Mine[x][y - 1] +
        Mine[x][y + 1] +
        Mine[x + 1][y] +
        Mine[x + 1][y + 1] +
        Mine[x + 1][y - 1] - 8 * '0';
        
}