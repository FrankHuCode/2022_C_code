#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//搜索插入位置
//
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，
//返回它将会被按顺序插入的位置。
//
//请必须使用时间复杂度为 O(log n) 的算法。
//
//作者：力扣(LeetCode)
//链接：https://leetcode.cn/leetbook/read/array-and-string/cxqdh/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


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
//	printf("请输入数组中元素的个数：");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int target = 0;
//	printf("请输入目标值：");
//	scanf("%d", &target);
//	int ret=SearchInsert(arr, n, target);
//	printf("%d\n", ret);
//	return 0;
//}


//合并区间
//
//以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。
// 请你合并所有重叠的区间，并返回 一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间 。
//
//作者：力扣(LeetCode)
//链接：https://leetcode.cn/leetbook/read/array-and-string/c5tv3/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

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
//                //合并
//                int  maxEnd = fmax(preEnd, newVat[i].end);
//                returnInteval[*returnSize - 1][1] = maxEnd;
//            }
//            else
//            {
//                //没有重合的
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

// 11/28再战区间合并
int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes) {

    int** result = (int**)malloc(sizeof(int*) * intervalsSize);//按照最大的区间分配
    int cnt = 0;

    qsort(intervals, intervalsSize, sizeof(int*), MyCmp);

    int start = intervals[0][0];
    int end = intervals[0][1];

    for (int i = 1; i < intervalsSize; i++) {
        if (intervals[i][0] <= end) {
            // 如果后一个区间和上个区间有重叠，则刷新合并区间的结束坐标
            end = fmax(end, intervals[i][1]);
        }
        else {
            int* tmp = (int*)malloc(sizeof(int) * 2);
            tmp[0] = start;
            tmp[1] = end;
            result[cnt++] = tmp;
            // 刷新新的区间的起始和结束坐标
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
