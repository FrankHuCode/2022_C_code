#define _CRT_SECURE_NO_WARNINGS 1

//交换两个变量，不允许创建变量

#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	m = m ^ n;
	n = m ^ n;//n=(m^n)^n->n=m^n^n=m
	m = m ^ n;//m=(m^n)^m=n
	printf("%d %d\n", m, n);
	return 0;
}
