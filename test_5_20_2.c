#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//操作符的应用
int sum(int a)
{
	int c = 0;
	static int b = 3;//b随b+=2而改变
	c += 1;
	b += 2;
	 return(a + b + c);

}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", sum(a));
	}
	return 0;
}