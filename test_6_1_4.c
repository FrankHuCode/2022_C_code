#define _CRT_SECURE_NO_WARNINGS 1

//�������n�Ķ����Ʋ������м���1
#include<stdio.h>

//int NumberOf1(unsigned int n) //unsigned �޷���
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
int NumberOf1(int n)
{
	/*int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}*/
	int count = 0;
	while (n)
	{
		n &= (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n=-127;
	int ret = NumberOf1(n);
	printf("ret=%d\n", ret);
	return 0;
}