#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//���򻷾���Ԥ����

//Ԥ�������

//int main()
//{
//  //�������õ�Ԥ�������
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);
//	//printf("%d\n", __STDC__);//��֧��
//
//	return 0;
//}


//д��־
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


//#define �����ʶ��

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


//#define �����
//���ź���Ҫ

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


//#��##
//#��һ���������ɶ�Ӧ���ַ���
//##��λ�������ߵķ��źϳ�һ������

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


//�������õĺ����

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


//#undef �Ƴ�һ���궨��
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


//��������

//1. #if �������ʽ

//int main()
//{
//#if 0
//	printf("world\n");
//#endif
//
//	return 0;
//}


//2.�����֧����������

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


//3.�ж��Ƿ񱻶���

//#define TEST 0
//#define HEHE 1

//int main()
//{
////���TEST�����ˣ�����������
////1
//#ifdef TEST
//	printf("test1\n");
//#endif
////2
//#if defined(TEST)
//	printf("test2\n");
//#endif
//
////���HEHE�����壬����������
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


//�ļ�����

//���ļ�����,C���Կ����ṩ�ĺ�����ͷ�ļ�ʹ��<>
#include <stdio.h>

//�����ļ�����,�Զ���ĺ�����ͷ�ļ�ʹ��""
#include "add.h"

//<> �� ""����ͷ�ļ��ı��������ǣ����ҵĲ��Ե�����
//"" 1. �Լ��������ڵ�Ŀ¼�²��ң�2.�����1���Ҳ��������ڿ⺯����ͷ�ļ�Ŀ¼�²���
//<> ֱ��ȥ�⺯��ͷ�ļ����ڵ�Ŀ¼�²���


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}


//��ֹͷ�ļ����ظ�����
//"add.h"
//#pragma once//����1

//����2
//#ifndef __ADD_H__
//#define __ADD_H__
//
//int Add(int x, int y);
//
//#endif


