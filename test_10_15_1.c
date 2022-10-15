#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//动态内存开辟常见的错误

//1.对NULL指针的解引用操作，需要对malloc函数返回值做判断
//2.对动态开辟空间的越界访问
//3.使用free函数释放非动态开辟的空间
//4.使用free函数释放动态开辟空间中的一部分
//5.对同一块动态开辟的空间进行多次释放
//6.动态开辟空间忘记释放--造成（内存泄露）



//int main()
//{
//	int* p = (int*)malloc(100 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//动态开辟的空间
//两种回收方式
//1.主动free
//2.程序结束
//7X24小时不停运行的服务器

//柔性数组（flexible array）
//C99中，结构体中的最后一个元素允许是未知大小的数组，这就是柔性数组成员

