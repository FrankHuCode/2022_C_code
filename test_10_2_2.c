#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>
#include<stdlib.h>

//6.�ַ�����ת���
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1=AABCD ��s2=BCDAA ����1��
//      ����s1=aabcd ��s2=BCDAA ����0��
// AABCD����һ���ַ��õ�ABCDA
// AABCD���������ַ��õ�BCDAA
// AABCD����һ���ַ��õ�DAABC


//int is_string_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		//ÿ����תһ���ַ�
//		char temp = *str1;//1.�ѵ�һ��Ԫ�ط���temp
//		//2.����n-1���ַ���ǰ�ƶ�
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + n - 1) = temp;//3.��temp������ַ�����ĩβ
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
	//�ж������ַ����ĳ����Ƿ����
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1.��str1��������һ��str1
	int len = strlen(str1);
	strncat(str1, str1, len);//strcat���� strncat����
	//2.�ж�str2�Ƿ���str1�����ַ���
	char* ret = strstr(str1, str2);//strstr����

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