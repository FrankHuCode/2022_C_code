#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int age = 20;
//	double weight = 75.2;
//	
//	age = age + 1;
//	weight = weight - 5;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}
//
//%d-����
//%f-float
//%lf-double
//
//дһ��������2�����ĺ�
//scanf���������뺯��
int main()
{
	int a=0 ;
	int b=0 ;
	int sum = 0;
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);

	return 0;
}