#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>

//��ϰ
// 
//����
//�ַ���
//���ݽṹ

//5.�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//void string_left_rotate(char* str, int k)
//{
//	int n = strlen(str);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char temp = *str;//1.��A����temp
//		//2.����n-1���ַ���ǰ�ƶ�
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.��temp�е�A�����ַ���ĩβ
//		*(str + n - 1) = temp;
//	}
//}
//int main()
//{
//	char arr[10] = { "ABCDEF" };
//	int k = 4;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

//������ת��
//1.�������  A B->B A
//2.�ұ�����  C D E F->F E D C
//3.��������  B A F E D C->C D E F A B

//


void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;

	}
}
void string_left_rotate(char* ptr, int k)
{
	assert(ptr);
	int n = strlen(ptr);
	reverse(ptr,ptr+k-1);//�������
	reverse(ptr+k,ptr+n-1);//�ұ�����
	reverse(ptr,ptr+n-1);//��������

}
int main()
{

	char arr[10] = { "ABCDEF" };
	int k = 4;
	string_left_rotate(arr, k);
	printf("%s\n", arr);

	return 0;
}