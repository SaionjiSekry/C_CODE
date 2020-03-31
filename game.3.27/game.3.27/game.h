#define ROW 9
#define COL 9

#define ROWS 11
#define COLS 11

#define EASY_COUNT 10             //放雷的个数
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROWS][COLS],int rows, int cols,char set);   //初始化
void DisplayBoard(char board[ROWS][COLS], int row, int col);         //展示棋盘
void SetMine(char mine[ROWS][COLS], int row, int clo);               //放雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);   //扫雷