#define _CRT_SECURE_NO_WARNINGS 1

//第三章 格式化输入/输出

//1.printf函数 
//1.1转换说明 格式：%m.pX 或者%-m.pX。如果省略p，那么连同小数点也一起省略
//最小栏宽（minimum field width）m指定了要显示的最少字符数量
//精度（precision）p 它依赖于转换指定符（conversion specifier）X的选择
//X的转换指定符有:%d、%e、%f、%g、

/*Prints intand float values in various format*/
//#include<stdio.h>
//int main()
//{
//	int i;
//	float x;
//
//	i = 40;
//	x = 839.21f;
//
//	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
//	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
//
//
//	return 0;
//}

//1.2转义序列
//警报符：\a
//回退符：\b
//换行符：\n
//水平制表符：\t
//双引号符：\"
//字符串中：\\ ,表示字符\（类似的：%%，表示字符%）


//2.scanf函数
//%i和%d之间的区别：在printf函数中，二者没有区别，在scanf函数中，%d只能与十进制形式的整数匹配，
//%i则可以匹配八进制：056。十六进制：0x或者0X（如0x56）


//练习题
//1.下面的printf函数调用产生的输出分别是什么？
// （a）printf("%6d,%4d",86,1040);
// （b）printf("%12.5e",30.253);
// （c）printf("%.4f",83.162);
// （d）printf("%-6.2g",.0000009979);


//#include<stdio.h>
//int main()
//{
//	printf("%6.3d,%4d", 86, 1040);
//	printf("\n");
//
//	printf("%12.5e",30.253);
//	printf("\n");
//
//	printf("%.4f",83.162);
//	printf("\n");
//
//	printf("%-6.2g",.0000009979);
//	printf("\n");
//
//	
//	return 0;
//}

//2.编写printf函数调用，以下列格式显示float型变量x。
//(a)指数表示形式，栏宽8，左对齐，小数点后保留1位数字。
//(b)指数表示形式，栏宽10，右对齐，小数点后保留6位数字。
//(c)定点十进制表示形式，栏宽8，左对齐，小数点后保留3位数字。
//(d)定点十进制表示形式，栏宽6，右对齐，小数点后无数字。

//习题解析：
//printf函数的转换说明需要匹配不同的数据类型，整数类型通常使用%d，浮点类型数据的转换说明可以使用%e、%f、%g三种，
//分别表示指数形式、定点十进制、自动选择格式。printf函数显示数据默认右对齐，如果需要左对齐，可以在转换说明中添加
//"-"表示

//#include<stdio.h>
//int main()
//{
//	float x = 1234.56f;
//
//	printf("%-8.1e",x);
//	printf("\n");
//
//	printf("%10.6e", x);
//	printf("\n");
//
//	printf("%-8.3f", x);
//	printf("\n");
//
//	printf("%6.f", x);
//	printf("\n");
//
//	return 0;
//}


//3.说明下列没对scanf格式串是否等价？如果不等价，请指出它们的差异。
//（a）"%d"与" %d"。等价
//（b）"%d-%d-%d"与"%d -%d -%d"。不等价，尽量使用后一种方式，提高输入容错性
//（c）"%f"与"%f "。等价
//（d）"%f,%f"与"%f, %f"。等价


//4.假设scanf函数调用的格式如下：10.3 5 6
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	float x;
//
//	scanf("%d%f%d", &i,&x,&j);
//	printf("%d|%f|%d\n", i, x, j);//i=10,x=0.300000,j=5
//
//	return 0;
//}

//5.假设scanf函数调用的格式如下：12.3 45.6 789

//#include<stdio.h>
//int main()
//{
//	int i;
//	float x, y;
//
//	scanf("%f%d%f", &x, &i, &y);
//	printf("x=%f|i=%d|y=%f", x, i, y);//x=12.300000,i=45,y=0.600000
//
//	return 0;
//}

//6.指出如何修改3.2节中的addfrac.c程序，使用户可以输入在字符/的前后都有空格的分数。
//addfrac.c
/*Adds two fractions*/
//#include<stdio.h>
//int main()
//{
//	int num1, denom1, num2, denom2, result_num, result_denom;
//
//	printf("Enter first fraction: ");
//	scanf("%d /%d", &num1, &denom1);
//
//	printf("Enter second fraction: ");
//	scanf("%d / %d", &num2, &denom2);
//
//	result_num = num1 * denom2 + num2 * denom1;
//	result_denom = denom1 * denom2;
//	printf("The sum is %d/%d\n", result_num, result_denom);
//
//	return 0;
//}


//编程题
//1.编写一个程序，以月/日/年（即mm/dd/yy）的格式接收用户输入的日期信息，并以年月日（即yyyymmdd）的格式将其显示出来
//
//Enter a date (mm/dd/yyyy):2/17/2011
//You entered the date 20110217

//#include<stdio.h>
//int main()
//{
//	int mm, dd, yy;
//
//	printf("Enter a date (mm/dd/yyyy):");
//	scanf("%d/%d/%d", &mm, &dd, &yy);
//
//	printf("You entered the date %4d%.2d%02d", yy, mm, dd);
//
//	return 0;
//}

