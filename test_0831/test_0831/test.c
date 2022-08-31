#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//程序环境和预处理

//预定义符号

//int main()
//{
//  //语言内置的预定义符号
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//	//printf("%d\n", __STDC__);//不支持
//
//	return 0;
//}


//写日志
//int main()
//{
//	FILE* pf = fopen("log.txt", "a+");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//#define 定义标识符

#define M 1000
#define reg register
#define do_forever for(;;)
#define CASE break;case
#define DEBUG_PRINT printf("file:%s\tline:%d\tdate:%s\ttime:%s\n", \
							__FILE__,__LINE__, \
							__DATE__,__TIME__)

//int main()
//{
//	//reg int num = 0;
//	//do_forever;
//	
//	int m = M;
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	int n = 2;
//
//	switch (n)
//	{
//	case 1:
//		printf("%d\n", n);
//	CASE 2:
//		printf("yes");
//	CASE 3:
//		printf("no");
//	}
//
//	return 0;
//}


//int main()
//{
//	DEBUG_PRINT;
//
//	return 0;
//}


//#define 定义宏
//括号很重要

#define SQUARE(x) ((x)*(x))
#define DOUBLE(x) ((x)+(x))

//int main()
//{
//	printf("%d\n", SQUARE(3+1));
//	printf("%d\n", 10 * DOUBLE(4));
//
//	return 0;
//}


//#define NUM 100
//#define MAX(x,y) ((x)>(y)?(x):(y))

//int main()
//{
//	printf("NUM=%d\n", MAX(101, NUM));
//
//	return 0;
//}


//#和##
//#把一个宏参数变成对应的字符串
//##把位于它两边的符号合成一个符号

//#define PRINT(x,FORMAT) printf("the value of "#x" is "FORMAT"\n",x)
//#define CAT(x,y) x##y

//int main()
//{
//	int a = 10;
//	PRINT(a,"%d");
//	int b = 20;
//	PRINT(b,"%d");
//	float f = 5.5f;
//	PRINT(f, "%f");
//	
//	int classnum = 2022;
//	printf("%d\n", CAT(class, num));
//
//	return 0;
//}


//带副作用的宏参数

#define MAX(x,y) ((x)>(y)?(x):(y))

//int main()
//{
//	int a = 5;
//	int b = 8;
//	printf("%d\n", MAX(a++, b++));
//	//(a++)>(b++)?(a++):(b++)
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


#define MALLOC(num,type) (type*)malloc(num*sizeof(type))

//int main()
//{
//	int* p = MALLOC(10, int);
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//#undef 移除一个宏定义
#define N 100

//int main()
//{
////#undef N 
//
//	int a = N;
//	printf("%d\n", a);
//
//	return 0;
//}


//条件编译

//1. #if 常量表达式

//int main()
//{
//#if 0
//	printf("world\n");
//#endif
//
//	return 0;
//}


//2.多个分支的条件编译

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("hihi\n");
//#endif
//
//	return 0;
//}


//3.判断是否被定义

//#define TEST 0
//#define HEHE 1

//int main()
//{
////如果TEST定义了，下面参与编译
////1
//#ifdef TEST
//	printf("test1\n");
//#endif
////2
//#if defined(TEST)
//	printf("test2\n");
//#endif
//
////如果HEHE不定义，下面参与编译
////3
//#ifndef HEHE
//	printf("hehe1\n");
//#endif
////4
//#if !defined(HEHE)
//	printf("hehe2\n");
//#endif
//	return 0;
//}


//文件包含

//库文件包含,C语言库中提供的函数的头文件使用<>
#include <stdio.h>

//本地文件包含,自定义的函数的头文件使用""
#include "add.h"

//<> 和 ""包含头文件的本质区别是：查找的策略的区别
//"" 1. 自己代码所在的目录下查找，2.如果第1步找不到，则在库函数的头文件目录下查找
//<> 直接去库函数头文件所在的目录下查找


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}


//防止头文件的重复包含
//"add.h"
//#pragma once//方法1

//方法2
//#ifndef __ADD_H__
//#define __ADD_H__
//
//int Add(int x, int y);
//
//#endif


