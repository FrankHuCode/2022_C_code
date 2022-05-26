#define _CRT_SECURE_NO_WARNINGS 1
//编写程序数一下1到100的所有整数中出现多少个数字9
//9，19，29，...，89，99
//91，92，93，...，98，99
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("count=%d\n", count);
	return 0;
}