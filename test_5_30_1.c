#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0,a = 0, b = 2, c = 3, d = 4;
//	//i=a++||++b||d++;逻辑或左真后面不计算
//	i = a++ && ++b && d++;//逻辑与左假后面不计算
//	printf("%d %d %d %d %d\n", a, b, c, d,i);
//	return 0;
//}

//有问题的代码，在不同编译环境产生不同结果
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();//static:2->3->4;2-3*4或者4-2*3
	printf("%d\n", answer);
	return 0;
}