#define _CRT_SECURE_NO_WARNINGS 1
//���һ���㷨��������A��B����С������
//��С���������ܱ�A��B��������С������
#include<stdio.h>
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	int min = m > n ? m : n;//��С������
//	while (1)
//	{
//		if (min % m == 0 && min % n == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; ; i++)
	{
		if ((a * i) % b == 0)
		{
			printf("%d\n", a * i);
			break;
		}
	}
	return 0;
}

//շת�����������Լ����������С������ 

//�������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = a < b ? a : b;
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}