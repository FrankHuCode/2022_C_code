#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>

//�򵥼���

//HJ31-���ʵ���
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp;
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
//	gets(str);
//	int i = 0;
//	char* str_cy = str;
//	while (*str_cy)
//	{
//		if (isalpha(str_cy[i]) == 0)
//				str_cy[i] = ' ';
//		str_cy++;
//	}
//
//	int len = strlen(str);
//	reverse(str, str + len - 1);
//	char* start = str;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end == ' ')
//			start = end + 1;
//		else
//			start = end;
//	}
//	printf("%s\n", str);
//	return 0;
//}

//HJ34-ͼƬ����

//int campare(const void* a,const void* b)
//{
//	return (*(char*)a - *(char*)b);
//}
//int main()
//{
//	char str[1000] = { 0 };
//	gets(str);//��scanf������gets���������ԣ�Ϊʲô��fgets�����Ͳ����أ�
//	int len = strlen(str);
//	qsort(str, len , sizeof(char), campare);
//	printf("%s\n", str);
//	return 0;
//}

//HJ35-���ξ���

//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int count = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			arr[i - j - 1][j] = count;
//			count++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n-i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//HJ37-ͳ��ÿ�������ӵ�����
//��������쳲���������1 1 2 3 5 8 13 21 f(n)=f(n-1)+f(n-2);

//int count(int n)
//{
//	if (n == 0)
//		return 0;
//    else if(n == 1 || n == 2)
//		return 1;
//	else
//		return count(n - 1) + count(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int num = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = count(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//HJ40-ͳ���ַ�

//int main()
//{
//	char str[1002];
//	int letter = 0, space = 0, number = 0, other = 0;
//	while (fgets(str,sizeof(str),stdin))
//	{
//		int len = strlen(str);
//		for (int i = 0; i < len; i++)
//		{
//			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
//				letter++;
//			else if (str[i] == ' ')
//				space++;
//			else if (str[i] >= '0' && str[i] <= '9')
//				number++;
//			else
//				other++;
//		}
//		printf("%d\n%d\n%d\n%d\n", letter, space, number, other);
//	}
//	return 0;
//}

//HJ51-������������е�����k�����

//HJ53-������ǵı���

//int main()
//{
//	int arr[] = { 2,3,2,4 };
//	int n = 0, m = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n <= 2)
//			m = -1;
//		else
//		{
//			n -= 3;
//			n %= 4;
//			m = arr[n];
//		}
//		printf("%d\n", m);
//
//	}
//	return 0;
//}

//HJ54-���ʽ��ֵ


//HJ56-��ȫ������

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		for (int i = 1; i < n; i++)
//		{
//			int sum = 0;
//			for (int j = 1; j < i; j++)
//			{
//				if (i % j == 0)
//					sum += j;
//			}
//			if (sum == i)
//				count++;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}


//HJ60-�������һ��ż����ӽ�����������

//int is_prime(int num)
//{
//	int flag = 1;
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int mid = n / 2;
//		for (int i = mid; i >= 2; i--)
//		{
//			if (is_prime(i) && is_prime(n-i))
//			{
//				printf("%d\n%d\n", i, n - i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

//HJ61-��ƻ��



//HJ62-��������������������1�ĸ���

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		while (n)
//		{
//			n &= (n - 1);
//			count++;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}

//HJ72-��Ǯ��ټ�����

//int main()
//{
//	printf("0 25 75\n");
//	printf("4 18 78\n");
//	printf("8 11 81\n");
//	printf("12 4 84\n");
//
//	return 0;
//}
//HJ73-�������ڵ�����ת��

//int main()
//{
//	int month_days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year, month, day;
//	while (scanf("%d %d %d", &year, &month, &day) != EOF)
//	{
//		int count = 0;
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			month_days[2] = month_days[2] + 1;
//		for (int i = 0; i < month ; i++)
//		{
//			count += month_days[i];
//		}
//		count += day;
//		printf("%d\n", count);
//	}
//	return 0;
//}

//HJ76-��Ƴ�˹����

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		//int cubic = n * n * n;//��ʡ��
//		for (int i = 0; i < n-1; i++)
//		{
//			printf("%d+", n * (n - 1) + 1 + 2 * i);//����Ϊn*(n-1)+1
//		}
//		printf("%d\n",n*n+n-1);//n*(n-1)+1+2(n-1)=n*n+n-1
//	}
//	return 0;
//}
