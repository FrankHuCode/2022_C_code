#define _CRT_SECURE_NO_WARNINGS 1
//计算1/1-1/2+1/3-1/4+...+1/99-1/100的值，打印结果
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//		/*if (i % 2 != 0)
//			sum += 1.0 / i;
//		else
//			sum -= 1.0 / i;*/
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 11,-3,4,-5,6,7,19,-20,10,8 };
//	int i = 0;
//	int temp = arr[0];
//	for (i = 0; i <=10; i++)
//	{
//		if (arr[i] > temp)
//		{
//			temp = arr[i];
//		}
//	}
//	printf("最大值max=%d\n", temp);
//	return 0;
//}
//在屏幕上输出9*9乘法口诀表
int main()
{
	int i = 1;
	

	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{	
			printf("%dx%d=%-2d  ", j, i, i*j);
		}
		printf("\n");
	}
	
	return 0;
}