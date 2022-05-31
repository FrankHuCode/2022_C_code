#define _CRT_SECURE_NO_WARNINGS 1

//第3章 格式化输入输出
//addfrac.c
#include<stdio.h>
//int main()
//{
//	int num1, denom1, num2, denom2, result_num, result_denom;
//	printf("Enter first fraction:");
//	scanf("%d/%d", &num1, &denom1);
//	printf("Enter second fraction:");
//	scanf("%d/%d", &num2, &denom2);
//	result_num = num1 * denom2 + num2 * denom1;
//	result_denom = denom1 * denom2;
//	printf("The sum is:%d/%d\n", result_num, result_denom);
//	return 0;
//}

//练习题
//int main()
//{
//	    printf("    %-6.2g    "    ,.0000009979);//1e-06
//
//	return 0;
//}

//int main()
//{
//	float x = 0;
//	printf("Enter a floating number:");
//	scanf("%f", &x);
//	printf("%6.0g", x);
//	return 0;
//}

// 说明：
//%d、%5d、%-5d、%5.3d--十进制形式
//%10.3f--定点十进制形式
//%10.3e--指数形式
//%-10g--既可以定点十进制形式，也可以指数形式，数值可能会发生舍入

//int main()
//{
//	float i = 0, j = 0;
//	int  x = 0;
//	printf("Enter a number:");
//	scanf("%f%d%f", &i,&x,&j);
//	printf("%f|%d|%f\n", i,x,j);
//	return 0;
//}
//scanf函数遇到空格时不在继续往后读数

//int main()
//{
//	int mm = 0, dd = 0, yy = 0;
//	printf("Enter a date(mm/dd/yy):");
//	scanf("%d/%d/%d", &mm, &dd, &yy);
//	printf("You entered the date%d%02d%02d", yy, mm, dd);//%02d
//	return 0;
//}

//先看一组示例
//警报符：\a.
//回退符：\b.
//换行符：\n.
//水平制表符：\t.

//int main()
//{
//	int n =0 ;
//	float p = 0;
//	int mm = 0, dd = 0, yy = 0;
//	printf("Enter item number:");
//	scanf("%d", &n);
//	printf("Enter unit price:");
//	scanf("%f", &p);
//	printf("Enter purchase date (mm/dd/yy):");
//	scanf("%02d/%02d/%d", &mm, &dd, &yy);
//	printf("Item\tUnit\tPurchase\t\n");
//	printf("Price\tDate\t\n");
//	printf("%-d\t$%6.2f\t%02d/%02d/%d\t\n", n, p, mm, dd, yy);
//	//printf("%d", yy);
//	return 0;
//}

//int main()
//{
//
//	int GS1 = 0, Group = 0, Pub = 0, Ite = 0, Che = 0;
//	printf("Enter ISBN:");
//	scanf("%d-%d-%d-%d-%d", &GS1, &Group, &Pub, &Ite, &Che);
//	printf("GS1 prefix:%d\n", GS1);
//	printf("Group identifier:%d\n", Group);
//	printf("Publisher code:%d\n", Pub);
//	printf("Item number:%d\n", Ite);
//	printf("Check digit:%d\n", Che);
//	return 0;
//}

//幻方Albrecht Durer创作于1514年的一幅画中

void PrintA(int A[4][4])
{
	int i = 0, j = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	int a[16] = { 0 };
	int A[4][4] = {0};
	int i = 0;

	PrintA(A);
	
	printf("Enter 16 integer numbers from 1 to 16 in any order:");

	for (i = 0; i < 16; i++)
	{
		scanf("%d", &a[i]);
		printf("%d ", a[i]);
	}
	printf("\n");
	
	A[0][0] = a[0];
	A[0][1] = a[1];
	A[0][2] = a[2];
	A[0][3] = a[3];
	A[1][0] = a[4];
	A[1][1] = a[5];
	A[1][2] = a[6];
	A[1][3] = a[7];
	A[2][0] = a[8];
	A[2][1] = a[9];
	A[2][2] = a[10];
	A[2][3] = a[11];
	A[3][0] = a[12];
	A[3][1] = a[13];
	A[3][2] = a[14];
	A[3][3] = a[15];
	PrintA(A);

	int Rs1 = A[0][0] + A[0][1] + A[0][2] + A[0][3];
	int Rs2 = A[1][0] + A[1][1] + A[1][2] + A[1][3];
	int Rs3 = A[2][0] + A[2][1] + A[2][2] + A[2][3];
	int Rs4 = A[3][0] + A[3][1] + A[3][2] + A[3][3];
	int Cs1 = A[0][0] + A[1][0] + A[2][0] + A[3][0];
	int Cs2 = A[0][1] + A[1][1] + A[2][1] + A[3][1];
	int Cs3 = A[0][2] + A[1][2] + A[2][2] + A[3][2];
	int Cs4 = A[0][3] + A[1][3] + A[2][3] + A[3][3];
	int Ds1 = A[0][0] + A[1][1] + A[2][2] + A[3][3];
	int Ds2 = A[0][3] + A[1][2] + A[2][1] + A[3][0];
	printf("Row sums:%d %d %d %d\n", Rs1, Rs2, Rs3, Rs4);
	printf("Column sums:%d %d %d %d\n", Cs1, Cs2, Cs3, Cs4);
	printf("Diagonal sums:%d %d\n", Ds1, Ds2);
	return 0;
}