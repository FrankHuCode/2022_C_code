#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数实现n的k次方，使用递归实现
#include<stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;
	printf("Please enter a cardinal number n and a index k:");
	scanf("%d %d", &n, &k);
	double p = Pow(n, k);
	printf("The %d power of %dth is :%lf\n",n,k, p);
	return 0;
}