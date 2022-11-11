#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>

void RverseWorlds(char* s,int m,int n)
{
	assert(s != NULL);
	int len = sizeof(s) / sizeof(s[0]);
	int left = 0;
	int right = len - 1;
	while()
	int i = 0;
}
int main()
{
	char s[] = "the sky is bule";
	printf("%d\n", sizeof(s));
	printf("%d\n", strlen(s));
	printf("%d\n", (sizeof(s) / sizeof(s[0])));
	RverseWorlds(s,0,strlen(s));
	printf("%s\n", s);
	return 0;
}