#define _CRT_SECURE_NO_WARNINGS 1
//编写程序实现字符串的逆序存储
#include<stdio.h>
int my_strlen(char* arr) 
{
	int count = 0;
	while(*arr != '\0'){
		count++;
		arr++;
	}	
	return count;
}
//函数实现
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while(left<right)
//	{
//		char tmp = 0;
//		tmp=arr[left];
//		arr[left] = arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//递归实现
void reverse_string(char* str)
{
	char tmp = *str;                  //步骤1
	int len = my_strlen(str);
	*str = *(str+len-1);               //步骤2
	*(str+len-1) = '\0';              //步骤3
	if (my_strlen(str+1)>=2)
	{
		reverse_string(str + 1);//4步骤
	}
	*(str+len-1) = tmp;               //5步骤
}
int main()
{
	char arr[] = "abcdef";//'a','b','c','d','e','f','\0'
	reverse_string(arr);//数组名是数组arr首元素的地址
	printf("%s\n", arr);//只是直接打印数组，不需要返回值，所以void修饰函数
	return 0;
}