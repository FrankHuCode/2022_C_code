#define _CRT_SECURE_NO_WARNINGS 1

//将段字符串进行倒置，但标点不进行倒置。比如：I like Beijing.倒置后变为：Beijing.like I

#include<stdio.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')//倒置单个单词
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	printf("%d\n", strlen(arr));
	//printf("%d\n", sizeof(arr));
	return 0;
}