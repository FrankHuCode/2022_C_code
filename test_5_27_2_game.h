#pragma once
//函数的声明、头文件的包含、符号的定义

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define EASY_COUNT 10
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2


//初始化棋盘函数声明
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘函数声明
void PrintBoard(char board[ROWS][COLS], int row, int col );

//布置雷函数声明
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷函数声明
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
