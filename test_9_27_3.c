#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//�ص�����������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��
//  �����������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�������
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õ�
//���ڶԸ��¼�������������Ӧ��

//��ʾһ��qsort������ʹ��

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����˳��
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//
//	bubble_sort(arr, sz);
//
//	print_arr(arr, sz);
//	return 0;
//}


//�⺯��qsort
//�������ݡ��ַ������ݡ��ṹ�����ݶ����Խ��п�������
//void qsort(void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//           size_t num,//����������Ԫ�صĸ���
//           size_t size,//����������һ��Ԫ�صĴ�С����λ���ֽ�
//           int (*compar)(const void*, const void*)//�������Ƚϴ����������е�2��Ԫ�ش�С�ĺ���
//           );

#include<stdlib.h>
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int  comp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void test1()
//{
//	//�������ݵ�����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), comp_int);
//	print_arr(arr, sz);
//}

struct Stu
{
	char name[20];
	int age;
};

//int sort_age(const void* e1,const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
int sort_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2()
{
	//�ṹ�����ݵ�����
	struct Stu s[3] = { {"zhangsan",30},{"lisi",34},{"wangwu",20}};
	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	//qsort(s, sz, sizeof(s[0]), sort_age);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_name);
}
int main()
{
	//test1();
	test2();
	return 0;
}