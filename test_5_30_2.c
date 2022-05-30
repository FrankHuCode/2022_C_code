#define _CRT_SECURE_NO_WARNINGS 1
//����һ�����飬ʵ�ֶ�����Ĳ���
//1.ʵ�ֺ���Init()��ʼ������Ϊȫ0
//2.ʵ��Print()��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()�����������Ԫ�ص�����
#include<stdio.h>

void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	Print(arr, sz);

	reverse(arr, sz);
	Print(arr, sz);

	Init(arr,sz);
	Print(arr,sz);

	return 0;
}