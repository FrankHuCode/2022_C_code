#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//  sizeof(������)--��������ʾ��������--���������������Ĵ�С
//  &������--��������ʾ�������� --ȡ��������������ĵ�ַ
//  ����֮�⣬���е����������Ǳ�ʾ������׸�Ԫ�صĵ�ַ

int main()
{
	//int a[] = { 1,2,3,4 };

	//printf("%d\n", sizeof(a));//16 ��λ���ֽ�
	//printf("%d\n", sizeof(a+0));//32λ4�ֽڣ�64λ8�ֽ� a+0��һ��Ԫ�صĵ�ַ��������ǵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(*a));//4�ֽ�  *a������ĵ�һ��Ԫ�أ�������ǵ�һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(a+1));//32λ4�ֽڣ�64λ8�ֽ�  a+1�ڶ���Ԫ�صĵ�ַ��������ǵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(a[1]));//4�ֽ� a[1]������ĵڶ���Ԫ�أ�������ǵڶ���Ԫ�صĴ�С

	//printf("%d\n", sizeof(&a));//4/8- &aȡ������������ĵ�ַ����Ҳ�ǵ�ַ��sizeof(&a)�������һ����ַ�Ĵ�С
	//printf("%d\n", sizeof(*&a));//16 *&a -�����������Ĵ�С
	//printf("%d\n", sizeof(&a+1));//4/8 &a+1 ȡ�����������Ŀռ�ĵ�ַ���������һ����ַ�Ĵ�С
	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0] ȡ���ǵ�һ��Ԫ�صĵ�ַ���������һ����ַ�Ĵ�С
	//printf("%d\n", sizeof(&a[0]+1));//4/8 &a[0]+1 ȡ���ǵڶ���Ԫ�صĵ�ַ���������һ����ַ�Ĵ�С

	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4/8 �ַ��ĵ�ַҲ�ǵ�ַ����һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*arr));//1 ��һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));//1 �ڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));//4/8 ȡ�����ַ�����ĵ�ַ��Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&arr+1));//4/8 ȡ����arr����Ŀռ�ĵ�ַ��Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&arr[0]+1));//4/8ȡ�ڶ���Ԫ�صĵ�ַ��Ҳ�ǵ�ַ

	//strlen����Ԫ�ؿ�ʼѰ��\0�������ַ����ĳ���
	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr+0));//���ֵ
	//printf("%d\n", strlen(*arr));//err  'a'=97
	//printf("%d\n", strlen(arr[1]));//err  'b'=98
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ-1

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr+0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8   char(*)[7]
	//printf("%d\n", sizeof(&arr+1));//4/8
	//printf("%d\n", sizeof(&arr[0]+1));//4/8

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr+1));//���ֵ
	//printf("%d\n", strlen(&arr[0]+1));//5

	char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8 ����ָ������ĵ�ַ
	//printf("%d\n", sizeof(p+1));//4/8 p+1�ǵڶ�Ԫ��b�ĵ�ַ
	//printf("%d\n", sizeof(*p));//1 *p ��һ��Ԫ��a�Ĵ�С
	//printf("%d\n", sizeof(p[0]));//1 p[0]->*(p+0)��һ��Ԫ��a�Ĵ�С
	//printf("%d\n", sizeof(&p));//4/8 ȡָ��p�ĵ�ַ��Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&p+1));//4/8 ȡָ��p����һ����ַ
	//printf("%d\n", sizeof(&p[0]+1));//4/8 &p[0]+1ȡ��һ��Ԫ��a�ĵ�ַ+1,����b�ĵ�ַ

	printf("%d\n", strlen(p));//��Ԫ��a��ʼ��--6
	printf("%d\n", strlen(p+1));//��Ԫ��b��ʼ��--5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//���ַ
	printf("%d\n", strlen(&p+1));//���ֵ
	printf("%d\n", strlen(&p[0]+1));//��Ԫ��b��ʼ��--5


	return 0;
}

 