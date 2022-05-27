#define _CRT_SECURE_NO_WARNINGS 1
//测试游戏的逻辑

#include"test_5_27_1_game.h"

void  menu()
{
	printf("**********************\n");
	printf("***** 1.开始游戏 *****\n");
	printf("***** 0.退出游戏 *****\n");
	printf("**********************\n");
}

void game()
{
	//存储数据，创建二维数组
	char board[ROW][COL];
	char ret = 0;

	//初始化---初始化棋盘空格
	InitBoard(board, ROW, COL);

	//打印棋盘显示
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断下棋结果
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断下棋结果
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");

	}
	else if (ret == '#')
	{
		printf("电脑赢了！\n");
	}
	else 
	{
		printf("游戏平局!\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{	
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("开始选择：");
		scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("选择错误，重新选择\n");
		break;
	}
	} while (input);
	return 0;
}