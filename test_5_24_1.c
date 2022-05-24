#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
int main() {
	int i = 1;
	do {
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	} while (i <= 10);
	//breakÌøµ½ÕâÀï
	printf("hehe");
	return 0;
}