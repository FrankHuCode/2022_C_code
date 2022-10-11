#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"


//函数的实现：


//初始化通讯录
void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset() 内存设置
	memset(pc->data, 0, sizeof(pc->data));

}

//增加人的信息
void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加！\n");
		return;
	}

	//输入一个人的信息
	printf("请输入名字：");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别：");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄：");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入电话：");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址：");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加人的信息成功！\n");
}

//通过名字查找人的信息
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
	return -1;//查找的人不存在
}

//删除人的信息
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除！\n");
		return;
	}
	printf("请输入要删除的名字：");
	scanf("%s", name);
	//1.查找要删除的人
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("删除的人的信息不存在！\n");
		return;
	}
	//2.删除
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}


//打印人的信息
void PrintContact(const Contact* pc)
{
	//打印标题
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "性别", "年龄", "电话", "地址");
	//打印数据
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


//查找人的信息
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字：");
	scanf("%s", name);

	//1.找到要查找人的名字
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("查找的人的信息不存在！\n");
		return;
	}
	else
	{
		//打印标题
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "性别", "年龄", "电话", "地址");
		//打印数据
			printf("%-15s\t%-5s\t%-5d\t%-12s\t%-30s\n",
				pc->data[pos].name,
				pc->data[pos].sex,
				pc->data[pos].age,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}

//修改人的信息
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字：");
	scanf("%s", name);

	//1.找到要修改人的名字
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("修改的人的信息不存在！\n");
		return;
	}
	else
	{
		//修改一个人的信息
		printf("请输入名字：");
		scanf("%s", pc->data[pos].name);
		printf("请输入性别：");
		scanf("%s", pc->data[pos].sex);
		printf("请输入年龄：");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入电话：");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址：");
		scanf("%s", pc->data[pos].addr);

		printf("修改成功！\n");
	}
}

//排序人的信息
void SortContact(Contact* pc)
{

}
