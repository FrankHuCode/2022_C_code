#define _CRT_SECURE_NO_WARNINGS 1
//设计一个算法，求输入A和B的最小公倍数
//最小公倍数：能被A和B整除的最小正整数
#include<stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	int min = m > n ? m : n;//最小公倍数
//	while (1)
//	{
//		if (min % m == 0 && min % n == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; ; i++)
	{
		if ((a * i) % b == 0)
		{
			printf("%d\n", a * i);
			break;
		}
	}
	return 0;
}

//辗转相除法求出最大公约数，再求最小公倍数 

//求两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = a < b ? a : b;
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}