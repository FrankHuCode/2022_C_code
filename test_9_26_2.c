#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<math.h>

//编程题：编写一个函数打印菱形星星
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//line=7
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//打印“ ”
//		for (j = 0; j < line-1 - i; j++)
//		{
//			printf("%c", ' ');
//		}
//		//打印“*”
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印“ ”
//		for (j = 0; j < i + 1; j++)
//		{ 
//			printf(" ");
//		}
//		//打印“*”
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//编程题：喝汽水问题，一瓶汽水1元，两个空瓶子可以换一瓶汽水，给20元可以喝多少汽水？
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	//兑换
	while (empty / 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}