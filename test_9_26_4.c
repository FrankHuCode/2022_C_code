#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>


//作业题
//编程题：杨辉三角，在屏幕上打印杨辉三角

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if ((i >= 2) && (j >= 1))
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//编程题：猜凶手
//日本发生一起谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
//以下为4个嫌疑犯的供词
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话
//现在请根据这些信息，写一个程序来确定到底谁是凶手

int main()
{
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}