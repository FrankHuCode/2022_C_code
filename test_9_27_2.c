#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<math.h>


//指针进阶
//一级指针传参
//void print(int* ptr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p=arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p,sz);
//	return 0;
//}
//两种能力：第一种：自己该如何设计传参；第二种：别人给定传参，自己该如何用该参数


//二级指针传参

//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针，用来存放一级指针变量的地址
//
//	//test(ppa);
//	test(&pa);//传一级指针变量的地址
//
//	//int* arr[10] = { 0 };
//	//test(arr);//传存放一级指针的数组
//
//	printf("%d\n", a);
//
//	return 0;
//}

//函数指针：指向函数的指针，存放函数地址的指针！
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//
//	//函数指针 -存放函数地址的指针
//	//&函数名 -取出（到）的是函数的地址
//
//	int (*pf)(int, int) = &Add;//pf -是一个函数指针变量
//
//	printf("%p\n", &Add);//数组名 != &数组名
//	printf("%p\n", Add);// 函数名 == &函数名
//
//	return 0;
//}


//代码1：
//(*(void(*)())0)();
//调用0地址处的函数
//该函数无参，返回类型为void
//1.  void(*)() -函数指针类型
//2. （void(*)()）0 - 对0进行强制类型转换，被解释为一个函数地址
//3.  *（void(*)()）0 -对0地址进行了解引用操作
//4.  (*(void(*)())0)(); -调用0地址处的函数

//《C陷阱与缺陷》


//代码2：
//void(*signal(int,void(*)(int)))(int);
//void(*)(int)  signal(int,void(*)(int));//语法不支持
// 
//typedef -对类型进行重定义
//typedef void(*pfun_t)(int)--void(*)(int)  pfun_t;对void(*)(int)的函数指针类型重命名为pfun_t
//例如：typedef unsinged int uint;


// typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
// pfun_t signal(int,pfun_t);
//等价于
// void(*signal(int, void(*)(int)))(int);
// 
//1. signal和()先结合，说明signal是函数名
//2. signal函数的第一个参数的类型是int，第二个参数的类型是函数指针
// 该函数指针，指向一个参数为int,返回类型是void的函数
//3. signal函数的返回类型也是一个函数指针
// 该函数指针，也是指向一个参数为int,返回类型是void的函数
//解读: signal 是一个函数的声明


//函数指针数组--- 存放函数指针的数组

//整型指针 int*
//整型指针数组 int* arr[5];

//计算器--计算整型变量的加、减、乘、除


void menu()
{
	printf("************************\n");
	printf("**** 1.Add    2.Sub ****\n");
	printf("**** 3.Mul    4.Div ****\n");
	printf("****     0.exit     ****\n");
	printf("************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	do {
		menu();
		//pfArr是函数指针数组
		//转移表 《C和指针》
		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
		int a = 0;
		int b = 0;
		int res = 0;

		printf("请选择计算模式：");
		scanf("%d", &input);

		if (input >= 1 && input <= 5)
		{
			printf("请输入两个操作数：");
			scanf("%d %d", &a, &b);

			res = (pfArr[input])(a, b);
			printf("%d\n", res);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("输出错误，重新选择：\n");
		}

	} while (input);
	return 0;
}