#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����1000-2000��֮����������
// ��������Ĺ���Ϊ��4��һ�򣬰��겻��400������
//���꣺��ͨ���ܱ�4�����Ҳ��ܱ�100������Ϊ���ꣻ�������ܱ�400�����������ꡣ
int main()
{
	int i = 1000;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0) &&( i % 100 != 0)||(i%400==0))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}