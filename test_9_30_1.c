#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//指针笔试题
//1.
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}

//2.指针类型决定了指针的运算
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;//结构体指针
//
////假设p的值位0x100000,如下表达式的值分别为多少？
////已知：结构体Test类型的变量大小是20个字节
//int main()
//{
//
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//3.
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//4,2000000
//	return 0;
//}
//4.
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//int a[]={{1,3},{5,0},{0,0}};
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}

//5.
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC -4
//	return 0;
//}

//6.
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}

//7.
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}

//8.
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);// ER
	printf("%s\n", *cpp[-2] + 3);//**(cpp-2)+3 ST
	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1 EW

	return 0;
}