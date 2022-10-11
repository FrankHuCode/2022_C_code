#pragma once


#include<stdio.h>
#include<string.h>
//

//�궨��

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//���͵Ķ��壺

//һ���˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];//�����ӽ������˵���Ϣ
	int sz;//��¼����ͨѶ¼����Ч��Ϣ�ĸ���

}Contact;


//����������

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//�����˵���Ϣ
void AddContact(Contact* pc);

//ɾ���˵���Ϣ
void DelContact(Contact* pc);

//��ӡ�˵���Ϣ
void PrintContact(const Contact* pc);

//�����˵���Ϣ
void SearchContact(Contact* pc);

//�޸��˵���Ϣ
void ModifyContact(Contact* pc);

//�����˵���Ϣ
void SortContact(Contact* pc);

