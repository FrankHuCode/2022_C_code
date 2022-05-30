#define _CRT_SECURE_NO_WARNINGS 1
//������A��B�е����ݽ���������һ����

#include<stdio.h>

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arrA[] = { 1,2,3,4,5 };
	int arrB[] = { 6,7,8,9,10 };

	int sz = sizeof(arrA) / sizeof(arrA[0]);
	Print(arrA, sz);
	Print(arrB, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = tmp;
	}
	printf("\n");
	Print(arrA, sz);
	Print(arrB, sz);
	return 0;
}