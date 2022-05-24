#define _CRT_SECURE_NO_WARNINGS 1
//写一个猜数字游戏
//1.自动生成一个1-100之间的随机数
//2.猜数字
//  a.如果猜对，那么恭喜你！并退出游戏
//  b.如果猜错，会提示猜大或者猜小，直到猜对为止
//3.游戏可以一直玩，除非选择退出
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void menu() {
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.quit  *****\n");
	printf("********************\n");
}
void guess() {
	//猜字游戏的实现
	//1.生成一个随机数
	//rand 函数返回一个0-32767之间的随机数
	int a = rand()%100+1;//%100的余数是0-99，然后+1，范围是1-100.
	//printf("%d\n", a);

	//2.猜数字
	int guess = 0;
	while (1) {
		printf("请给出一个数字：");
		scanf("%d", &guess);
		if (guess > a) {
			printf("不好意思，您猜大了\n");
		}
		else if( guess< a) {
				printf("不好意思，您猜小了\n");
			}
		else{
			printf("恭喜您！猜对了！\n");
			break;
		}
	}
}
int main() {

	int input = 0;
	srand((unsigned int)time(NULL));//只生成一个随机数

	do {
		
		menu();
		printf("请选择开始:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			guess();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
		return 0;
}