#define _CRT_SECURE_NO_WARNINGS 1
//�ҳ�100-200֮�������
//����Ҳ��Ϊ������ֻ��1����������������������Ȼ����
//�涨1�Ȳ�������Ҳ���Ǻ���
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1֮�������ȥ�Գ����ܷ�����
		int j = 0;
		int flag = 1;//����i��������
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j==0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}