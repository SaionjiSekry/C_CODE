#define ROW 9
#define COL 9

#define ROWS 11
#define COLS 11

#define EASY_COUNT 10             //���׵ĸ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROWS][COLS],int rows, int cols,char set);   //��ʼ��
void DisplayBoard(char board[ROWS][COLS], int row, int col);         //չʾ����
void SetMine(char mine[ROWS][COLS], int row, int clo);               //����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);   //ɨ��