#define _CRT_SECURE_NO_WARNINGS 1

//写一个代码判断一个数是否等于2的n次方
//2的n次方的数字中，其中只有一个1

#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("Enter a number:");
//	scanf("%d", &n);
//	if ((n & (n - 1)) == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//		printf("No\n");
//	return 0;
//}

//二进制不同位的个数

int NumberOf1(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n &= (n - 1);
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	//printf("Enter two numbers:");
	scanf("%d %d", &m, &n);

	int ret = m ^ n;//m^n:m异或n，相同为0，相异为1
	int count=NumberOf1(ret);//求一个数的二进制中有几个1
	printf("%d\n", count);

	/*int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);*/
	return 0;
}