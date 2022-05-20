#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 2,4,5,6,8,9,12,3,4,1 };
	int i = 0;
	double sum = 0;//int整型后面取模运算就没有小数点后面的值
		for (i = 0; i < 9; i++)
		{	
			sum = sum + arr[i];
		}
		printf("sum=%lf\n", sum);
		double avg = 0;
		avg = sum/10;
		printf("avg=%f\n", avg);

	return 0;
}