#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//����һ������ָ�룬ָ��ĺ���������int�ββ��ҷ���һ������ָ�룬���ص�ָ��ָ��һ����һ��int�β�
//�ҷ���int�ĺ���
//int(*  (*F)(int,int)  )(int)
//�����
//��Ŀ�����Ͼ���
//���ݣ���һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ�����
//����ĳ�������Ƿ����

int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (arr[x][y]<k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 2,3,4,5,6,7,8,9,10 };
	int x = 3;
	int y = 3;
	//&x,&y
	//1.�������
	//2.���ز���ֵ
	int k = 7;
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±���%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}