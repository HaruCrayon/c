#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


/*  -------------------------------------------------*/

//杨氏矩阵
//题目内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py-1;
	int i = 0;
	int j = 0;
	while (x < *px && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}

	return 0;
}


//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, &x, &y, k);
//	//&x,&y   1. 传入参数	2. 带回值
//
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是: %d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


/*  -------------------------------------------------------*/

//字符串左旋
//题目内容：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB


//方法1
void string_left_rotate1(char* str, int k)
{
	int n = strlen(str);
	int i = 0;
	for (i = 0; i < k; i++)
{
	//每次左旋转一个字符
	char tmp = *str;
	//后边的n-1个字符往前挪动
	int j = 0;
	for (j = 0; j < n - 1; j++)
	{
		*(str + j) = *(str + j + 1);
	}
	//tmp放在最后
	*(str + n - 1) = tmp;
}
}


//方法2：三步反转法
//ABCDEF  DCBAFE  EFABCD

#include <assert.h>

void string_reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


void string_left_rotate2(char* str, int k)
{
	int n = strlen(str);
	string_reverse(str, str + k - 1);//左
	string_reverse(str + k, str + n - 1);//右
	string_reverse(str, str + n - 1);//整体
}


//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 4;
//	//string_left_rotate1(arr, k);
//	string_left_rotate2(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}


/*  ----------------------------------------------------*/

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC


//方法1
int is_string_rotate1(char* str1, char* str2)
{
	int n = strlen(str1);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//每次左旋转一个字符
		char tmp = *str1;
		//后边的n-1个字符往前挪动
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		//tmp放在最后
		*(str1 + n - 1) = tmp;

		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}

	return 0;
}


//方法2
int is_string_rotate2(char* str1, char* str2)
{
	//长度不相等，肯定不是旋转得到的
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	
	//1.str1字符串的后边追加一个str1
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, len);

	//2. 判断str2是否为str1的字串
	char* ret = strstr(str1, str2);

	return ret != NULL;
}


//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAE";
//	//int ret = is_string_rotate1(arr1, arr2);
//	int ret = is_string_rotate2(arr1, arr2);
//
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}


//字符串函数 strcat()
//int main()
//{
//	char arr[20] = "hello ";
//	//strcat(arr, "world");//"hello world"
//	//strcat(arr, arr);//"hello hello "
//	strncat(arr, arr, 4);//"hello hell"
//	
//	printf("%s\n", arr);
//
//	return 0;
//}


