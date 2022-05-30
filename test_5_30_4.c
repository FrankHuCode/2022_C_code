#define _CRT_SECURE_NO_WARNINGS 1

//C语言程序设计（现代方法）第2版·修订版
//第2章 C语言基本概念
//练习题代码：https://exl.ptpress.cn:8442/ex/1/609033ea

#include<stdio.h>
//printf函数

//int main()
//{
//	printf("        *\n");
//	printf("       *\n");
//	printf("      *\n");
//	printf("*    *\n");
//	printf(" *  *\n");
//	printf("  *\n");
//	return 0;
//}
//计算球体体积
//int main()
//{
//	int r = 0;
//	float pi = 3.14;
//	printf("Please enter a radius of the glob:");
//	scanf("%d",&r);
//    float v = 4.0f / 3.0f * pi * r * r * r;
//	printf("%.2lf\n", v);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("Please enter a integer x:");
//	scanf("%d", &x);
//	y = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
//	printf("%d\n", y);
//	return 0;
//}

//int main()
//{
//	int d = 0, i = 0, j = 0, k = 0, l = 0;
//	printf("Enter a dollar amount:");
//	scanf("%d", &d);
//	i = d / 20;
//	j = (d%20 )/ 10;
//	k = ((d-i*20)%10) / 5;
//	l = (d - i * 20 - j * 10 )%5 / 1;
//	printf("$20 bills: %d\n", i);
//	printf("$10 bills: %d\n", j);
//	printf("$5 bills: %d\n", k);
//	printf("$1 bills: %d\n", l);
//
//		return 0;
//}

int main()
{
	float loan = 0, rate = 0, monthly_payment = 0,r = 0; 
	float f = 0, s = 0, t = 0;

	printf("Enter amount of loan:");
	scanf("%f", &loan);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter monthly payment:");
	scanf("%f", &monthly_payment);

	r = rate / 100.0f / 12.0f;
	f = (loan - monthly_payment )+loan*r;
	s = (f - monthly_payment) +f*r;
	t = (s - monthly_payment)+s*r;
	printf("Balance remaining after first payment:$%.2f\n", f);
	printf("Balance remaining after secend payment:$%.2f\n", s);
	printf("Balance remaining after third payment:$%.2f\n", t);

	return 0;
}