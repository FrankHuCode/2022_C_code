#define _CRT_SECURE_NO_WARNINGS 1
//��Ϸ��غ�����ʵ��


//�����Լ�������ͷ�ļ�
#include"test_5_27_1_game.h"

//��ʼ�����̿ո�����ʵ��
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

//��ӡ������ʾ������ʵ��
//1.���������ԣ� ROW=3,COL=3ʱ��
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
//2.�����ձ��ԣ�ROW=i,COL=jʱ��
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

//������庯����ʵ��
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("�������\n");

	while (1)
	{

		int x = 0;
		int y = 0;
		printf("������һ�����꣺");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж�����Ϸ���
		{
			if (board[x - 1][y - 1] == ' ')//�ж�ռ��
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����Ѿ��������ӣ�������������\n");
			}
		}
		else
		{
			printf("�������겻���ڣ�����������\n");
		}
	}
}

//�������庯����ʵ��
void ComputerMove(char board[ROW][COL], int row, int col) 
{
	printf("��������\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')//�ж�ռ��
		{
			board[x][y] = '#';
			break;
		}
	}
}


//�ж����̿ռ亯����ʵ��
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//����δ������0
		}
	}
	return 1;//������������1
}

//�ж�������������ʵ��
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж�����ͬ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж�����ͬ
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж϶Խ�����ͬ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	
	//�ж�ƽ��
	//�ж����̿ռ�,���˷���1����������0
	int ret=IsFull(board, row, col);
	if (ret == 1)
	{
		return 'E';
	}
	
	//��������
		return 'C';
}