#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<math.h>

//����⣺��дһ��������ӡ��������
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//line=7
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//��ӡ�� ��
//		for (j = 0; j < line-1 - i; j++)
//		{
//			printf("%c", ' ');
//		}
//		//��ӡ��*��
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�� ��
//		for (j = 0; j < i + 1; j++)
//		{ 
//			printf(" ");
//		}
//		//��ӡ��*��
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//����⣺����ˮ���⣬һƿ��ˮ1Ԫ��������ƿ�ӿ��Ի�һƿ��ˮ����20Ԫ���Ժȶ�����ˮ��
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	//�һ�
	while (empty / 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}