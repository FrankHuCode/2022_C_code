#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//  sizeof(数组名)--数组名表示整个数组--计算的是整个数组的大小
//  &数组名--数组名表示整个数组 --取出的是整个数组的地址
//  除此之外，所有的数组名都是表示数组的首个元素的地址

int main()
{
	//int a[] = { 1,2,3,4 };

	//printf("%d\n", sizeof(a));//16 单位是字节
	//printf("%d\n", sizeof(a+0));//32位4字节，64位8字节 a+0第一个元素的地址，计算的是地址的大小
	//printf("%d\n", sizeof(*a));//4字节  *a是数组的第一个元素，计算的是第一个元素的大小
	//printf("%d\n", sizeof(a+1));//32位4字节，64位8字节  a+1第二个元素的地址，计算的是地址的大小
	//printf("%d\n", sizeof(a[1]));//4字节 a[1]是数组的第二个元素，计算的是第二个元素的大小

	//printf("%d\n", sizeof(&a));//4/8- &a取的是整个数组的地址，但也是地址，sizeof(&a)计算的是一个地址的大小
	//printf("%d\n", sizeof(*&a));//16 *&a -计算的是数组的大小
	//printf("%d\n", sizeof(&a+1));//4/8 &a+1 取的是数组后面的空间的地址，计算的是一个地址的大小
	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0] 取出是第一个元素的地址，计算的是一个地址的大小
	//printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]+1 取出是第二个元素的地址，计算的是一个地址的大小

	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4/8 字符的地址也是地址，第一个元素的地址
	//printf("%d\n", sizeof(*arr));//1 第一个元素的大小
	//printf("%d\n", sizeof(arr[1]));//1 第二个元素的大小
	//printf("%d\n", sizeof(&arr));//4/8 取整个字符数组的地址，也是地址
	//printf("%d\n", sizeof(&arr+1));//4/8 取数组arr后面的空间的地址，也是地址
	//printf("%d\n", sizeof(&arr[0]+1));//4/8取第二个元素的地址，也是地址

	//strlen从首元素开始寻找\0，计算字符串的长度
	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr+0));//随机值
	//printf("%d\n", strlen(*arr));//err  'a'=97
	//printf("%d\n", strlen(arr[1]));//err  'b'=98
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值-6
	//printf("%d\n", strlen(&arr[0]+1));//随机值-1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr+0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8   char(*)[7]
	//printf("%d\n", sizeof(&arr+1));//4/8
	//printf("%d\n", sizeof(&arr[0]+1));//4/8

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0]+1));//5

	char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 计算指针变量的地址
	//printf("%d\n", sizeof(p+1));//4/8 p+1是第二元素b的地址
	//printf("%d\n", sizeof(*p));//1 *p 第一个元素a的大小
	//printf("%d\n", sizeof(p[0]));//1 p[0]->*(p+0)第一个元素a的大小
	//printf("%d\n", sizeof(&p));//4/8 取指针p的地址，也是地址
	//printf("%d\n", sizeof(&p+1));//4/8 取指针p的下一个地址
	//printf("%d\n", sizeof(&p[0]+1));//4/8 &p[0]+1取第一个元素a的地址+1,就是b的地址

	printf("%d\n", strlen(p));//从元素a开始数--6
	printf("%d\n", strlen(p+1));//从元素b开始数--5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机址
	printf("%d\n", strlen(&p+1));//随机值
	printf("%d\n", strlen(&p[0]+1));//从元素b开始数--5


	return 0;
}

 