#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ2����д��������������ʱ���������ַ����ĳ���.
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
//�ݹ�ʵ�֣����»�С
int my_strlen(char* str)
{
	if (*str != '\0')//*str��ָ��strָ�������
	{
		return 1 + my_strlen(str + 1);//str+1��һ���ַ��ĵ�ַ��������һ���ַ�i
	}
	else
	{
		return 0;//�����ַ���û�г�����
	}
}
int main()
{
	char arr[] = "Hello World!";
	//['b']['i']['t']['\0']
	//ģ��ʵ��һ��strlen����

	printf("%d\n", my_strlen(arr));
	return 0;
}