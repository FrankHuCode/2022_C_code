#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n=0;
	int i=0 ;
	int fac = 1;
	printf("请输入一个整数:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		fac *= i;
	}
	printf("%d\n", fac);
	return 0;
}