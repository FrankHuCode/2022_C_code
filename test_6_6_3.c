#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//����һ���ַ�����һ������ k ����ȡ�ַ�����ǰk���ַ������ 
//int main()
//{
//    char str1[1000] = { 0 };
//    char str2[1000] = { 0 };
//    int k = 0;
//    gets(str1);
//    scanf("%d", &k);
//    for (int i = 0; i < k; i++)
//    {
//        str2[i] = str1[i];
//    }
//    puts(str2);
//    return 0;
//}


//����n���������ҳ�������С��k�����������������

int cmp(const int* a, const int* b)//int compareMyType(const void*a,const void*b)
{
    if (*(int*)a < *(int*)b)
        return -1;
    else
        return 1;
}
int main()
{
    int n = 0, k = 0;
    int  arr[1000] = { 0 };
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    /*for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }*/
    qsort(arr, n, sizeof(int), cmp);
    //void qsort(void*base,size_t num,size_t size,int((*compare)(const void* ,const void*))
    for (int i = 0; i <k; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}