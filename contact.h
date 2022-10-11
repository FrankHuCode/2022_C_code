#pragma once


#include<stdio.h>
#include<string.h>
//

//宏定义

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//类型的定义：

//一个人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//存放添加进来的人的信息
	int sz;//记录的是通讯录中有效信息的个数

}Contact;


//函数声明：

//初始化通讯录
void InitContact(Contact* pc);

//增加人的信息
void AddContact(Contact* pc);

//删除人的信息
void DelContact(Contact* pc);

//打印人的信息
void PrintContact(const Contact* pc);

//查找人的信息
void SearchContact(Contact* pc);

//修改人的信息
void ModifyContact(Contact* pc);

//排序人的信息
void SortContact(Contact* pc);

