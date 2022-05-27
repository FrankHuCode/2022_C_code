#define _CRT_SECURE_NO_WARNINGS 1

//游戏测试的逻辑
#include"test_5_27_2_game.h"


void menu()
{
	printf("***********************\n");
	printf("*****  1.play  ********\n");
	printf("*****  0.exit  ********\n");
	printf("***********************\n");
}

void game()
{

	char mine[ROWS][COLS] = { 0 };//布置雷的数组'0'
	char show[ROWS][COLS] = { 0 };//排查雷的数组'*'

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	//PrintBoard(mine, ROW, COL);
	PrintBoard(show, ROW, COL);

	//布置随机雷
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show,ROW, COL);
	

}

int main()
{
    srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择开始:");
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
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
