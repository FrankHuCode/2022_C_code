#define _CRT_SECURE_NO_WARNINGS 1
//编写代码实现，模拟用户登录情景，并且只能登录三次。
//假设密码是123456
#include<string.h>
#include<stdio.h>
int main() {
	int i;
	char password[20] = { 0 };
	for (i = 0; i < 3;i++) {
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			printf("登录成功");
			break;
		}
	}
	if (i == 3) {
		printf("输入密码超三次，退出程序");
	}
	return 0;
}