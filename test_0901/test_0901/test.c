#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//��ϰ��

//��Ŀ1.

//int main()
//{
//	int n = 0;
//	//��������
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


//��Ŀ2.�������֣�ȥ����߷���ͷ֣������

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


//��Ŀ3.ĳ��ĳ���ж�����

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	//��������
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


//��Ŀ4.�������в���һ����
//int main()
//{
//	//����
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
//	//����һ����
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
//	//���
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//��Ŀ5.

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


//��Ŀ6.
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


//��Ŀ7.

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


//��Ŀ8.
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
//    //39 38  С���ֽ��� 0x3839
//    printf("%x\n", a.k);
//
//    return 0;
//}


//��Ŀ9.
//ģ��ʵ��atoi()���������ܣ��ַ���ת��������

#include <ctype.h>
#include <limits.h>

enum State
{
	INVALID,
	VALID
};

//state ��¼����my_atoi ���ص�ֵ�ǺϷ�ת����ֵ�����ǷǷ���״̬
enum State state = INVALID;

int my_atoi(const char* s)
{
	int flag = 1;
	//��ָ��
	if (NULL == s)
	{
		return 0;
	}
	//���ַ���
	if (*s == '\0')
	{
		return 0;
	}
	//�����հ��ַ�
	while (isspace(*s))
	{
		s++;
	}
	//����+/-
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
	//���������ַ���ת��
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
//	//1.��ָ��
//	//2.���ַ���
//	//3.�����˷������ַ�
//	//4.������Χ
//	const char* p = "     -1234a";
//	int ret = my_atoi(p);
//	
//	if (VALID == state)
//	{
//		printf("������ת��:%d\n", ret);
//	}
//	else
//	{
//		printf("�Ƿ���ת��:%d\n", ret);
//	}
//
//	return 0;
//}


//��Ŀ10.
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//1 2 3 4 5 6 1 2 3 4

void Find(int arr[], int sz, int* px, int* py)
{
	//1. Ҫ�������������
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2. ����ret����һλΪ1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//3.�Ѵӵ�λ���λ�ĵ�posλΪ1�ķ���һ���飬Ϊ0�ķ�������һ���顣
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
//	//1. ����
//	//2. �����Ҫ�㣺5��6�����ڲ�ͬ����
//	//0101   5
//	//0110   6
//	//0011  5^6
//	//���Խ���0λΪ1�ķ���һ�飬Ϊ0�ķ�����һ��
//
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	int y = 0;
//	Find(arr, sz, &x, &y);//����ȥx,y�ĵ�ַ�������Ͳ���
//
//	printf("%d %d\n", x, y);
//
//	return 0;
//}


//��Ŀ11.
//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������

//10101010101010101010101010101010  0xaaaaaaa
//01010101010101010101010101010101  0x55555555

//00000000000000000000000001001010  N
//00000000000000000000000000000101  (N&0xaaaaaaaa)>>1
//00000000000000000000000010000000  (N&0x55555555)<<1
//00000000000000000000000010000101  ���=������ 

#define SWAP(N) (((N&0xaaaaaaaa)>>1)+((N&0x55555555)<<1))

//int main()
//{
//	int num = 5;
//	int ret = SWAP(num);
//	printf("%d\n", ret);
//
//	return 0;
//}


//��Ŀ12.
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ơ�
//offsetof ���ʵ��

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


