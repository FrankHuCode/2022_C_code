#define _CRT_SECURE_NO_WARNINGS 1

//��Ϸ���Ե��߼�
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

	char mine[ROWS][COLS] = { 0 };//�����׵�����'0'
	char show[ROWS][COLS] = { 0 };//�Ų��׵�����'*'

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	//PrintBoard(mine, ROW, COL);
	PrintBoard(show, ROW, COL);

	//���������
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine, show,ROW, COL);
	

}

int main()
{
    srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��ʼ:");
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
			printf("���������������\n");
			break;
		}
	} while (input);
	return 0;
}
