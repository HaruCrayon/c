#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>


//ģ��ʵ��strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] =  "xxxxxxxxxx" ;
//	char arr2[] = "hello";
//	
//	printf("%s\n", my_strcpy(arr1, NULL));
//
//	return 0;
//}


//ģ��ʵ��strlen

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	//assert(str != NULL);
//	assert(str);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abcd";
//	size_t len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//�������n�Ķ����Ʋ������м���1

//����1
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//
//int main()
//{
//	int n = -1;
//	int ret = NumberOf1(n);
//
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//����2
// n = n&(n-1)
// n = 15
// 1111 - n
// 1110 - n-1
// 1110 - n
// 1101 - n-1
// 1100 - n
// 1011 - n-1
// 1000 - n
// 0111 - n-1
// 0000 - n

//дһ�������ж�һ�������ǲ���2��n�η�
//2��n�η������֣�����ֻ��һ��1
//k&(k-1) == 0

//int NumberOf1(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	int n = -1;
//	int ret = NumberOf1(n);
//
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//���������������в�ͬλ�ĸ���
//int NumberOf1(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n;//��ͬΪ0������Ϊ1
//
//	count = NumberOf1(ret);//ͳ��һ��ret��2�������м���1����˵��m��n�Ķ�����λ���м���λ��ͬ
//
//	printf("%d\n", count);
//
//	return 0;
//}


//��ȡn��2�����е�����λ��ż��λ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	//0000000000000000000000000000000001010
//	int i = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}


//��������������������������������ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a = a ^ b;
//	b = a ^ b;// a ^ b ^b
//	a = a ^ b;//a^b^a
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//��һ�仰�ĵ��ʽ��е��ã���㲻���á�I like beijing. �����������Ϊ��beijing. like I

void reverse(char* left,char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}


int main()
{
	char arr[100] = { 0 };
	gets(arr);//I like beijing.
	int len = strlen(arr);
	reverse(arr,arr+len-1);//.gnijieb ekil I

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s\n", arr);//beijing. like I

	return 0;
}


//