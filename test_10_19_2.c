#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//Ѱ���������������
//����һ���������� nums ������������ �����±� ��
//
//���� �����±� �������һ���±꣬���������Ԫ����ӵĺ͵����Ҳ�����Ԫ����ӵĺ͡�
//
//��������±�λ����������ˣ���ô�����֮����Ϊ 0 ����Ϊ���±����಻����Ԫ�ء�
//��һ����������±�λ���������Ҷ�ͬ�����á�
//
//��������ж�������±꣬Ӧ�÷��� ������ ����һ����������鲻���������±꣬���� - 1 ��
//
//���ߣ�����(LeetCode)
//���ӣ�https://leetcode.cn/leetbook/read/array-and-string/yf47s/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������



int findMiddleIndex(int num[], int n)
{
	int i = 0;
	int total = 0;
	for (i = 0; i < n; i++)
	{
		total += num[i];
	}
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		if (2 * sum + num[i] == total)
		{
			return i;
		}
		sum += num[i];
	}
	return -1;
}
int main()
{

	int num[100] = { 0 };
	int n = 0;
	printf("������Ԫ�صĸ�����");
	scanf("%d\n", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	int ret = findMiddleIndex(num, n);
	printf("%d\n", ret);
	return 0;
}