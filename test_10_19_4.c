#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//#pragma pack(4)
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct A));//16
//	printf("%d\n", sizeof(struct B));//12
//
//	return 0;
//}

//#pragma pack(4)
//struct tagTest1
//{
//	short a;
//	char d;
//	long b;
//	long c;
//};
//struct tagTest2
//{
//	long b;
//	short c;
//	char d;
//	long a;
//};
//struct tagTest3
//{
//	short c;
//	long b;
//	char d;
//	long a;
//};
//int main()
//{
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d\n", sizeof(stT1), sizeof(stT2), sizeof(stT3));//12 12 16
//	return 0;
//}
//#pragma pack()

//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;//位段1字节--8bit
//	unsigned char Paral : 2;//与上面公用一个字节
//	unsigned char state;//1字节
//	unsigned char avail : 1;//1字节
//}*Env_Alarm_Record;//总共3个字节
//
//int main()
//{
//	int A = 2;
//	int B = 3;
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc
//	(sizeof(struct _Record_Struct) * MAX_SIZE);//3*2+3=9
//
//	int sz = sizeof(struct _Record_Struct) * MAX_SIZE;
//	printf("%d\n", sz);//9
//	return 0;
//}

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x", puc[0], puc[1], puc[2], puc[3]);//02 29 00 00
//
//	return 0;
//}

//union Un
//{
//	short s[7];//2*7=14
//	int n;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}


//int main()
//{
//
//	union
//	{
//		short k;//2
//		char i[2];//2
//	}*s,a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);//大小端 3839
//	return 0;
//}


#include<stdlib.h>
#include<assert.h>

int my_atoi(const char* s)
{
	//assert(s!=NULL);

}
int main()
{

	//1.空指针
	//2.空字符串
	//3.遇到了非数字字符
	//4.超出范围
	const char* p = "1234";
	int ret = my_atoi(p);//atoi函数将一个字符串转换成整数
	printf("%d\n", ret);
	return 0;
}