#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>


//�ַ�������ʵ��

//strcat strstr strlen strcmp strcpy strtok strerror

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[]={ 'a','b','c' };
//
//	int len1= strlen(arr1);
//	int len2 = strlen(arr2);
//	printf("%d %d\n", len1,len2);//3 strlen ��\0Ϊ������־����������\0,û��\0����������
//
//	return 0;
//}

//ģ��ʵ��strlen ����
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//��ָ����н�����*strҪ�����ж�ָ��str�Ƿ�ΪNULL
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//size_t strlen(const char *str);//size_t���޷��ŵ�


//function
//strcpy
//char* strcpy(char* destination,const char* source)
//string copy

//int main()
//{
//	char arr[20] = { 0 };
//	char* str = "xxxxxxxxxxxxxxx";
//
//	char* p = "hello";
//
//	strcpy(arr, "hello");//\0Ҳ��strcpy���������ı�־��\0Ҳ�����ƹ�ȥ
//	//strcpy(str, "hello");//error str���ɸı�
//
//	printf("%s\n", arr);  
//	//printf("%s\n", str);//error
//	return 0;
//}

//function
//strcat
//char * strcat(char* destination,const char* source);
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world��";
//	strcat(arr1, arr2);//�ַ���׷�ӣ����ӣ�arr2�ַ����Դ�\0 arr1�ַ���\0Ϊ��ʼ
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strcat����

char* my_strcat(char* dest, const char* src)
{

	char* ret = dest;
	assert(dest && src);
	//1.�ҵ�dest�ַ����е�\0
	while (*dest)
	{
		dest++;
	}

	//2.��dest�ַ�����\0����ʼ׷��src�ַ�����\0,����\0
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";

	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}