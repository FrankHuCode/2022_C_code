#define _CRT_SECURE_NO_WARNINGS 1

//����
//����һ�� int �����������մ���������Ķ�˳�򣬷���һ�������ظ����ֵ��µ�������
//��֤������������һλ���� 0 ��
//
//���ݷ�Χ�� 1��n��108 1 \le n \le 10 ^ {8} \ 1��n��108
//����������
//
//����һ��int������
//���������
//
//���մ���������Ķ�˳�򣬷���һ�������ظ����ֵ��µ�����

#include<stdio.h>
int main()
{
	int n = 0;
	int map[10] = { 0 };
	scanf("%d",&n);
	switch (n % 10)
	{
	case 0:
		break;
	default:
	{
		while ((n%10)!=0)
		{
			int i = n % 10;
			if (map[i] == 0)
			{
				map[i]=i;
				printf("%d", i);
			}
			n /= 10;
		}
		break;
	}
	}
	return 0;
}
