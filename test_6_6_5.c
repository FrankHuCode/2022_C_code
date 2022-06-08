#define _CRT_SECURE_NO_WARNINGS 1

//描述
//输入一个 int 型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。
//保证输入的整数最后一位不是 0 。
//
//数据范围： 1≤n≤108 1 \le n \le 10 ^ {8} \ 1≤n≤108
//输入描述：
//
//输入一个int型整数
//输出描述：
//
//按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

#include<stdio.h>
int main()
{
	int n = 0;
	int map[10] = { 0 };
	scanf("%d",&n);
	switch (n % 10)
	{
	case 0:
		break;
	default:
	{
		while ((n%10)!=0)
		{
			int i = n % 10;
			if (map[i] == 0)
			{
				map[i]=i;
				printf("%d", i);
			}
			n /= 10;
		}
		break;
	}
	}
	return 0;
}
