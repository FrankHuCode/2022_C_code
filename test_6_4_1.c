#define _CRT_SECURE_NO_WARNINGS 1

//дһ�������ж�һ�����Ƿ����2��n�η�
//2��n�η��������У�����ֻ��һ��1

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

//�����Ʋ�ͬλ�ĸ���

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

	int ret = m ^ n;//m^n:m���n����ͬΪ0������Ϊ1
	int count=NumberOf1(ret);//��һ�����Ķ��������м���1
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