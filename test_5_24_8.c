#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算1000-2000年之间的闰年年份
// 公历闰年的规律为：4年一闰，百年不闰，400年在闰。
//闰年：普通年能被4整除且不能被100整除的为闰年；世纪年能被400整除的是闰年。
int main()
{
	int i = 1000;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0) &&( i % 100 != 0)||(i%400==0))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}