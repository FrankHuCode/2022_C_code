#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//�򵥼���

//HJ1-�ַ������һ�����ʵĳ���
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int len = strlen(str);
//	int count=0;
//	while ((len >= 1) && (str[len - 1] != ' '))
//	{
//		count++;
//		len--;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//HJ2-����ĳ�ַ����ִ���

//#define cmp ('a'-'A')
//
//int main(void)
//{
//	char str[100] = { 0 };
//	char C ='\0';//���ַ���\0��=0�����ַ���0��=48.
//	int count = 0;
//	fgets(str,sizeof(str),stdin);
//	scanf("%c", &C);
//	for (int i = 0; i < strlen(str); i++)
//		if ((str[i] - C) == 0)
//			count++;
//		else
//			if ((C >= 'A') && (C <= 'Z') && ((str[i] - C) == cmp))
//				count++;
//			else
//				if ((C >= 'a') && (C <= 'z') && ((C - str[i]) == cmp))
//					count++;
//	printf("%d\n", count);
//	return 0;
//}

//HJ4-�ַ����ָ�

//int main()
//{
//	char str[100] = { 0 };
//	while (scanf("%8s", str) != EOF)
//	{
//		int len = 8 - strlen(str);
//		printf("%s", str);
//		for (int i = 0; i < len; i++)
//			printf("0");
//		printf("\n");
//	}
//	return 0;
//}

//HJ5-����ת��
//int main()
//{
//	int n = 0;
//	while (scanf("%i", &n) != EOF)//%i��������ǰ׺0����0x�ֱ���Ϊ�˽��ƻ���ʮ�����ƴ���
//		printf("%d", n);
//	return 0;
//}

//HJ6-��������

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		while (n % i == 0)
//		{
//			printf("%d ", i);
//			n /= i;
//		}
//	}
//	if(n>1)
//		printf("%d ", n);
//	return 0;
//}

//HJ8-�ϲ����¼

int main()
{
	int n, index, value;
	scanf("%d", &n);
	while (scanf("%d %d", &index, &value) != EOF)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{

		}
	}
	return 0;
}


//HJ10-�ַ�����ͳ��

//int main()
//{
//	char map[128] = { 0 };
//	char str[500] = { 0 };
//	int count = 0;
//	scanf("%s", str);
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (map[(int)str[i]] == 0)
//		{
//			map[(int)str[i]] = 1;
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
