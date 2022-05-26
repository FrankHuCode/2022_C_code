#define _CRT_SECURE_NO_WARNINGS 1
//nµÄ½×³Ë
#include<stdio.h>
int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

int main()
{
	int n = 0;
	printf("Please enter a natural number:");
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}