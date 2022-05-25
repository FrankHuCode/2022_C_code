#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，每调用一次这个函数，就会将num 的值增加1.
//传值调用：函数形参和实参分别占有不同内存块，对形参的修改不会影响实参
//传址调用：把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式，
//函数内部可以直接操作函数外部的变量
#include<stdio.h>
int add(int*p)
{
	(*p)++;
}
int main()
{
	int num = 0;

	add(&num);//想要返回一个函数的值须传址
	printf("这个函数已经被调用%d次\n", num);//1

	add(&num);//想要返回一个函数的值须传址
	printf("这个函数已经被调用%d次\n", num);//2

	add(&num);//想要返回一个函数的值须传址
	printf("这个函数已经被调用%d次\n", num);//3

	return 0;
}