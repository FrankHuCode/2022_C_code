#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//���ż���

//HJ7 ȡ����ֵ
//int main()
//{
//	float f = 0;
//	scanf("%f",& f);
//	int i = (int)(f + 0.5);
//	printf("%d\n", i);
//	return 0;
//}

//HJ9 ��ȡ���ظ�������
//int main()
//{
//	int n = 0;
//	int map[10] = { 0 };
//	scanf("%d", &n);
//	switch (n % 10)
//	{
//	case 0:
//		break;
//	default:
//	{
//		while ((n % 10) != 0)
//		{
//			int i = n % 10;
//			if (map[i] == 0)
//			{
//				map[i] = i;
//				printf("%d", i);
//			}
//			n /= 10;
//		}
//	}
//	break;
//	}
//}


//HJ46 ��ȡ�ַ���
//int main()
//{
//	int k = 0;
//	char str1[1000] = { 0 };
//	char str2[1000] = { 0 };
//	gets(str1);
//	scanf("%d", &k);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		str2[i] = str1[i];
//	}
//	puts(str2);
//	return 0;
//}


//HJ58 ����n�����������������С��k��
//int cmp(const int* a, const int* b)
//{
//	return ((*(int*)a) - (*(int*)b));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int arr[1000] = { 0 };
//	scanf("%d %d", &n, &k);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr,n,sizeof(int),cmp);
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}
	

//HJ101 ������������������ʶ������Ԫ�ذ�����������������
int cmp(const int* a, const int* b)
{
	return ((*(int*)a) - (*(int*)b));
}
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), cmp);
	int num = 0;
	scanf("%d", &num);
	switch (num)
	{
	case 0:
		for (int i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
		}
		break;
	case 1:
		for (int i = n - 1; i >= 0; i--)
		{
			printf("%d ", arr[i]);
		}
		break;
	default:
		break;
	}

	return 0;
}