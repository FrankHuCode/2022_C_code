#define _CRT_SECURE_NO_WARNINGS 1
//��һ�����������в��Ҿ����ĳ������n��
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
	int k ;//����Ҫ���ҵ�����7
	printf("Please enter the integer number to find:");
	scanf("%d", &k);

	int sz = sizeof(arr) /sizeof( arr[0]);//�����Ԫ�ظ���
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