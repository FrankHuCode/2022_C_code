#define _CRT_SECURE_NO_WARNINGS 1
//创建一个数组，实现对数组的操作
//1.实现函数Init()初始化数组为全0
//2.实现Print()打印数组的每个元素
//3.实现reverse()函数完成数组元素的逆置
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