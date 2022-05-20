#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求10个数的最大值
int main()
{
	
	//定义一个数组
	int arr[10] = { 0 };
	//输入10个数
	int i = 0;
	//有输入
	for (i = 0; i < 10; i++)
	{	 
		scanf_s("%d", &arr[i]);

	}
	//查找最大值
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	//有输出
	printf("max=%d\n", max);

	return 0;
}