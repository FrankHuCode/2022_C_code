#define _CRT_SECURE_NO_WARNINGS 1
//дһ���ݹ麯��DigitSum(n),����һ���Ǹ���������������������ĸ�����֮�͡�
//����DigitSum(1729),1+7+2+9=29.
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