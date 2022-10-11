#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"


//������ʵ�֣�


//��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset() �ڴ�����
	memset(pc->data, 0, sizeof(pc->data));

}

//�����˵���Ϣ
void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷���ӣ�\n");
		return;
	}

	//����һ���˵���Ϣ
	printf("���������֣�");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�");
	scanf("%s", pc->data[pc->sz].sex);
	printf("���������䣺");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������绰��");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ��");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("����˵���Ϣ�ɹ���\n");
}

//ͨ�����ֲ����˵���Ϣ
static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//���ҵ��˲�����
}

//ɾ���˵���Ϣ
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ����\n");
		return;
	}
	printf("������Ҫɾ�������֣�");
	scanf("%s", name);
	//1.����Ҫɾ������
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("ɾ�����˵���Ϣ�����ڣ�\n");
		return;
	}
	//2.ɾ��
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}


//��ӡ�˵���Ϣ
void PrintContact(const Contact* pc)
{
	//��ӡ����
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	//��ӡ����
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-15s\t%-5s\t%-5d\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


//�����˵���Ϣ
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);

	//1.�ҵ�Ҫ�����˵�����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("���ҵ��˵���Ϣ�����ڣ�\n");
		return;
	}
	else
	{
		//��ӡ����
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		//��ӡ����
			printf("%-15s\t%-5s\t%-5d\t%-12s\t%-30s\n",
				pc->data[pos].name,
				pc->data[pos].sex,
				pc->data[pos].age,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}

//�޸��˵���Ϣ
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);

	//1.�ҵ�Ҫ�޸��˵�����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("�޸ĵ��˵���Ϣ�����ڣ�\n");
		return;
	}
	else
	{
		//�޸�һ���˵���Ϣ
		printf("���������֣�");
		scanf("%s", pc->data[pos].name);
		printf("�������Ա�");
		scanf("%s", pc->data[pos].sex);
		printf("���������䣺");
		scanf("%d", &(pc->data[pos].age));
		printf("������绰��");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ��");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ���\n");
	}
}

//�����˵���Ϣ
void SortContact(Contact* pc)
{

}
