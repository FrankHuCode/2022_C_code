#define _CRT_SECURE_NO_WARNINGS 1

//第4章 表达式《C语言程序设计-现代方法》
//练习题

#include<stdio.h>

//int main()
//{
//	int i = 8, j = 5;
//	int x = 0;
//	
//	printf("%d %d %d %d \n", i/j,(-i) / j, i /(- j),(-i)/(-j));//3 -3 3 -3
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	printf("Enter a integer number:");
//	scanf("%d", &x);
//	printf("%d %d %d %d\n", 9 - (x - 1) % 10, 10 - x % 10,(9-(x-1))%10,(9-x+1)%10);
//	return 0;
//}

//int main()
//{
//	int i = 7;
//	int j = 8;
//	i *= j + 1;
//	printf("%d %d\n", i, j);//63 8
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = 1;
//	i += j += k;
//	printf("%d %d %d\n", i, j, k);//3 2 1 
//	return 0;
//}

//int main()
//{
//
//	int i = 1;
//	int j = 2;
//	int k = 3;
//	i -= j -= k;
//	printf("%d %d %d\n", i, j, k);//2 -1 3
//	return 0;
//}
//int main()
//{
//	int i = 2;
//	int j = 1;
//	int k = 0;
//	i *= j *= k;
//	printf("%d %d %d\n", i, j, k);//0 0 0
//	return 0;
//}
//int main()
//{
//	int i = 6;
//	int j = 0;
//	j = i += i;
//	printf("%d %d\n", i, j);//12 12
//	int i = 5;
//	int j = 0;
//	j = (i -= 2) + 1;
//	printf("%d %d\n", i, j);//3 4
//	int i = 7;
//	int j = 0;
//	j = 6 + (i = 2.5);
//	printf("%d %d\n", i, j);//2 8
//	int i = 2;
//	int j = 8;
//	j = (i = 6) + (j = 3);
//	printf("%d %d\n", i, j);//6 9
//	return 0;
//}

//4.3节
int main()
{
	//int i = 1;
	//printf("%d\n", i++ - 1);//后缀++、--先使用,后++、--
	//printf("%d\n", i);//0 2

	//int i = 10;
	//int j = 5;
	//printf("%d\n", i++ - ++j);//前缀++、--先++、--，后使用
	//printf("%d %d\n", i, j);//4 11 6

	//int i = 7;
	//int j = 8;
	//printf("%d\n", i++ - --j);
	//printf("%d %d\n", i, j);//0 8 7

	//int i = 3;
	//int j = 4;
	//int k = 5;
	//printf("%d\n", i++ - j++ + --k);
	//printf("%d %d %d\n", i, j, k);//3 4 5 4 

	//int i = 5;
	//int j = ++i * 3 - 2;
	//printf("%d %d", i, j);//6 16

	//int i = 5;
	//int j = 3 - 2 * i++;
	//printf("%d %d", i, j);//6 -7

	//int i = 7;
	//int j = 3 * i-- + 2;
	//printf("%d %d", i, j);//6 23

	//int i = 7;
	//int j = 3 + --i * 2;
	//printf("%d %d", i, j);//6 15

	//优先级和结合性
	//后缀i++、i--				——1 左结合          
	//前缀++i、--i,一元+i、-i	——2 右结合
	//乘法类 * / % \			——3 左结合
	//加法类 x+y x-y			——4 左结合
	//赋值类 = += -= *= /= %=	——5 右结合

	//int i = 2;
	//int j = 0;
	//for (j = 0; j < 5; j++)
	//{
	//	int x = i++;
	//	printf("1=%d\n", x);
	//	int y = ++i;
	//	printf("%d\n", y);//++i与i+=1是完全相同的
	//	int z = i += 1;
	//	printf("%d\n", z);
	//}

	//int i = 1;
	//int j = 2;
	//printf("%d %d %d", i += j,i,j);//3 3 2
	//printf("%d %d %d", i--, i, j);//1 0 2
	//printf("%d %d %d", i * j / i, i, j);//2 1 2
	//printf("%d %d %d", i % ++j, i, j);//1 1 3

	/*int i1 = 0;
	int i2 = 0;
	int i3 = 0;

	printf("Enter a three-digit number:");
	scanf("%1d%1d%1d", &i1,&i2,&i3);
	printf("The reversal is:%d", i3 * 100 + i2 * 10 + i1);
	printf("The reversal is:%d\n", (n % 10) * 100+ ((n / 10)%10)*10+(n/100));*/

	//int n = 0;
	//printf("Enter a nubmer between 0 and 32767:");
	//scanf("%d", &n);

	//int i1 = n % 8;//1953%8=1
	//int i2 = n / 8 % 8;//1953/8%=4
	//int i3 = n / 8 / 8 % 8;//1953/8/8%=6
	//int i4 = n / 8 / 8 / 8 % 8;//1953/8/8/8%8=3
	//int i5 = n / 8 / 8 / 8 / 8 % 8;//1953/8/8/8/8%8=0
	//printf("In octal,your number is:%d%d%d%d%d\n", i5, i4, i3, i2, i1);

	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11,i12,
		first_sum, second_sum, total;
	printf("Enter the first 11 digits of a UPC:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7,
		&i8, &i9, &i10, &i11,&i12);

	first_sum = i2 + i4 + i6 + i8 + i10+i12;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;
	total = 3 * first_sum + second_sum ;

	printf("Check digit:%d", 9 - ((total - 1) % 10));
	return 0;
}