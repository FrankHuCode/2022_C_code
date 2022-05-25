#define _CRT_SECURE_NO_WARNINGS 1
//练习2：编写函数不允许创建临时变量，求字符串的长度.
#include<string.h>
#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//递归实现，大事化小
int my_strlen(char* str)
{
	if (*str != '\0')//*str是指针str指向的内容
	{
		return 1 + my_strlen(str + 1);//str+1下一个字符的地址，不是下一个字符i
	}
	else
	{
		return 0;//假设字符串没有长度了
	}
}
int main()
{
	char arr[] = "Hello World!";
	//['b']['i']['t']['\0']
	//模拟实现一个strlen函数

	printf("%d\n", my_strlen(arr));
	return 0;
}