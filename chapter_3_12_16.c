#define _CRT_SECURE_NO_WARNINGS 1

//������ ��ʽ������/���

//1.printf���� 
//1.1ת��˵�� ��ʽ��%m.pX ����%-m.pX�����ʡ��p����ô��ͬС����Ҳһ��ʡ��
//��С����minimum field width��mָ����Ҫ��ʾ�������ַ�����
//���ȣ�precision��p ��������ת��ָ������conversion specifier��X��ѡ��
//X��ת��ָ������:%d��%e��%f��%g��

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

//1.2ת������
//��������\a
//���˷���\b
//���з���\n
//ˮƽ�Ʊ����\t
//˫���ŷ���\"
//�ַ����У�\\ ,��ʾ�ַ�\�����Ƶģ�%%����ʾ�ַ�%��


//2.scanf����
//%i��%d֮���������printf�����У�����û��������scanf�����У�%dֻ����ʮ������ʽ������ƥ�䣬
//%i�����ƥ��˽��ƣ�056��ʮ�����ƣ�0x����0X����0x56��


//��ϰ��
//1.�����printf�������ò���������ֱ���ʲô��
// ��a��printf("%6d,%4d",86,1040);
// ��b��printf("%12.5e",30.253);
// ��c��printf("%.4f",83.162);
// ��d��printf("%-6.2g",.0000009979);


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

//2.��дprintf�������ã������и�ʽ��ʾfloat�ͱ���x��
//(a)ָ����ʾ��ʽ������8������룬С�������1λ���֡�
//(b)ָ����ʾ��ʽ������10���Ҷ��룬С�������6λ���֡�
//(c)����ʮ���Ʊ�ʾ��ʽ������8������룬С�������3λ���֡�
//(d)����ʮ���Ʊ�ʾ��ʽ������6���Ҷ��룬С����������֡�

//ϰ�������
//printf������ת��˵����Ҫƥ�䲻ͬ���������ͣ���������ͨ��ʹ��%d�������������ݵ�ת��˵������ʹ��%e��%f��%g���֣�
//�ֱ��ʾָ����ʽ������ʮ���ơ��Զ�ѡ���ʽ��printf������ʾ����Ĭ���Ҷ��룬�����Ҫ����룬������ת��˵�������
//"-"��ʾ

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


//3.˵������û��scanf��ʽ���Ƿ�ȼۣ�������ȼۣ���ָ�����ǵĲ��졣
//��a��"%d"��" %d"���ȼ�
//��b��"%d-%d-%d"��"%d -%d -%d"�����ȼۣ�����ʹ�ú�һ�ַ�ʽ����������ݴ���
//��c��"%f"��"%f "���ȼ�
//��d��"%f,%f"��"%f, %f"���ȼ�


//4.����scanf�������õĸ�ʽ���£�10.3 5 6
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

//5.����scanf�������õĸ�ʽ���£�12.3 45.6 789

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

//6.ָ������޸�3.2���е�addfrac.c����ʹ�û������������ַ�/��ǰ���пո�ķ�����
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


//�����
//1.��дһ����������/��/�꣨��mm/dd/yy���ĸ�ʽ�����û������������Ϣ�����������գ���yyyymmdd���ĸ�ʽ������ʾ����
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

//2.��дһ�����򣬶��û�����Ĳ�Ʒ��Ϣ���и�ʽ��������ỰӦ��������������
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

//3.ͼ���ù��ʱ�׼��ţ�ISBN�����б�ʶ��2007��1��1��֮������ISBN����13λ���֣��ɵ�ISBNʹ��10λ���֣�����Ϊ5��
//  ��978-0-393-97950-3����һ�飨GS1ǰ׺��ĿǰΪ978��979.�ڶ��飨���ʶ��ָ�����Ի���ԭ���������������0��1����
//  ��Ӣ��Ĺ��ң��������飨�����̱�ţ���ʾ�����̣�393��W.W.Norton������ı�ţ��������飨��Ʒ��ţ����ɳ�����
//  ���������ʶ�������һ����ı�ţ�97950����ISBN��ĩβ��һ��У�����֣�������֤ǰ�����ֵ�׼ȷ�ԡ���дһ������
//  ���ֽ��û������ISBN����Ϣ��

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

//4.��дһ��������ʾ�û��ԣ�xxx��xxx-xxxx�ĸ�ʽ����绰���룬����xxx.xxx.xxxx�ĸ�ʽ��ʾ�ú��룺

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

//5.��дһ������Ҫ���û����������������1-16������������Ȼ����4x4�������ʽ��������ʾ�������ټ����ÿ�С�ÿ��
//  ��ÿ���Խ����ϵĺͣ�

//Enter the numbers from 1 to 16 in any order:
//16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//16   3   2  13
// 5  10  11   8
// 9   6   7  12
// 4  15  14   1

//Row sums:34 34 34 34 
//Column sums:34 34 34 34
//Diagonal sums:34 34

//����С��кͶԽ����ϵĺ�һ�����籾����ʾ���������Щ�����һ���÷���magic square������������Ļ÷�������������
//����ѧ��Albrecht Dvrer������1514���һ�����С���ע�⣺��������һ���м�������������˸û��Ĵ����������

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

//6.�޸�3.2�ڵ�addfrac.c����ʹ�û�����ͬʱ���������������м��üӺŸ�����

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