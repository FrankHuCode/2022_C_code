#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//内存动态存储

//malloc
//realloc
//free
//calloc

//0.  malloc
//void* malloc(size_t size);

//int main()
//{
//	//假设开辟10个整型的空间--10*sizeof(int)
//	int arr[10] = { 0 };//栈区
//	//动态内存开辟的
//	int* p = (int*)malloc(10* sizeof(int));//malloc函数返回void* 指针
//
//	//使用这些空间的时候
//
//	if (p == NULL)//开辟空间失败
//	{
//		perror("main");//main:xxxxxxxxx
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i]==>*(p+i)
//	}
//	free(p);
//	p = NULL;//自己动手置为NULL
//
//	return 0;
//}

//1.   void* free(void* str);
//free函数只能释放堆区上开辟的空间，不能释放栈区上开辟的空间

//malloc free 成对出现

//2.  calloc
//void* calloc(size_t num, size_t size);

//int main()
//{
//	//int* p = (int*)malloc(40);//初始化随机
//	int* p = (int*)calloc(10, 4);//初始化为0
//	if (p == NULL)
//	{
//		perror("a");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. realloc
//void* realloc(void* ptr, size_t size);
//int main()
//{
//	//int* p = (int*)malloc(40);//初始化随机
//	int* p = (int*)calloc(10, 4);//初始化为0
//	if (p == NULL)
//	{
//		perror("a");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=5;
//	}
//
//	int* ptr=realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//这里功能类似malloc函数，也是在堆区开辟40字节空间
//	return 0;
//}
