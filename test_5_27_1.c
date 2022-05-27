#define _CRT_SECURE_NO_WARNINGS 1
//������Ϸ���߼�

#include"test_5_27_1_game.h"

void  menu()
{
	printf("**********************\n");
	printf("***** 1.��ʼ��Ϸ *****\n");
	printf("***** 0.�˳���Ϸ *****\n");
	printf("**********************\n");
}

void game()
{
	//�洢���ݣ�������ά����
	char board[ROW][COL];
	char ret = 0;

	//��ʼ��---��ʼ�����̿ո�
	InitBoard(board, ROW, COL);

	//��ӡ������ʾ
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�������
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�������
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");

	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else 
	{
		printf("��Ϸƽ��!\n");
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
		printf("��ʼѡ��");
		scanf("%d", &input);
	switch (input)
	{
	case 1:
		game();
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("ѡ���������ѡ��\n");
		break;
	}
	} while (input);
	return 0;
}