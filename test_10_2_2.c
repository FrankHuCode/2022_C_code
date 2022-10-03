#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
#include<stdlib.h>

//6.字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1=AABCD 和s2=BCDAA 返回1，
//      给定s1=aabcd 和s2=BCDAA 返回0，
// AABCD左旋一个字符得到ABCDA
// AABCD左旋两个字符得到BCDAA
// AABCD右旋一个字符得到DAABC


//int is_string_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		//每次旋转一个字符
//		char temp = *str1;//1.把第一个元素放在temp
//		//2.后面n-1个字符往前移动
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + n - 1) = temp;//3.把temp里面的字符放在末尾
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}

int is_string_rotate(char* str1, char* str2)
{
	//判断两个字符串的长度是否相等
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1.在str1后面增加一个str1
	int len = strlen(str1);
	strncat(str1, str1, len);//strcat函数 strncat函数
	//2.判断str2是否是str1的子字符串
	char* ret = strstr(str1, str2);//strstr函数

	return ret != NULL;
}

int main()
{
	char arr1[20] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}