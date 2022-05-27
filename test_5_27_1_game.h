#pragma once
//关于游戏相关的头文件包含,函数声明，符号定义

//头文件的包含

#include<stdio.h>//.c文件都包含自己创建的头文件
#include<stdlib.h>
#include<time.h>

//符号的定义

#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘函数的声明
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘显示函数的声明
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家下棋函数的声明
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋函数的声明
void ComputerMove(char board[ROW][COL], int row, int col);

//约定
//玩家赢了--*
//电脑赢了--#
//游戏平局--E
//游戏继续--C

//判断下棋结果函数的声明
char IsWin(char board[ROW][COL], int row, int col);