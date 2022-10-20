#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//寻找数组的中心索引
//给你一个整数数组 nums ，请计算数组的 中心下标 。
//
//数组 中心下标 是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。
//
//如果中心下标位于数组最左端，那么左侧数之和视为 0 ，因为在下标的左侧不存在元素。
//这一点对于中心下标位于数组最右端同样适用。
//
//如果数组有多个中心下标，应该返回 最靠近左边 的那一个。如果数组不存在中心下标，返回 - 1 。
//
//作者：力扣(LeetCode)
//链接：https://leetcode.cn/leetbook/read/array-and-string/yf47s/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。



int findMiddleIndex(int num[], int n)
{
	int i = 0;
	int total = 0;
	for (i = 0; i < n; i++)
	{
		total += num[i];
	}
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		if (2 * sum + num[i] == total)
		{
			return i;
		}
		sum += num[i];
	}
	return -1;
}
int main()
{

	int num[100] = { 0 };
	int n = 0;
	printf("请输入元素的个数：");
	scanf("%d\n", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	int ret = findMiddleIndex(num, n);
	printf("%d\n", ret);
	return 0;
}