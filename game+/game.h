#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Init_board(char board[ROWS][COLS], int rows, int cols, char a); 
void Display_board(char board[ROWS][COLS], int row, int col);
void Set_mine(char board[ROWS][COLS], int row, int col);
void FindMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col);
int MineCount(char Mine[ROWS][COLS], int row, int col);