#define _CRT_SECURE_NO_WARNINGS 1

//�����ַ������е��ã�����㲻���е��á����磺I like Beijing.���ú��Ϊ��Beijing.like I

#include<stdio.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')//���õ�������
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	printf("%d\n", strlen(arr));
	//printf("%d\n", sizeof(arr));
	return 0;
}