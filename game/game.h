#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void InitBoard(char Board[ROW][COL], int row, int col);
void DisplayBoard(char Board[ROW][COL], int row, int col);
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerBoard(char Board[ROW][COL],int row,int col);
char Is_winner(char Board[ROW][COL],int row,int col);
int Is_full(char Board[ROW][COL], int row, int col);