#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ָ��


/*  --------------------------   1.�ַ�ָ��  ---------------------------  */

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	char* ps = "hello world";//�������ǰ�"hello world"����ַ��������ַ��ĵ�ַ�洢����ps��
//	printf("%c\n", *ps);//h
//	printf("%s\n", ps);//hello world
//
//	char arr[] = "hello world";
//	printf("%s\n", arr);//hello world
//
//	return 0;
//}


//int main()
//{
//    char str1[] = "hello world.";
//    char str2[] = "hello world.";
//    char* str3 = "hello world.";
//    char* str4 = "hello world.";
//    *str3 = 'w';//err  �����ַ������������޸�
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");//
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");//
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}


/*  --------------------------   2.ָ������  ---------------------------  */

//int main()
//{
//	//ָ������
//	//���� - �����д�ŵ���ָ�루��ַ��
//	//int* arr[3];//�������ָ�������
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


/*  --------------------------   3.����ָ��  ---------------------------  */

//����ָ��
//��һ��ָ�� - ��ָ�������ָ��
// 
//����ָ�� - ��ָ�����͵�ָ��  int* p
//�ַ�ָ�� - ��ָ���ַ���ָ��  char* p


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = {1,2,3,4,5};
//	int (*parr)[10] = &arr;//ȡ����������ĵ�ַ 
//	//parr ����һ������ָ�� - ���д�ŵ�������ĵ�ַ
//	//arr;//arr - ����������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd����һ������ָ��
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//
//	return 0;
//}


//
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������) - ��������ʾ�������飬����������������С����λ���ֽ�
//2. &������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//


//����ָ���ʹ��

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
//
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//
//		}
//		printf("\n");
//	}
//
//}
//
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	//arr����������ʾ������Ԫ�صĵ�ַ��
//	//��ά�������Ԫ���� ��һ��,��һ��һά����
//	//arr��ʾһά����ĵ�ַ������������ָ�������� int (*p)[5]
//
//	return 0;
//}


/*  --------------------------   4.���鴫�κ�ָ�봫��  ---------------------------  */

//һά���鴫��

//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int** arr)
//{}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };//���int*������
//	test(arr);
//	test2(arr2);
//
//	return 0;
//}


//��ά���鴫��

//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int (*arr)[5])
//{}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//
//	return 0;
//}


//һ��ָ�봫��

//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//
// 
//void test(char* p)
//{
//
//}
//
// 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	print(p, sz);//p��һ��ָ��
//	
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);
//
//	return 0;
//}


//����ָ�봫��

//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	
//	test(ppa);//����ָ�봫��
//	test(&pa);//��һ��ָ������ĵ�ַ
//	printf("%d\n", a);
//
//	int* arr[10] = {0};
//	test(arr);//�����һ��ָ�������
//
//	return 0;
//}

