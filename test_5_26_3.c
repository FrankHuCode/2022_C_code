#define _CRT_SECURE_NO_WARNINGS 1
//�ú����ݹ�ʵ�ֺ�ŵ������
//������ʽ��1��n<=1ʱ��H(n)=1��2��n>1ʱ��H(n)=2*H(n-1)+1����H(n)=2^n-1;
#include<stdio.h>
int H(int n)
{
	int c = 0;
	if ( n<=1)
		c = 1;
	else
		c = 2 * H(n - 1) + 1;
	//c = (2 ^ n )- 1;
	return c;
}
int main()
{
	int n = 0;
	printf("Please enter a natural number:");
	scanf("%d", &n);
	int ret = H(n);
	printf("%d\n", ret);
	return 0;
}