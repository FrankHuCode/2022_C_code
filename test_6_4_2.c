#define _CRT_SECURE_NO_WARNINGS 1

//打印整数二进制的奇数位和偶数位
//获取一个整数中的奇数位和偶数位，分别打印二进制序列
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);

	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	return 0;
}
