#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ��1��100�����������г��ֶ��ٸ�����9
//9��19��29��...��89��99
//91��92��93��...��98��99
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