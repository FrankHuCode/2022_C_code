#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<math.h>


//ָ�����
//һ��ָ�봫��
//void print(int* ptr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p=arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p,sz);
//	return 0;
//}
//������������һ�֣��Լ��������ƴ��Σ��ڶ��֣����˸������Σ��Լ�������øò���


//����ָ�봫��

//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ�룬�������һ��ָ������ĵ�ַ
//
//	//test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//
//	//int* arr[10] = { 0 };
//	//test(arr);//�����һ��ָ�������
//
//	printf("%d\n", a);
//
//	return 0;
//}

//����ָ�룺ָ������ָ�룬��ź�����ַ��ָ�룡
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//
//	//����ָ�� -��ź�����ַ��ָ��
//	//&������ -ȡ�����������Ǻ����ĵ�ַ
//
//	int (*pf)(int, int) = &Add;//pf -��һ������ָ�����
//
//	printf("%p\n", &Add);//������ != &������
//	printf("%p\n", Add);// ������ == &������
//
//	return 0;
//}


//����1��
//(*(void(*)())0)();
//����0��ַ���ĺ���
//�ú����޲Σ���������Ϊvoid
//1.  void(*)() -����ָ������
//2. ��void(*)()��0 - ��0����ǿ������ת����������Ϊһ��������ַ
//3.  *��void(*)()��0 -��0��ַ�����˽����ò���
//4.  (*(void(*)())0)(); -����0��ַ���ĺ���

//��C������ȱ�ݡ�


//����2��
//void(*signal(int,void(*)(int)))(int);
//void(*)(int)  signal(int,void(*)(int));//�﷨��֧��
// 
//typedef -�����ͽ����ض���
//typedef void(*pfun_t)(int)--void(*)(int)  pfun_t;��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//���磺typedef unsinged int uint;


// typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
// pfun_t signal(int,pfun_t);
//�ȼ���
// void(*signal(int, void(*)(int)))(int);
// 
//1. signal��()�Ƚ�ϣ�˵��signal�Ǻ�����
//2. signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ��
// �ú���ָ�룬ָ��һ������Ϊint,����������void�ĺ���
//3. signal�����ķ�������Ҳ��һ������ָ��
// �ú���ָ�룬Ҳ��ָ��һ������Ϊint,����������void�ĺ���
//���: signal ��һ������������


//����ָ������--- ��ź���ָ�������

//����ָ�� int*
//����ָ������ int* arr[5];

//������--�������ͱ����ļӡ������ˡ���


void menu()
{
	printf("************************\n");
	printf("**** 1.Add    2.Sub ****\n");
	printf("**** 3.Mul    4.Div ****\n");
	printf("****     0.exit     ****\n");
	printf("************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	do {
		menu();
		//pfArr�Ǻ���ָ������
		//ת�Ʊ� ��C��ָ�롷
		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
		int a = 0;
		int b = 0;
		int res = 0;

		printf("��ѡ�����ģʽ��");
		scanf("%d", &input);

		if (input >= 1 && input <= 5)
		{
			printf("������������������");
			scanf("%d %d", &a, &b);

			res = (pfArr[input])(a, b);
			printf("%d\n", res);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else
		{
			printf("�����������ѡ��\n");
		}

	} while (input);
	return 0;
}