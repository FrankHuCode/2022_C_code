#define _CRT_SECURE_NO_WARNINGS 1

//函数的实现

#include"test_5_27_2_game.h"

//初始化棋盘函数的实现
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘函数的实现
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf(" ------扫雷游戏-----\n");	
	for (i = 0; i <=col; i++)
	{
		printf(" %d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d", i);
		
		for (j = 1; j <= col; j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷函数的实现
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = EASY_COUNT;
	while (count)
	{
		//随机产生1-9的下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//函数FindMine()中调用函数get_mine()
//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
static int get_mine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';
}

//排查雷函数的实现
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入想排查的雷坐标
	//2.判断该坐标是否雷
      //（1）是，退出游戏
	  //（2）否，将该坐标周围九宫格内的雷数给到show数组，继续游戏
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请开始游戏，输入二维坐标：");
		scanf("%d %d", &x, &y);
		//判断坐标是否在范围内
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你出局了！\n");
				PrintBoard(mine, row, col);
				break;

			}
			else
			{
				//统计该坐标周围九宫格的雷个数
				int count=get_mine(mine, x, y);
				show[x][y] = count + '0';
				//显示排出雷的信息
				PrintBoard(show, row, col);
				win++;

			}
		}
		else
		{
			printf("坐标错误，重新输入坐标！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你！\n");
		PrintBoard(mine, row, col);
	}
}