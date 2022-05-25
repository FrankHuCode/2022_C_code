#define _CRT_SECURE_NO_WARNINGS 1
//找出100-200之间的素数
//素数也称为质数，只有1和它本身两个因子数的自然数。
//规定1既不是质数也不是合数
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//判断i是否为素数
		//2->i-1之间的数字去试除，能否整除
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j==0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}