#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>


//strcat �ַ������ܸ��Լ�׷���ַ���,\0���Լ����ǵ���û�н�����־\0�����ܽ���
//strcmp �Ƚ������ַ����Ĵ�С
//int strcmp(const char* str1,const char* str2)


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//
//}
//
//int main()
//{
//	char* p = "abcwef";
//	char* q = "abcqef";
//	printf("%d\n", my_strcmp(p, q));//<0 0 >0
//
//	return 0;
//}

//strcpy
//strcat
//strcmp
//---���Ȳ������Ƶ��ַ�������

//strncpy
//strncat
//strncmp
//---���������Ƶ��ַ�������

//int main()
//{
//	char arr1[20] = "abcdefgh";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 6);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);//qwcdef//qwer
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//		printf("�ҵ��ˣ�%s\n", ret);
//	return 0;
//}

//KMP�㷨--�ַ��������㷨��

//192.168.3.122
//192
//168
//3
//122

//strtok


