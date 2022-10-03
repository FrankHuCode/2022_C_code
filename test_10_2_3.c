#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>


//字符串函数实现

//strcat strstr strlen strcmp strcpy strtok strerror

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[]={ 'a','b','c' };
//
//	int len1= strlen(arr1);
//	int len2 = strlen(arr2);
//	printf("%d %d\n", len1,len2);//3 strlen 以\0为结束标志，但不包含\0,没有\0会出现随机数
//
//	return 0;
//}

//模拟实现strlen 函数
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//对指针进行解引用*str要断言判断指针str是否为NULL
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//size_t strlen(const char *str);//size_t是无符号的


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
//	strcpy(arr, "hello");//\0也是strcpy函数结束的标志，\0也被复制过去
//	//strcpy(str, "hello");//error str不可改变
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
//	char arr2[] = "world！";
//	strcat(arr1, arr2);//字符串追加（连接）arr2字符串自带\0 arr1字符串\0为开始
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strcat函数

char* my_strcat(char* dest, const char* src)
{

	char* ret = dest;
	assert(dest && src);
	//1.找到dest字符串中的\0
	while (*dest)
	{
		dest++;
	}

	//2.在dest字符串的\0处开始追加src字符串至\0,包含\0
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