#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//OJ题目作业
// 


//BC68 X型图案

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//BC76公务员面试
//描述：公务员面试现场打分，有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和
//一个最低分，输出每组的平均分

//int main()
//{
//	int score;
//	int sum=0;
//	int max = 0;
//	int min = 100;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f\n", (sum - max - min) / 5.0);
//	return 0;
//}


//BC54 获得月份天数

//描述：Kai想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年中这个月有多少天。
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		int day = days[m];
//		if (m == 2)
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//				day += 1;
//		printf("%d\n", day);
//	}
//}


//BC77 有序序列插入一个数

//描述：有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，
//保证插入新数后，序列仍然是升序。
int main()
{
	int arr[51] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int m = 0;
	scanf("%d", &m);
	for (i = n-1; i >=0; i--)
	{
		if (m < arr[i])
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = m;
			break;
		}
	}
	arr[i + 1] = m;
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	

	return 0;
}