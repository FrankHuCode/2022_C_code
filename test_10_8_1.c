#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


//内存函数
//memcpy
//memmove
//memcmp
//memset


//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//
//	return 0;
//}

//memcpy函数应该拷贝不重叠的内存
//memmove函数可以处理内存重叠的情况

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char* )src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//
//	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[20] = { 0 };
//	my_memmove(arr1 , arr1+2, 20);
//
//	return 0;
//}


//内存比较 memcmp函数

//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,2.0 };
//	int ret = memcmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}

//memset 以字节为单位设置内存

int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	memset(arr, 1, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

