#define _CRT_SECURE_NO_WARNINGS 1
//题目描述
//编写代码，演示多个字符从两端移动，向中间汇聚
//Welcome to The Hello World!
//***************************
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main() {
	char ch1[] = { "Welcome to The Hello World!" };
	char ch2[] = "***************************";

	int left = 0;
	int right = strlen(ch1) - 1;
while(left<=right){

	ch2[left] = ch1[left];
	ch2[right] = ch1[right];
	
	printf("%s\n", ch2);
	Sleep(1000);//睡眠1秒
	system("cls");//清屏语句
	left++;
	right--;
}
printf("%s\n", ch2);

	return 0;
}