#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//练习题

//题目1.

//int main()
//{
//	int n = 0;
//	//多组输入
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || (i + j == n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}


//题目2.七人评分，去掉最高分最低分，求均分

//int main()
//{
//	int score = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		max = (score > max ? score : max);
//		min = (score < min ? score : min);
//	}
//	printf("%.2f\n", (sum - max - min) / 5.0);
//
//	return 0;
//}


//题目3.某年某月有多少天

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	//多组输入
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		int day = days[m];
//		if (m == 2)
//		{
//			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//			{
//				day += 1;
//			}
//		}
//		printf("%d\n", day);
//	}
//
//	return 0;
//}


//题目4.有序序列插入一个数
//int main()
//{
//	//输入
//	int arr[51] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//
//	//插入一个数
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i] > m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			break;
//		}
//	}
//	arr[i + 1] = m;
//
//	//输出
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//题目5.

//#define A 2
//#define B 3
//#define MAX_SIZE A+B
//
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;//1 - 8bit
//	unsigned char Para1 : 2;
//	unsigned char state;//1
//	unsigned char avail : 1;//1
//}* Env_Alarm_Record;
//
//
//int main()
//{
//	//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	int sz = (sizeof(struct _Record_Struct) * MAX_SIZE);//3*2+3
//	printf("%d\n", sz);
//
//	return  0;
//}


//题目6.
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }* pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//
//    memset(puc, 0, 4);//00000000 00000000 00000000 00000000
//                      //00000010 00101001 00000000 00000000
//                      //02       29       00       00
//    pstPimData->ucPim1 = 2; //00000010  
//    pstPimData->ucData0 = 3;//00000011    1
//    pstPimData->ucData1 = 4;//00000100   00
//    pstPimData->ucData2 = 5;//00000101  101
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}


//题目7.

//union Un
//{
//	short s[7];//2    2*7=14   
//	int n;//4 
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}


//题目8.
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    //39 38  小端字节序 0x3839
//    printf("%x\n", a.k);
//
//    return 0;
//}


//题目9.
//模拟实现atoi()函数，功能：字符串转换成整型

#include <ctype.h>
#include <limits.h>

enum State
{
	INVALID,
	VALID
};

//state 记录的是my_atoi 返回的值是合法转化的值，还是非法的状态
enum State state = INVALID;

int my_atoi(const char* s)
{
	int flag = 1;
	//空指针
	if (NULL == s)
	{
		return 0;
	}
	//空字符串
	if (*s == '\0')
	{
		return 0;
	}
	//跳过空白字符
	while (isspace(*s))
	{
		s++;
	}
	//正负+/-
	if ('-' == *s)
	{
		flag = -1;
		s++;
	}
	else if ('+' == *s)
	{
		flag = 1;
		s++;
	}
	//处理数字字符的转换
	long long n = 0;
	while (isdigit(*s))
	{
		n = n * 10 + flag * (*s - '0');
		if (n > INT_MAX || n < INT_MIN)
		{
			return 0;
		}
		s++;
	}
	if ('\0' == *s)
	{
		state = VALID;
		return (int)n;
	}
	else
	{
		//return 0;
		state = VALID;
		return (int)n;
	}

}


//int main()
//{
//	//1.空指针
//	//2.空字符串
//	//3.遇到了非数字字符
//	//4.超出范围
//	const char* p = "     -1234a";
//	int ret = my_atoi(p);
//	
//	if (VALID == state)
//	{
//		printf("正常的转换:%d\n", ret);
//	}
//	else
//	{
//		printf("非法的转换:%d\n", ret);
//	}
//
//	return 0;
//}


//题目10.
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//1 2 3 4 5 6 1 2 3 4

void Find(int arr[], int sz, int* px, int* py)
{
	//1. 要把所有数字异或
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2. 计算ret的哪一位为1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//3.把从低位向高位的第pos位为1的放在一个组，为0的放在另外一个组。
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	*px = num1;
	*py = num2;

}

//int main()
//{
//	//1. 分组
//	//2. 分组的要点：5和6必须在不同的组
//	//0101   5
//	//0110   6
//	//0011  5^6
//	//可以将第0位为1的分在一组，为0的分在另一组
//
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	Find(arr, sz, &x, &y);//传进去x,y的地址，返回型参数
//
//	printf("%d %d\n", x, y);
//
//	return 0;
//}


//题目11.
//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。

//10101010101010101010101010101010  0xaaaaaaa
//01010101010101010101010101010101  0x55555555

//00000000000000000000000001001010  N
//00000000000000000000000000000101  (N&0xaaaaaaaa)>>1
//00000000000000000000000010000000  (N&0x55555555)<<1
//00000000000000000000000010000101  相加=交换后 

#define SWAP(N) (((N&0xaaaaaaaa)>>1)+((N&0x55555555)<<1))

//int main()
//{
//	int num = 5;
//	int ret = SWAP(num);
//	printf("%d\n", ret);
//
//	return 0;
//}


//题目12.
//写一个宏，计算结构体中某变量相对于首地址的偏移。
//offsetof 宏的实现

#include <stddef.h>

#define OFFSETOF(struct_name,mem_name) (int)&(((struct_name*)0)->mem_name)
struct S
{
	int a;
	short b;
	int c;
	char d;
};

//int main()
//{
//	
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, d));
//
//	return 0;
//}


