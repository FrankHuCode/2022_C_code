#define _CRT_SECURE_NO_WARNINGS 1

//�򵥼���

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//HJ80-��������ϲ�
//int compare(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d", &m);
//	int arr1[] = { 0 };
//	for (int i = 0; i < m; i++)
//		scanf("%d", &arr1[i]);
//	scanf("%d", &n);
//	int arr2[] = { 0 };
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr2[i]);
//	int arr[] = { 0 };
//	memcpy(arr, arr1, m * sizeof(int));//void * memcpy ( void * destination, const void * source, size_t num );
//	memcpy(arr+m, arr2, n * sizeof(int));
//	qsort(arr, m + n, sizeof(int), compare);
//	printf("%d", arr[0]);
//	for (int i = 1; i < m + n; i++)
//	{
//		if (arr[i] != arr[i - 1])
//			printf("%d", arr[i]);
//	}
//	return 0;
//}

//HJ81-�ַ����ַ�ƥ��

//int main()
//{
//	char s_str[250] = { 0 };
//	char l_str[250] = { 0 };
//	fgets(s_str, sizeof(s_str), stdin);
//	fgets(l_str, sizeof(l_str), stdin);
//	int s_len = strlen(s_str);
//	int l_len = strlen(l_str);
//	int count = 0;
//	for (int i = 0; i < s_len - 1; i++)
//	{
//		for (int j = 0; j < l_len - 1; j++)
//		{
//			if (s_str[i] == l_str[j])
//			{
//				count++;
//				break;
//			}
//		}
//	}
//	if (count == (s_len - 1))
//		printf("true");
//	else
//		printf("false");
//	return 0;
//}

//HJ83��ά�������

//int main()
//{
//	int m, n;
//	int x1, y1, x2, y2;
//	int x, y;
//	int x0, y0;
//	while (scanf("%d%d", &m, &n) != EOF)
//	{
//		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//		scanf("%d%d", &x, &y);
//		scanf("%d%d", &x0, &y0);
//
//		//�жϳ�ʼ������Ƿ�ɹ�
//		printf("%d\n",m >= 1 && m <= 9 && n >= 1 && n <= 9 ? 0 : -1);
//
//		//�жϽ�����Ԫ���Ƿ�ɹ�
//		printf("%d\n", x1 >= 0 && x1 <= m - 1 &&
//			y1 >= 0 && y1 <= n - 1 &&
//			x2 >= 0 && x2 <= m - 1 &&
//			y2 >= 0 && y2 <= n - 1 ? 0 : -1);
//
//		//�жϲ������Ƿ�ɹ�
//		printf("%d\n", m >= 1 && m <= 8 && x >= 0 && x <= m - 1 ? 0 : -1);
//
//		//�жϲ������Ƿ�ɹ�
//		printf("%d\n", n >= 1 && n <= 8 && y >= 0 && y <= n - 1 ? 0 : -1);
//		
//		//�ж������ѯ��Ԫ�������Ƿ�ɹ�
//		printf("%d\n", x0 >= 0 && x0 <= m - 1 && y0 >= 0 && y0 <= n - 1 ? 0 : -1);
//	}
//
//	return 0;
//}

//HJ84-ͳ�ƴ�д��ĸ����

//int main()
//{
//	char str[250] = { 0 };
//	fgets(str, sizeof(str), stdin);//fgets��������һ�����з�
//	int len = strlen(str);
//	int count = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//HJ85-������Ӵ�

//int main()
//{
//	char str[350] = { 0 };
//	while (fgets(str, sizeof(str), stdin))
//	{
//		int len = strlen(str);
//		int max = 0;
//		for (int i = 0; i < len - 1; i++)
//		{
//			//abba����
//			int sum1 = 0;
//			if (str[i] == str[i + 1])
//			{
//				for (int j = 0; j < len - 1; j++)
//				{
//					if (str[i - j] == str[i + 1 + j] && (i - j) >= 0 && (i + 1 + j) <= len - 1)//ע��߽�
//						sum1++;
//					else
//						break;
//				}
//				max = fmax(max, 2 * (double)sum1);//C99��fmax����double�ͣ�float�ͣ�long double��
//			}
//
//			//aba����
//			int sum2 = 0;
//			if (str[i - 1] == str[i + 1])
//			{
//				for (int j = 0; j < len - 1; j++)
//				{
//					if (str[i - 1 - j] == str[i + 1 + j] && (i - 1 - j) >= 0 && (i + 1 + j) <= len - 1)
//						sum2++;
//					else
//						break;
//				}
//				max = fmax(max, 2 * (double)sum2 + 1);
//			}
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}