//2.编写一个程序，对用户输入的产品信息进行格式化。程序会话应类似下面这样：
//
//Enter item number:583
//Enter unit price:13.5
//Enter purchase date (mm/dd/yyyy):10/24/2010
//Item        Unit          Purchase
//            Price         Date
//583         13.5          10/24/2010

//#include<stdio.h>
//int main()
//{
//	int num, mm, dd, yy;
//	float unit_price;
//
//	printf("Enter item number: ");
//	scanf("%d", &num);
//
//	printf("Enter unit price: ");
//	scanf("%f", &unit_price);
//
//	printf("Enter purchase date (mm/dd/yyyy): ");
//	scanf("%d/%d/%d", &mm, &dd, &yy);
//
//	printf("Item\t\tUnit\t\tPurchase\n");
//	printf("\t\tPrice\t\tDate\n");
//	printf("%-d\t\t$%7.2f\t%-02d/%-02d/%-04d\n", num, unit_price, mm, dd, yy);
//
//	return 0;
//}

//3.图书用国际标准书号（ISBN）进行标识。2007年1月1日之后分配的ISBN包含13位数字（旧的ISBN使用10位数字），分为5组
//  如978-0-393-97950-3。第一组（GS1前缀）目前为978或979.第二组（组标识）指明语言或者原出版国即地区（如0和1用于
//  讲英语的国家）。第三组（出版商编号）表示出版商（393是W.W.Norton出版社的编号）。第四组（产品编号）是由出版商
//  分配的用于识别具体哪一本书的编号（97950）。ISBN的末尾是一个校验数字，用于验证前面数字的准确性。编写一个程序
//  来分解用户输入的ISBN的信息：

//Enter ISBN:978-0-393-97950-3
//GS1 prefix:978
//Group identifier:0
//Publisher code:393
//Item number:97950
//Check digit:3

//#include<stdio.h>
//int main()
//{
//	int GS1, G_id, P_code, I_number, C_digit;
//
//	printf("Enter ISBN: ");
//	scanf("%d-%d-%d-%d-%d", &GS1, &G_id, &P_code, &I_number, &C_digit);
//	
//	printf("GS1 prefix:%d\n", GS1);
//	printf("Group identifier:%d\n", G_id);
//	printf("Publisher code:%d\n", P_code);
//	printf("Item number:%d\n", I_number);
//	printf("Check digit:%d\n", C_digit);
//
//	return 0;
//}

//4.编写一个程序，提示用户以（xxx）xxx-xxxx的格式输入电话号码，并以xxx.xxx.xxxx的格式显示该号码：

//Enter phone number[(xxx)xxx-xxxx]:(404) 817-6900
//You entered 404.817.6900

//#include<stdio.h>
//int main()
//{
//	int num1, num2, num3;
//
//	printf("Enter phone number[(xxx) xxx-xxxx]: ");
//	scanf("(%d) %d-%d", &num1, &num2, &num3);
//
//	printf("You entered %03d.%03d.%04d\n", num1, num2, num3);
//
//	return 0;
//}

//5.编写一个程序，要求用户（按任意次序）输入1-16的所有整数，然后用4x4矩阵的形式将它们显示出来，再计算出每行、每列
//  和每条对角线上的和：

//Enter the numbers from 1 to 16 in any order:
//16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//16   3   2  13
// 5  10  11   8
// 9   6   7  12
// 4  15  14   1

//Row sums:34 34 34 34 
//Column sums:34 34 34 34
//Diagonal sums:34 34

//如果行、列和对角线上的和一样（如本例所示），则称这些数组成一个幻方（magic square）。这里给出的幻方出现于艺术家
//和数学家Albrecht Dvrer创作于1514年的一幅画中。（注意：矩阵的最后一行中间的两个数给出了该画的创作年代）。

//#include<stdio.h>
//int main()
//{
//	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14,
//		num15, num16;
//
//	printf("Enter the numbers from 1 to 16 in any order:\n");
//	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, 
//		&num8,&num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
//
//	printf("%2d %2d %2d %2d\n", num1, num2, num3, num4);
//	printf("%2d %2d %2d %2d\n", num5, num6, num7, num8);
//	printf("%2d %2d %2d %2d\n", num9, num10, num11, num12);
//	printf("%2d %2d %2d %2d\n", num13, num14, num15, num16);
//
//	printf("Row sums:%2d %2d %2d %2d\n", num1 + num2 + num3 + num4, num5 + num6 + num7 + num8,
//		num9 + num10 + num11 + num12, num13 + num14 + num15 + num16);
//	printf("Column sums:%2d %2d %2d %2d\n", num1 + num5 + num9 + num13, num2 + num6 + num10 + num14,
//		num3 + num7 + num11 + num15, num4 + num8 + num12 + num16);
//	printf("Diagonal sums:%2d %2d\n", num1 + num6 + num11 + num16, num4 + num7 + num10 + num13);
//
//	return 0;
//}

//6.修改3.2节的addfrac.c程序，使用户可以同时输入两个分数，中间用加号隔开：

//Enter two fractions separated by a plus sign:5/6+3/4
//The sum is 38/24

//addfrac2.c
/*Adds two fractions*/
#include<stdio.h>
int main()
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d /%d +%d /%d", &num1, &denom1, &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}