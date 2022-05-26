#define _CRT_SECURE_NO_WARNINGS 1
//写代码实现求斐波那契数列，不考虑溢出
#include<stdio.h>
int Fib(int n)
{
	//实现效率非常低下n=50；
	 /*if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}*/
	//实现效率大大提升
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	printf("Please enter a natural number:");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
}