//HJ86-���������bit��

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{	
//		int count = 0;
//		while (n)
//		{
//			n &= (n << 1);//��һ��int�������м���1ʱn=n&(n-1),�м�������1ʱn=n&(n<<1)
//			count++;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}

//HJ87-����ǿ�ȵȼ�
//
////����
//unsigned int length_judge(int lenth)
//{
//	if (lenth >= 8)
//		return 25;
//	else if (lenth >= 5 && lenth <= 7)
//		return 10;
//	else 
//		return 5;
//}
////��ĸ
//unsigned int letter_judge(int lower, int upper)
//{
//	if (lower == 0 && upper == 0)
//		return 0;
//	else if (((lower != 0 && upper == 0))|| ((lower == 0 && upper != 0)))
//		return 10;
//	else
//		return 20;
//}
////����
//unsigned int number_judge(int num)
//{
//	if (num > 1)
//		return 20;
//	else if (num == 1)
//		return 10;
//	else
//		return 0;
//}
////����
//unsigned int symbol_judge(int symbol)
//{
//	if (symbol > 1)
//		return 25;
//	else if (symbol == 1)
//		return 10;
//	else
//		return 0;
//}
////����
//unsigned int special_judge(int lower, int upper, int num, int symbol)
//{
//	int letter = lower + upper;
//	if (lower != 0 && upper != 0 && num != 0 && symbol != 0)
//		return 5;
//	else if (letter != 0 && num != 0 && symbol == 0)
//		return 2;
//	else if (letter != 0 && num != 0 && symbol != 0)
//		return 3;
//	return 0;
//}
////����
//void score_judge(int score)
//{
//	if (score >= 90)
//		printf("VERY_SECURE\n");
//	else if (score >= 80)
//		printf("SECURE\n");
//	else if (score >= 70)
//		printf("VERY_STRONG\n");
//	else if (score >= 60)
//		printf("STRONG\n");
//	else if (score >= 50)
//		printf("AVERAGE\n");
//	else if (score >= 25)
//		printf("WEAK\n");
//	else
//		printf("VERY_WEAK\n");
//}
//
//int main()
//{
//
//	char str[301] = { '\0' };
//	int score = 0;
//	while (fgets(str, sizeof(str), stdin))
//	{
//		int lenth = strlen(str)-1;
//		int lower = 0;
//		int upper = 0;
//		int num = 0;
//		int symbol = 0;
//		for (int i = 0; i < lenth; i++)
//		{
//			if (str[i] >= 'a' && str[i] <= 'z')
//				lower++;
//			else if (str[i] >= 'A' && str[i] <= 'Z')
//				upper++;
//			else if (str[i] >= '0' && str[i] <= '9')
//				num++;
//			else if ((str[i] >= 0x21 && str[i] <= 0x2f) || (str[i] >= 0x3a && str[i] <= 0x40) || (str[i] >= 0x5b && str[i] <= 0x60)
//				|| (str[i] >= 0x7b && str[i] <= 0x7e))
//				symbol++;
//		}
//		score = length_judge(lenth);//1.�����жϵ÷�
//		score += letter_judge(lower, upper);//2.��Сд��ĸ�жϵ÷�
//		score += number_judge(num);//3.�����жϵ÷�
//		score += symbol_judge(symbol);//4.�����жϵķ�
//		score += special_judge(lower, upper, num, symbol);//5.���⽱���÷�
//		score_judge(score);//�������ֵȼ���ӡ
//	}
//	return 0;
//}

//HJ91-�߷���ķ�����

//int fun(int m, int n)
//{
//	if (m == 0 || n == 0)
//		return 1;
//	else
//		return fun(m - 1, n) + fun(m, n - 1);
//}
//int main()
//{
//	int n, m;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		printf("%d\n", fun(m, n));
//	}
//	return 0;
//}

//HJ94-��Ʊͳ��

//int main()
//{
//	int candidate = 0;
//	int voter = 0;
//	char name[1000] = { '\0' };
//	char str[1000] = { '\0' };
//	while (scanf("%d", &candidate) != EOF)
//	{
//		fgets(name, sizeof(name), stdin);
//		scanf("%d", &voter);
//		fgets(str, sizeof(str), stdin);
//		int n_len = strlen(name)-1;
//		int s_len = strlen(str)-1;
//		
//		for (int i = 0; i < n_len; i++)
//		{
//			printf("%s : %d\n", name[i],)
//
//	return 0;
//}

//HJ96-��ʾ����

//һ��һ��֮ν��������������ѭ������
//int main()
//{
//	char str[100] = {'\0'};
//	while (scanf("%s", str) != EOF)
//	{
//		char simu[100] = { '\0' };
//		int len = strlen(str);
//		int i = 0;
//		int j = 0;
//		while (i < len)
//		{
//			if (str[i] >= '0' && str[i] <= '9')
//			{
//				simu[j++] = '*';
//				simu[j++] = str[i];
//				i++;
//				while (str[i] >= '0' && str[i] <= '9')
//				{
//					simu[j++] = str[i];
//					i++;
//				}
//				simu[j++] = '*';
//			}
//			simu[j++] = str[i];
//			i++;
//		}
//		printf("%s\n", simu);
//	}
//
//	return 0;
//}


//�������滻��*
//int main()
//{
//	const char num[]= "0123456789";
//	char str[100] = { 0 };
//	int count = 0;
//	while (scanf("%c",str)!=EOF)
//	{
//		for (int i = 0; i < strlen(str); i++)
//		{
//			for (int j = 0; j < strlen(num); j++)
//			{
//				if (str[i] == num[j])
//				{
//					str[i] = '*';//�������滻��*
//				}
//			}
//		}
//		printf("%s", str);
//	}
//	return 0;
//}

//HJ97-�Ǹ�����

//int main()
//{
//
//	int n = 0;
//	int arr[2000] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		int sum = 0;
//		int pos = 0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			if (arr[i] < 0)
//				count++;
//			if (arr[i] > 0)
//			{
//				sum += arr[i];
//				pos++;
//			}
//		}
//		if (pos == 0)
//			printf("%d %.1f\n", count, (float)0);
//		else
//			printf("%d %.1f\n", count, (float)sum / pos);	
//	}
//	return 0;
//
//}

//HJ99-������

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		int b = 10;
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			if (i >= b)
//				b = b * 10;
//			if (((i * i - i) % b) == 0)
//			{
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}

