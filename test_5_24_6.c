#define _CRT_SECURE_NO_WARNINGS 1
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//����������123456
#include<string.h>
#include<stdio.h>
int main() {
	int i;
	char password[20] = { 0 };
	for (i = 0; i < 3;i++) {
		printf("����������:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			printf("��¼�ɹ�");
			break;
		}
	}
	if (i == 3) {
		printf("�������볬���Σ��˳�����");
	}
	return 0;
}