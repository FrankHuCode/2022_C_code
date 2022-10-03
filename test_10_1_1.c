#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，返回的指针指向一个有一个int形参
//且返回int的函数
//int(*  (*F)(int,int)  )(int)
//编程题
//题目：杨氏矩阵
//内容：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中
//查找某个数字是否存在

int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (arr[x][y]<k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 2,3,4,5,6,7,8,9,10 };
	int x = 3;
	int y = 3;
	//&x,&y
	//1.传入参数
	//2.带回参数值
	int k = 7;
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}