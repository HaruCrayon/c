#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//指针


/*  --------------------------   1.字符指针  ---------------------------  */

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//
//	char* ps = "hello world";//本质上是把"hello world"这个字符串的首字符的地址存储在了ps中
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
//    *str3 = 'w';//err  常量字符串，不允许修改
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


/*  --------------------------   2.指针数组  ---------------------------  */

//int main()
//{
//	//指针数组
//	//数组 - 数组中存放的是指针（地址）
//	//int* arr[3];//存放整型指针的数组
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


/*  --------------------------   3.数组指针  ---------------------------  */

//数组指针
//是一种指针 - 是指向数组的指针
// 
//整型指针 - 是指向整型的指针  int* p
//字符指针 - 是指向字符的指针  char* p


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = {1,2,3,4,5};
//	int (*parr)[10] = &arr;//取出的是数组的地址 
//	//parr 就是一个数组指针 - 其中存放的是数组的地址
//	//arr;//arr - 数组名是首元素的地址 - arr[0]的地址
//
//	double* d[5];
//	double* (*pd)[5] = &d;//pd就是一个数组指针
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
//数组名是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名) - 数组名表示整个数组，计算的是整个数组大小，单位是字节
//2. &数组名 - 数组名表示整个数组，取出的是整个数组的地址
//


//数组指针的使用

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
//	//arr数组名，表示数组首元素的地址。
//	//二维数组的首元素是 第一行,是一个一维数组
//	//arr表示一维数组的地址，可以用数组指针来接收 int (*p)[5]
//
//	return 0;
//}


/*  --------------------------   4.数组传参和指针传参  ---------------------------  */

//一维数组传参

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
//	int* arr2[20] = { 0 };//存放int*的数组
//	test(arr);
//	test2(arr2);
//
//	return 0;
//}


//二维数组传参

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


//一级指针传参

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
//	print(p, sz);//p是一级指针
//	
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);
//
//	return 0;
//}


//二级指针传参

//void test(int** p2)
//{
//	**p2 = 20;
//}
//
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	
//	test(ppa);//二级指针传参
//	test(&pa);//传一级指针变量的地址
//	printf("%d\n", a);
//
//	int* arr[10] = {0};
//	test(arr);//传存放一级指针的数组
//
//	return 0;
//}

