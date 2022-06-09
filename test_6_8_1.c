#define _CRT_SECURE_NO_WARNINGS 1

// HJ1 字符串最后一个单词的长度
#include<stdio.h>
int main()
{
	char str[5000] = { 0 };
	gets(str);
	int len = strlen(str);
	//printf("%d\n", len);
	int count = 0;
	while ((len>=1)&&(str[len - 1] != ' '))
	{
		count++;
		len--;
	}
	printf("%d\n", count);
	return 0;
}