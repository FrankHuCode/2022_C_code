#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//�ڴ涯̬�洢

//malloc
//realloc
//free
//calloc

//0.  malloc
//void* malloc(size_t size);

//int main()
//{
//	//���迪��10�����͵Ŀռ�--10*sizeof(int)
//	int arr[10] = { 0 };//ջ��
//	//��̬�ڴ濪�ٵ�
//	int* p = (int*)malloc(10* sizeof(int));//malloc��������void* ָ��
//
//	//ʹ����Щ�ռ��ʱ��
//
//	if (p == NULL)//���ٿռ�ʧ��
//	{
//		perror("main");//main:xxxxxxxxx
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i]==>*(p+i)
//	}
//	free(p);
//	p = NULL;//�Լ�������ΪNULL
//
//	return 0;
//}

//1.   void* free(void* str);
//free����ֻ���ͷŶ����Ͽ��ٵĿռ䣬�����ͷ�ջ���Ͽ��ٵĿռ�

//malloc free �ɶԳ���

//2.  calloc
//void* calloc(size_t num, size_t size);

//int main()
//{
//	//int* p = (int*)malloc(40);//��ʼ�����
//	int* p = (int*)calloc(10, 4);//��ʼ��Ϊ0
//	if (p == NULL)
//	{
//		perror("a");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. realloc
//void* realloc(void* ptr, size_t size);
//int main()
//{
//	//int* p = (int*)malloc(40);//��ʼ�����
//	int* p = (int*)calloc(10, 4);//��ʼ��Ϊ0
//	if (p == NULL)
//	{
//		perror("a");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=5;
//	}
//
//	int* ptr=realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//���﹦������malloc������Ҳ���ڶ�������40�ֽڿռ�
//	return 0;
//}
