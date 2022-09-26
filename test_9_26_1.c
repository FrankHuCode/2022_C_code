#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//编程题：求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//int main()
//		{
//			int a = 0;
//			int n = 0;
//			scanf("%d %d", &a, &n);
//			int i = 0;
//			int sum = 0;
//			int rel = 0;
//			for (i = 0; i < n; i++)
//			{
//				rel = rel * 10 + a;
//				sum +=rel;
//			}
//			printf("sum=%d\n", sum);
//			return 0;
//		}
//编程题：写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整型的一维数组
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	/*for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}*/
//	return 0;
//}
//编程题：求出0-100000之间的水仙花数并输出
//水仙花数是指一个n位数，其各位数字的n次方之和恰好等于该数本身，
//如：153=1^3+5^3+3^3.则153就是水仙花数。
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//	//判断一个n位数是否水仙花数
//	//1.求一个数位数n
//		int n = 1;
//		int temp = i;
//		while (temp / 10)
//		{
//			n++;
//			temp = temp / 10;
//		}
//	//2.求这个数的各位数n次方之和sum
//		int sum = 0;
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp = temp / 10;
//		}
//	//3.判断sum是否等于该数本身
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[]= { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return 0;
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},
//							{9802,"wang",19},
//							{9803,"zhao",18} };
//	fun(students + 1);
//	return 0;
//}

//编程题：写一个函数逆序字符串的内容
#include<assert.h>
#include<string.h>
void reverse(char* str)
{
	assert(str != NULL);//检测指针是否有效
	int len = strlen(str);
	char* left = str;
	char* right = str + len -1;
	while (left <= right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = { "abcdef" };
	reverse(arr);
	printf("%s\n", arr);

	return 0;
}