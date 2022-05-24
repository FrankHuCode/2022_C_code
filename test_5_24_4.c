#define _CRT_SECURE_NO_WARNINGS 1
//在一个有序数组中查找具体的某个数字n。
#include<stdio.h>
int main() {
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int n;
	printf("please enter a integer:");
	scanf("%d", &n);
	for (i = 0; i <= 10; i++) {
		if (arr[i] == n) {
			printf("i=%d\n", i);
			break;
		}
	}*/
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k ;//这是要查找的数字7
	printf("Please enter the integer number to find:");
	scanf("%d", &k);

	int sz = sizeof(arr) /sizeof( arr[0]);//数组的元素个数
	int left = 0;
	int right = sz - 1;
while(left<=right){

	int mid = (left + right) / 2;
	if (arr[mid]< k) {
		left = mid + 1;
	}
	else if (arr[mid] > k) {
		right = mid - 1;
	}
	else {
		printf("Successful!The number is:%d", mid);
		break;
	}
		
}
if (left > right) {
	printf("Sorry!The number is not in the array!");
}

	return 0;
}