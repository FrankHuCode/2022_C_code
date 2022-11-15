#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//简单级别

//HJ11-数字颠倒

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n / 10)
//	{
//		int i = n % 10;
//		printf("%d", i);
//		n /= 10;
//	}
//	printf("%d", n);
//	return 0;
//}

//HJ12-字符串反转

//int main()
//{
//	char str[100] = { 0 };
//	scanf("%s", str);
//	int right = strlen(str)-1;
//	int left = 0;
//	while (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//        printf("%s\n", str);
//	return 0;
//}

//void reverse_string(char* str)
//{
//    int len = strlen(str);
//    char* left = str;
//    char* right = str + len - 1;
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char str[1000] = { 0 };
//    gets("%s", str);
//    reverse_string(str);
//    printf("%s\n", str);
//    return 0;
//}

//HJ13-句子逆序

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[1000] = { 0 };
//	while (gets(str) != EOF)
//	{
//		int len = strlen(str);
//		reverse(str, str + len - 1);//1.整体逆序
//		//2.每个单词逆序
//		char* start = str;
//		while (*start)
//		{
//			char* end = start;
//			while (*end != ' ' && *end != '\0')
//			{
//				end++;
//			}
//			reverse(start, end - 1);//实现第一个单词逆序
//			if (*end == ' ')
//				start = end + 1;
//			else
//				start = end;
//		}
//		printf("%s\n", str);
//	}
//	return 0;
//}

//int main()
//{
//	char str[1000] = { 0 };
//	gets(str);
//	int len = strlen(str);
//	for (int i = len - 1; i >= 0; i--)
//	{
//		if (str[i] == ' ')
//		{
//			printf("%s", &str[i + 1]);
//			str[i] = '\0';
//			printf(" ");
//		}
//	}
//	printf("%s", str);//打印遇到\0停止str里面的字符串顺序并没有改变，只是输出的结果形式变了
//	return 0;
//}

//HJ14-字符串排序

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char str[][100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", str[i]);
//	}
//	return 0;
//}

//HJ15-求int型整数在内存中存储时1的个数

//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

////正整数可以，负数不可以
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	printf("%d", count);
//	return 0;
//}

//HJ21-简单密码


//int main()
//{
//	char  const str1[100]= "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//	char  const str2[100]= "bcdefghijklmnopqrstuvwxyza22233344455566677778889999";
//	int len = strlen(str1);
//
//	char a = '\0';
//	while (scanf("%c",&a ) != EOF)
//	{
//		for (int i = 0; i < len; i++)
//		{
//			if (a == str1[i])
//			{
//				a = str2[i];
//				break;
//			}
//		}
//		printf("%c", a);
//	}
//	return 0;
//}

//HJ22-汽水瓶

//解法1：
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		int k = 0;
//		if (n == 0 || n == 1)
//		{
//			continue;
//		}
//		while (n>=3)
//		{
//			k += n / 3;
//			n = n / 3 + n % 3;
//		}
//		if (n == 2)
//		{
//			k++;
//		}
//		printf("%d\n", k);
//	}
//	return 0;
//}
//解法2：
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n == 0 || n == 1)
//			continue;
//		printf("%d\n", n / 2);
//	}
//	return 0;
//}

//HJ23-删除字符串中出现次数最少的字符

//int main()
//{
//	char str[22] = { 0 };
//	
//	while (scanf("%s", str) != EOF)
//	{
//		char flag[26] = { 0 };
//		int min = 20;
//		int len = strlen(str);
//		//1.统计字符出现的次数
//		for (int i = 0; i<len; i++ )
//		{
//				flag[str[i] - 'a']++;
//		}
//		//2.找出字符出现的最小次数
//		for (int i = 0; i < 26; i++)
//		{
//			if (flag[i] && flag[i] < min)//min已经被改变成最小数
//				min = flag[i];
//		}
//		//3.输出大于最小次数的字符
//		for (int i = 0; i < len; i++)
//		{
//			if (flag[str[i] - 'a'] > min)
//				printf("%c", str[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}