#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��strlen����

#include<stdio.h>
#include<string.h>
#include<assert.h>

size_t my_strlen(const char* str)//const-����������ֹ�޸�Դ���������
{
	assert(str != NULL);//���ԣ�����Ƿ���NULL��ָ��
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