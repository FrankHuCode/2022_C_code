#define _CRT_SECURE_NO_WARNINGS 1
//��д����ʵ���ַ���������洢
#include<stdio.h>
int my_strlen(char* arr) 
{
	int count = 0;
	while(*arr != '\0'){
		count++;
		arr++;
	}	
	return count;
}
//����ʵ��
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while(left<right)
//	{
//		char tmp = 0;
//		tmp=arr[left];
//		arr[left] = arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//�ݹ�ʵ��
void reverse_string(char* str)
{
	char tmp = *str;                  //����1
	int len = my_strlen(str);
	*str = *(str+len-1);               //����2
	*(str+len-1) = '\0';              //����3
	if (my_strlen(str+1)>=2)
	{
		reverse_string(str + 1);//4����
	}
	*(str+len-1) = tmp;               //5����
}
int main()
{
	char arr[] = "abcdef";//'a','b','c','d','e','f','\0'
	reverse_string(arr);//������������arr��Ԫ�صĵ�ַ
	printf("%s\n", arr);//ֻ��ֱ�Ӵ�ӡ���飬����Ҫ����ֵ������void���κ���
	return 0;
}