#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>

//练习
// 
//数组
//字符串
//数据结构

//5.字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void string_left_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char temp = *str;//1.把A放在temp
//		//2.后面n-1个字符往前移动
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.把temp中的A放在字符串末尾
//		*(str + n - 1) = temp;
//	}
//}
//int main()
//{
//	char arr[10] = { "ABCDEF" };
//	int k = 4;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

//三步反转法
//1.左边逆序  A B->B A
//2.右边逆序  C D E F->F E D C
//3.整体逆序  B A F E D C->C D E F A B

//


void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;

	}
}
void string_left_rotate(char* ptr, int k)
{
	assert(ptr);
	int n = strlen(ptr);
	reverse(ptr,ptr+k-1);//左边逆序
	reverse(ptr+k,ptr+n-1);//右边逆序
	reverse(ptr,ptr+n-1);//整体逆序

}
int main()
{

	char arr[10] = { "ABCDEF" };
	int k = 4;
	string_left_rotate(arr, k);
	printf("%s\n", arr);

	return 0;
}