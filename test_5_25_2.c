#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，实现一个整型有序数组的二分查找
#include<stdio.h>
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}	
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 10;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，下标是%d", ret);
	}
	return 0;
}