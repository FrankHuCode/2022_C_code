#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//回调函数：就是一个通过函数指针调用的函数，如果你把函数的指针（地址）作为参数传递给另一个
//  函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的
//用于对该事件或条件进行响应。

//演示一下qsort函数的使用

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//交换顺序
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//
//	bubble_sort(arr, sz);
//
//	print_arr(arr, sz);
//	return 0;
//}


//库函数qsort
//整形数据、字符串数据、结构体数据都可以进行快速排序
//void qsort(void* base,//base中存放的是待排序数据中第一个对象的地址
//           size_t num,//排序数据中元素的个数
//           size_t size,//排序数据中一个元素的大小，单位是字节
//           int (*compar)(const void*, const void*)//是用来比较待排序数据中的2个元素大小的函数
//           );

#include<stdlib.h>
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int  comp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void test1()
//{
//	//整形数据的排序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), comp_int);
//	print_arr(arr, sz);
//}

struct Stu
{
	char name[20];
	int age;
};

//int sort_age(const void* e1,const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
int sort_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2()
{
	//结构体数据的排序
	struct Stu s[3] = { {"zhangsan",30},{"lisi",34},{"wangwu",20}};
	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄来排序
	//qsort(s, sz, sizeof(s[0]), sort_age);
	//按照名字来排序
	qsort(s, sz, sizeof(s[0]), sort_name);
}
int main()
{
	//test1();
	test2();
	return 0;
}