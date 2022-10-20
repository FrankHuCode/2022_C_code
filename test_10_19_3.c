#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��������λ��
//
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У�
//���������ᱻ��˳������λ�á�
//
//�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��
//
//���ߣ�����(LeetCode)
//���ӣ�https://leetcode.cn/leetbook/read/array-and-string/cxqdh/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������


//int SearchInsert(int* arr, int n, int a)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i]>=a)
//		{
//			return i;
//		}
//	}
//	return n;
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;	
//	printf("������������Ԫ�صĸ�����");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int target = 0;
//	printf("������Ŀ��ֵ��");
//	scanf("%d", &target);
//	int ret=SearchInsert(arr, n, target);
//	printf("%d\n", ret);
//	return 0;
//}


//�ϲ�����
//
//������ intervals ��ʾ���ɸ�����ļ��ϣ����е�������Ϊ intervals[i] = [starti, endi] ��
// ����ϲ������ص������䣬������ һ�����ص����������飬��������ǡ�ø��������е��������� ��
//
//���ߣ�����(LeetCode)
//���ӣ�https://leetcode.cn/leetbook/read/array-and-string/c5tv3/
//��Դ�����ۣ�LeetCode��
//����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
//struct vat
//{
//    int start;
//    int end;
//};
//
//int compare(struct vat* a, struct vat* b)
//{
//    return a->start - b->start;
//}
//
//
//int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes)
//{
//    struct vat newVat[intervalsSize] = {};
//    for (int i = 0; i < intervalsSize; i++)
//    {
//        newVat[i].start = intervals[i][0];
//        newVat[i].end = intervals[i][1];
//    }
//    qsort(newVat, intervalsSize, sizeof(struct vat), compare);
//
//
//    int** returnInteval = (int**)malloc(sizeof(int*) * intervalsSize);
//    *returnColumnSizes = (int*)malloc(sizeof(int) * intervalsSize);
//    *returnSize = 0;
//    for (int i = 0; i < intervalsSize; i++)
//    {
//        if (*returnSize)
//        {
//            int preEnd = returnInteval[*returnSize - 1][1];
//            if (newVat[i].start <= preEnd)
//            {
//                //�ϲ�
//                int  maxEnd = fmax(preEnd, newVat[i].end);
//                returnInteval[*returnSize - 1][1] = maxEnd;
//            }
//            else
//            {
//                //û���غϵ�
//                int newRow = *returnSize;
//                returnInteval[newRow] = (int*)malloc(sizeof(int) * 2);
//                returnInteval[newRow][0] = newVat[i].start;
//                returnInteval[newRow][1] = newVat[i].end;
//                (*returnColumnSizes)[newRow] = 2;
//                *returnSize = *returnSize + 1;
//            }
//        }
//        else
//        {
//            int newRow = *returnSize;
//            returnInteval[newRow] = (int*)malloc(sizeof(int) * 2);
//            returnInteval[newRow][0] = newVat[i].start;
//            returnInteval[newRow][1] = newVat[i].end;
//            (*returnColumnSizes)[newRow] = 2;
//            *returnSize = *returnSize + 1;
//
//        }
//    }
//    return returnInteval;
//}


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */


int MyCmp(const void* a, const void* b)
{
    int* left = *(int**)a;
    int* right = *(int**)b;
    return left[0] > right[0] ? 1 : -1;
}

// 11/28��ս����ϲ�
int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes) {

    int** result = (int**)malloc(sizeof(int*) * intervalsSize);//���������������
    int cnt = 0;

    qsort(intervals, intervalsSize, sizeof(int*), MyCmp);

    int start = intervals[0][0];
    int end = intervals[0][1];

    for (int i = 1; i < intervalsSize; i++) {
        if (intervals[i][0] <= end) {
            // �����һ��������ϸ��������ص�����ˢ�ºϲ�����Ľ�������
            end = fmax(end, intervals[i][1]);
        }
        else {
            int* tmp = (int*)malloc(sizeof(int) * 2);
            tmp[0] = start;
            tmp[1] = end;
            result[cnt++] = tmp;
            // ˢ���µ��������ʼ�ͽ�������
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }

    int* tmp = (int*)malloc(sizeof(int) * 2);
    tmp[0] = start;
    tmp[1] = end;
    result[cnt++] = tmp;


    *returnSize = cnt;
    *returnColumnSizes = (int*)malloc(sizeof(int) * cnt);
    for (int i = 0; i < cnt; i++) {
        (*returnColumnSizes)[i] = 2;
    }

    return result;
}
