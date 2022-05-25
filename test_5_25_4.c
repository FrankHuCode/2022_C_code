#define _CRT_SECURE_NO_WARNINGS 1
//函数的调用
// 函数的声明在调用之前
// 头文件可以起到声明的作用
//函数的递归:函数直接或间接调用自己,原则：大事化小。
//两个必要条件：
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//2.每次递归调用之后越来越接近这个限制条件
//练习
//接收一个整型值（无符号），按照顺序打印它的每一位数。例如：输入：1234，输出：1 2 3 4 

#include<stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n /10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	printf("Please enter a integer number:");
	scanf("%u", &num);//1234
	print(num);//print函数打印参数部分数字的每一位

	return 0;
}