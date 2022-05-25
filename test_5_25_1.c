#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//判断1000-2000年之间的闰年
int is_leap_year(int n)
{
	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
	{
		return 1;
	}
	else
	    return 0;
}
int main()
{
	int y = 0;
	int count = 0;
	for(y=1000;y<=2000;y++)
	{ 
		if (is_leap_year(y) == 1)
		{
			count++;
			printf("%d ", y);
		}
	}
	printf("\ncount=%d\n", count);
	
	return 0;
}