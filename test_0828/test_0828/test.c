#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//动态内存管理


//动态内存函数 

//动态内存开辟
//  void* malloc(size_t size)  
//  void* calloc(size_t num, size_t size)
//动态内存的释放和回收 void free(void* p) 
//内存大小的调整 void* realloc(void* p, size_t size)


//int main()
//{
//	//假设开辟10个整型的空间   10*sizeof(int)
//	
//	//int arr[10] = { 10 };//栈区
//
//	//动态内存开辟 
//	//void* p = malloc(10 * sizeof(int));//堆区
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");//main:xxxxxx
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i]-->*(p+i)
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	//int* p = (int*)malloc(10 * sizeof(int));
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5 ;
//	}
//
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//这里功能类似于malloc，就是直接在堆区开辟40个字节
//
//	return 0;
//}


//动态内存开辟常见的错误

//1. 对NULL指针的解引用操作
//2. 对动态开辟空间的越界访问
//3. 使用free释放非动态开辟的空间
//4. 使用free释放动态内存中的一部分
//5. 对同一块动态开辟的空间，多次释放
//6. 动态开辟的空间忘记释放-  内存泄漏 - 比较严重的


//笔试题

//题目1

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//str传给GetMemory函数的时候是值传参，所以GetMemory函数的形参p是str的一份临时拷贝。
//在GetMemory函数内部动态申请空间的地址，存放在p中，不会影响外边str，
//当GetMemory函数返回之后，str依然是NULL。所以strcpy会失败。
// 
//当GetMemory函数返回之后，形参p销毁，使得动态开辟的100个字节存在内存泄漏。无法释放。

//改1
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改2
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//题目2

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//GetMemory 函数内部创建的数组是在栈区上创建的
//出了函数，p数组的空间就还给了操作系统
//返回的地址没有实际意义，如果通过返回的地址，去访问内存就是非法访问内存。


//柔性数组

struct S
{
	int n;//4
	int arr[];//大小未知
};

//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//4
//
//	return 0;
//}

int main()
{
	//期望arr的大小是10个整型
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	if (ps == NULL)
	{
		perror("malloc");
		return 0;
	}
	//使用
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	//增容
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//使用
	for (i = 10; i < 20; i++)
	{
		ps->arr[i] = i;
	}

	//释放
	free(ps);
	ps = NULL;

	return 0;
}