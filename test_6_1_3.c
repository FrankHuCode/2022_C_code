#define _CRT_SECURE_NO_WARNINGS 1

//实现strlen函数

#include<stdio.h>
#include<string.h>
#include<assert.h>

size_t my_strlen(const char* str)//const-常变量，防止修改源数组的数据
{
	assert(str != NULL);//断言，检测是否是NULL空指针
	/*if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	return 0;*/
	size_t count = 0;
	while (*str!='\0')
	{
		count++;	
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "hello";
	
	printf("The length of a string is:%d\n", my_strlen(arr));
	return 0;
}