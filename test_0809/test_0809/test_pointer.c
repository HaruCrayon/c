#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*  ---------------   指针初阶   ----------------  */


//int main()
//{
//	int a = 10;//a占4个字节 
//	int* pa = &a;//拿到的是a的4个字节中第一个字节的地址
//	*pa = 20;
//
//	return 0;
//}


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));//8
//	printf("%d\n", sizeof(pc));//8
//	printf("%d\n", sizeof(pf));//8
//
//	return 0;
//}


//指针类型的意义
//1. 指针类型决定了：指针解引用的权限有多大
//2. 指针类型决定了，指针走一步，能走多远（步长）

//int main()
//{
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f   1个十六进制位对应4个二进制位
//	//11111111
//	//    8421
//
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	//char* pc = &a;
//	//*pc = 0;
//
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;

	printf("%p\n", p);
	printf("%p\n", p+1);

	printf("%p\n", pc);
	printf("%p\n", pc+1);
	
	return 0;
}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}


//野指针

//int main()
//{
//	//1.指针变量未初始化
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;//非法访问内存了
//	
//  //2.越界访问
//	/*int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}*/
//	
//	return 0;
//}


//3.指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//
//	return 0;
//}


//如何规避野指针

//int main()
//{
//	//1.指针初始化
//    //当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p = NULL;
// 
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//	
//    //2.小心指针越界
//	//C语言本身是不会检查数组的越界行为的
// 
//    //3.指针指向的空间释放,及时置NULL
//	//4.指针使用之前检查有效性
//	int* p = NULL;
//
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}


//指针运算
//指针+-整数
//指针-指针
//指针的关系运算

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[1]);
//	//指针-指针 得到的是 两个指针之间的元素个数
//
//	//指针和指针相减的前提：两个指针指向同一块空间
//
//	return 0;
//}


////求字符串长度的第3种方法
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//
//}
//
// 
//int main()
//{
//	int len = my_strlen("abcd");
//	printf("%d\n", len);
//
//	return 0;
//}


//指针和数组

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//
//	int* p = arr;//数组名
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//[] 是一个操作符  2和arr是两个操作数
//	//a+b
//	//b+a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//
//	//arr[2] --> *(arr+2)-->*(2+arr)-->2[arr]
//
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//2[arr] <==> *(2+arr)
// 
//	return 0;
//}


//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//
//	//ppa就是一个二级指针变量
//	int** ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
//
//	return 0;
//}


//指针数组
//int main()
//{
//	int arr[10];//整型数组 - 存放整型的数组就是整型数组
//	char ch[5];//字符数组 - 存放的是字符
// 
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整型指针的数组
//	char* pch[5];//字符指针的数组
//
//	return 0;
//}

