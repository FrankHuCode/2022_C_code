#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0,a = 0, b = 2, c = 3, d = 4;
//	//i=a++||++b||d++;�߼���������治����
//	i = a++ && ++b && d++;//�߼�����ٺ��治����
//	printf("%d %d %d %d %d\n", a, b, c, d,i);
//	return 0;
//}

//������Ĵ��룬�ڲ�ͬ���뻷��������ͬ���
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();//static:2->3->4;2-3*4����4-2*3
	printf("%d\n", answer);
	return 0;
}