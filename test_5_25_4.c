#define _CRT_SECURE_NO_WARNINGS 1
//�����ĵ���
// �����������ڵ���֮ǰ
// ͷ�ļ�����������������
//�����ĵݹ�:����ֱ�ӻ��ӵ����Լ�,ԭ�򣺴��»�С��
//������Ҫ������
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������
//��ϰ
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�������磺���룺1234�������1 2 3 4 

#include<stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n /10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	printf("Please enter a integer number:");
	scanf("%u", &num);//1234
	print(num);//print������ӡ�����������ֵ�ÿһλ

	return 0;
}