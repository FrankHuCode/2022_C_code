#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//����⣺��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
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
//����⣺дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ�����͵�һά����
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
//����⣺���0-100000֮���ˮ�ɻ��������
//ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
//�磺153=1^3+5^3+3^3.��153����ˮ�ɻ�����
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//	//�ж�һ��nλ���Ƿ�ˮ�ɻ���
//	//1.��һ����λ��n
//		int n = 1;
//		int temp = i;
//		while (temp / 10)
//		{
//			n++;
//			temp = temp / 10;
//		}
//	//2.��������ĸ�λ��n�η�֮��sum
//		int sum = 0;
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);
//			temp = temp / 10;
//		}
//	//3.�ж�sum�Ƿ���ڸ�������
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

//����⣺дһ�����������ַ���������
#include<assert.h>
#include<string.h>
void reverse(char* str)
{
	assert(str != NULL);//���ָ���Ƿ���Ч
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