#define _CRT_SECURE_NO_WARNINGS 1

//������ʵ��

#include"test_5_27_2_game.h"

//��ʼ�����̺�����ʵ��
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

//��ӡ���̺�����ʵ��
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf(" ------ɨ����Ϸ-----\n");	
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

//�����׺�����ʵ��
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = EASY_COUNT;
	while (count)
	{
		//�������1-9���±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//����FindMine()�е��ú���get_mine()
//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
static int get_mine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x][y - 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';
}

//�Ų��׺�����ʵ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�������Ų��������
	//2.�жϸ������Ƿ���
      //��1���ǣ��˳���Ϸ
	  //��2���񣬽���������Χ�Ź����ڵ���������show���飬������Ϸ
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("�뿪ʼ��Ϸ�������ά���꣺");
		scanf("%d %d", &x, &y);
		//�ж������Ƿ��ڷ�Χ��
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź���������ˣ�\n");
				PrintBoard(mine, row, col);
				break;

			}
			else
			{
				//ͳ�Ƹ�������Χ�Ź�����׸���
				int count=get_mine(mine, x, y);
				show[x][y] = count + '0';
				//��ʾ�ų��׵���Ϣ
				PrintBoard(show, row, col);
				win++;

			}
		}
		else
		{
			printf("������������������꣡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣡\n");
		PrintBoard(mine, row, col);
	}
}