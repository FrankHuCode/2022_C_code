#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//����
//������������������ʶ������Ԫ�ذ�����������������
//
//���ݷ�Χ�� 1��n��1000 1 \le n \le 1000 \ 1��n��1000  ��Ԫ�ش�С���� 0��val��100000 0 \le val \le 100000 \ 0��val��100000
//����������
//
//��һ����������Ԫ�ظ���
//�ڶ����������������飬ÿ�����ÿո����
//����������һ������0��1��0������������1����������
//���������
// 
//����ź��������

int cmp(const int* a, const int* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	else
		return 1;
}
int main()
{
	int n = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr, n, sizeof(int), cmp);
	int num = 0;
	scanf("%d", &num);
	if(num==0)
	{
		for (int i = 0; i < n; i++)
			printf("%d ", arr[i]);
	}
	else
	{
		for (int i = n-1; i >= 0; i--)
			printf("%d ", arr[i]);
	}
	return 0;
}