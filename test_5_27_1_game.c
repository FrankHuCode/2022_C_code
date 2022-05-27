#define _CRT_SECURE_NO_WARNINGS 1
//游戏相关函数的实现


//包含自己创建的头文件
#include"test_5_27_1_game.h"

//初始化棋盘空格函数的实现
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}

//打印棋盘显示函数的实现
//1.考虑特殊性： ROW=3,COL=3时；
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if(i<row-1)
//		{
//			printf("---|---|---\n");
//		}
//	}
//}
//2.考虑普遍性：ROW=i,COL=j时；
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j< col - 1)
			{
				printf("|");
			}
		}
	    printf("\n");	
		if (i < row - 1)
		{
			//printf("---|---|---\n")
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

//玩家下棋函数的实现
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋\n");

	while (1)
	{

		int x = 0;
		int y = 0;
		printf("请输入一个坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标合法性
		{
			if (board[x - 1][y - 1] == ' ')//判断占用
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已经存在棋子，输入其他坐标\n");
			}
		}
		else
		{
			printf("输入坐标不存在，请重新输入\n");
		}
	}
}

//电脑下棋函数的实现
void ComputerMove(char board[ROW][COL], int row, int col) 
{
	printf("电脑下棋\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')//判断占用
		{
			board[x][y] = '#';
			break;
		}
	}
}


//判断棋盘空间函数的实现
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//棋盘未满返回0
		}
	}
	return 1;//棋盘已满返回1
}

//判断下棋结果函数的实现
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断行相同
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列相同
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断对角线相同
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	
	//判断平局
	//判断棋盘空间,满了返回1，不满返回0
	int ret=IsFull(board, row, col);
	if (ret == 1)
	{
		return 'E';
	}
	
	//继续下棋
		return 'C';
}