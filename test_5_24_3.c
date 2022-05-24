#define _CRT_SECURE_NO_WARNINGS 1
//¼ÆËã1£¡+2£¡+3£¡+4£¡+5!+...+10!+...+(n-1)!+n!¡£
#include<stdio.h>
int main() {
	int i = 0;
	int n = 0;
	int fac = 1;
	long sum = 0;
	printf("please enter a integer number:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		fac *= i;
		sum += fac;
	}
	printf("sum=%d\n", sum);
	return 0;
}