//HJ100-�Ȳ�����

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int a1 = 2;
//		int d = 3;
//		printf("%d\n", n * a1 + (n * (n - 1) * d) / 2);//��ס�Ȳ����У��ȱ����еĹ�ʽ������
//	}
//	return 0;
//}

//HJ102-�ַ�ͳ��

//int main()
//{
//	char str[1000] = { '\0' };
//	while (fgets(str, sizeof(str), stdin))
//	{
//		int max = 0;
//		int  flag[200] = { 0 };
//		int len = strlen(str);
//		for (int i = 0; i < len - 1; i++)
//		{
//			//ͳ��Сд��ĸ���ֵĴ���
//			flag[str[i]]++;
//			//�Ƚϴ�����С�ҵ����ֵ
//			max = ((max > flag[str[i]]) ? max : flag[str[i]]);
//		}
//		//�Ӵ�С����ַ�
//		for (int i = max; i > 0; i--)
//		{
//			for (char j = '0'; j < 'z' + 1; j++)
//			{
//				if (flag[j] == i)
//				{
//					printf("%c", j);
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//HJ105-�Ǹ�����II

//int main()
//{
//		int a = 0;
//		int sum = 0;
//		int count = 0;
//		int pos = 0;
//		while (scanf("%d", &a) != EOF)
//		{
//			if (a < 0)
//				count++;
//			else
//			{
//				sum += a;
//				pos++;
//			}
//		}
//		float result = (pos > 0) ? ((float)sum / pos) : 0;
//		printf("%d\n%.1f\n", count, result);
//	return 0;
//}

//HJ106-�ַ�����

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[1000] = { 0 };
//	while (fgets(str, sizeof(str), stdin))
//	{
//		int len = strlen(str);
//		reverse(str, str + len - 2);//��������
//		printf("%s\n", str);
//	}
//	return 0;
//}

//HJ108-����С������

//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int max = 0;//��С������*���Լ��=a*b
//		for (int i = 1; i < (a < b ? a : b); i++)
//		{
//			if (a % i == 0 && b % i == 0)//��i��ͬʱ��a��b����
//			{
//				max = i;
//			}
//		}
//		printf("%d\n", (a * b) / max);
//	}
//	return 0;
//}