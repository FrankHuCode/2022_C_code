#define _CRT_SECURE_NO_WARNINGS 1
//дһ����������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//  a.����¶ԣ���ô��ϲ�㣡���˳���Ϸ
//  b.����´�����ʾ�´���߲�С��ֱ���¶�Ϊֹ
//3.��Ϸ����һֱ�棬����ѡ���˳�
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
	//������Ϸ��ʵ��
	//1.����һ�������
	//rand ��������һ��0-32767֮��������
	int a = rand()%100+1;//%100��������0-99��Ȼ��+1����Χ��1-100.
	//printf("%d\n", a);

	//2.������
	int guess = 0;
	while (1) {
		printf("�����һ�����֣�");
		scanf("%d", &guess);
		if (guess > a) {
			printf("������˼�����´���\n");
		}
		else if( guess< a) {
				printf("������˼������С��\n");
			}
		else{
			printf("��ϲ�����¶��ˣ�\n");
			break;
		}
	}
}
int main() {

	int input = 0;
	srand((unsigned int)time(NULL));//ֻ����һ�������

	do {
		
		menu();
		printf("��ѡ��ʼ:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			guess();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
		return 0;
}