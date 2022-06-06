#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//描述
//输入整型数组和排序标识，对其元素按照升序或降序进行排序
//
//数据范围： 1≤n≤1000 1 \le n \le 1000 \ 1≤n≤1000  ，元素大小满足 0≤val≤100000 0 \le val \le 100000 \ 0≤val≤100000
//输入描述：
//
//第一行输入数组元素个数
//第二行输入待排序的数组，每个数用空格隔开
//第三行输入一个整数0或1。0代表升序排序，1代表降序排序
//输出描述：
// 
//输出排好序的数字

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