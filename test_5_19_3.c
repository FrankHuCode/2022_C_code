#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��10���������ֵ
int main()
{
	
	//����һ������
	int arr[10] = { 0 };
	//����10����
	int i = 0;
	//������
	for (i = 0; i < 10; i++)
	{	 
		scanf_s("%d", &arr[i]);

	}
	//�������ֵ
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	//�����
	printf("max=%d\n", max);

	return 0;
}