#define _CRT_SECURE_NO_WARNINGS 1
//写一个递归函数DigitSum(n),输入一个非负整数，输出组成这个整数的各数字之和。
//例：DigitSum(1729),1+7+2+9=29.
#include<stdio.h>
int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
		return n;
}
int main()
{
	int num;
	printf("Please enter a nonnegative integer:");
	scanf("%d", &num);
	
	int sum = DigitSum(num);

	printf("Sum of the nonnegative integer is %d\n", sum);
	return 0;
}