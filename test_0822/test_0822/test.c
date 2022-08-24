#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


/*  -------------------------------------------------*/

//���Ͼ���
//��Ŀ���ݣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

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
//	//&x,&y   1. �������	2. ����ֵ
//
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���: %d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


/*  -------------------------------------------------------*/

//�ַ�������
//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB


//����1
void string_left_rotate1(char* str, int k)
{
	int n = strlen(str);
	int i = 0;
	for (i = 0; i < k; i++)
{
	//ÿ������תһ���ַ�
	char tmp = *str;
	//��ߵ�n-1���ַ���ǰŲ��
	int j = 0;
	for (j = 0; j < n - 1; j++)
	{
		*(str + j) = *(str + j + 1);
	}
	//tmp�������
	*(str + n - 1) = tmp;
}
}


//����2��������ת��
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
	string_reverse(str, str + k - 1);//��
	string_reverse(str + k, str + n - 1);//��
	string_reverse(str, str + n - 1);//����
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

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC


//����1
int is_string_rotate1(char* str1, char* str2)
{
	int n = strlen(str1);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//ÿ������תһ���ַ�
		char tmp = *str1;
		//��ߵ�n-1���ַ���ǰŲ��
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		//tmp�������
		*(str1 + n - 1) = tmp;

		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}

	return 0;
}


//����2
int is_string_rotate2(char* str1, char* str2)
{
	//���Ȳ���ȣ��϶�������ת�õ���
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	
	//1.str1�ַ����ĺ��׷��һ��str1
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, len);

	//2. �ж�str2�Ƿ�Ϊstr1���ִ�
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


//�ַ������� strcat()
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


