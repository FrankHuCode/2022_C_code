#define _CRT_SECURE_NO_WARNINGS 1



//ͨѶ¼
//1.ͨѶ¼���ܹ����1000���˵���Ϣ
//ÿ���˵���Ϣ������
//����+����+�Ա�+�绰+��ַ
//2.�����˵���Ϣ
//3.ɾ��ָ���˵���Ϣ
//4.�޸�ָ���˵���Ϣ
//5.����ָ���˵���Ϣ
//6.����ͨѶ¼����Ϣ
//7.��ӡͨѶ¼����Ϣ


//

#include"contact.h"



void menu()
{
	printf("**********************************\n");
	printf("******  1.Add      2.Del    ******\n");
	printf("******  3.Search   4.Modify ******\n");
	printf("******  5.Print    6.Sort   ******\n");
	printf("******        0.Exit        ******\n");
	printf("**********************************\n");
 
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEAR,
	MOD,
	PRINT,
	SORT
};


int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ�����ѡ��:");
		scanf("%d", &input);

		switch (input)
		{
		case ADD://����
			AddContact(&con);
			break;
		case DEL://ɾ��
			DelContact(&con);
			break;
		case SEAR://����
			SearchContact(&con);
			break;
		case MOD://�޸�
			ModifyContact(&con);
			break;
		case PRINT://��ӡ
			PrintContact(&con);
			break;
		case SORT://����
			SortContact(&con);
			break;
		case EXIT://�˳�
			printf("���˳���\n");
			break;
		default:
			printf("�����������������룡\n");
			break;
		}


	} while (input);

	return 0;
}
