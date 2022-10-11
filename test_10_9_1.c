#define _CRT_SECURE_NO_WARNINGS 1



//通讯录
//1.通讯录中能够存放1000个人的信息
//每个人的信息包括：
//名字+年龄+性别+电话+地址
//2.增加人的信息
//3.删除指定人的信息
//4.修改指定人的信息
//5.查找指定人的信息
//6.排序通讯录的信息
//7.打印通讯录的信息


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
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择服务选项:");
		scanf("%d", &input);

		switch (input)
		{
		case ADD://增加
			AddContact(&con);
			break;
		case DEL://删除
			DelContact(&con);
			break;
		case SEAR://查找
			SearchContact(&con);
			break;
		case MOD://修改
			ModifyContact(&con);
			break;
		case PRINT://打印
			PrintContact(&con);
			break;
		case SORT://排序
			SortContact(&con);
			break;
		case EXIT://退出
			printf("已退出！\n");
			break;
		default:
			printf("输入有误，请重新输入！\n");
			break;
		}


	} while (input);

	return 0;
}
