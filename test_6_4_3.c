#define _CRT_SECURE_NO_WARNINGS 1

//��������������������������

#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;
	printf("%d %d\n", m, n);
	return 0;
}