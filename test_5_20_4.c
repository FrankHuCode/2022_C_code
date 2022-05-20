#define _CRT_SECURE_NO_WARNINGS 1
//题目名称
//BC83-被5整除问题
#include<stdio.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	if (m % 5 == 0)
		printf("YES\n");
	//printf("%s\n", "YES");
	else
		printf("NO\n");
		//printf("%s\n", "NO");
	return 0;
}