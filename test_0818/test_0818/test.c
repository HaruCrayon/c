#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


/*  ---------------------  5.函数指针  --------------------  */

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = {0};
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址
//
//	//函数指针 - 存放的是函数的地址
//	//&函数名 - 取到的是函数的地址
//	
//	int (*pf)(int, int) = &Add;//pf是一个函数指针变量
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add;//Add === pf
//
//	//int ret = (*pf)(2, 4);//1
//	int ret = pf(2, 4);//2
//	//int ret = Add(2, 4);//3
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//0x0012ff48 - int
//
//int main()
//{
//	(*(void(*)())0)();
//
//	//调用0地址处的函数
//	//该函数无参，返回类型是void
//	//1. void(*)() - 函数指针类型
//	//2. (void(*)())0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3. *(void(*)())0 - 对0地址进行了解引用操作
//	//4. (*(void(*)())0)() - 调用0地址处的函数
//	//<c陷阱和缺陷>
//
//	return 0;
//}


//void (* signal(int, void(*)(int) ) )(int);//写法1
//
////typedef - 对类型进行重定义
////typedef unsigned int uint;
//
//typedef void(*pfun_t)(int) ;//对void(*)(int)的函数指针类型重命名为pfun_t
//pfun_t signal(int, pfun_t);//写法2

//1. signal 和()先结合，说明signal是函数名
//2. signal函数的第一个参数的类型是int,第二个参数的类型是函数指针
// 该函数指针，指向一个参数类型为int,返回类型是void的函数
//3. signal函数的返回类型也是一个函数指针
// 该函数指针，指向一个参数类型为int,返回类型是void的函数
// signal是一个函数的声明


/*  ---------------------  6.函数指针数组  --------------------  */

//函数指针数组 - 存放函数指针的数组
// 
//整型指针 int*
//整型指针数组 int* arr[5];


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = {Add, Sub};//pfArr就是函数指针数组
//
//	return 0;
//}


//计算器

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************************\n");
	printf("**** 1. add    2. sub ****\n");
	printf("**** 3. mul    4. div ****\n");
	printf("****     0. exit      ****\n");
	printf("**************************\n");
}


//int main()
//{
//	//计算器-计算整型变量的加、减、乘、除
//    //a&b a^b a|b a>>b a<<b a>b
//
//	int input = 0;
//
//	do
//	{
//		int (*pfarr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret=%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//
//	return 0;
//}


/*  ---------------------  7.指向函数指针数组的指针  --------------------  */

//int arr[10];
//int 数组元素的类型
//int [10] 数组的类型

//int arr[5];//整形数组
//int(*p1)[5] = &arr;//p1是指向【整型数组】的指针
//
//int* arr[5];//整型指针数组
//int* (*p2)[5] = &arr;//p2是指向【整型指针数组】的指针
//
//int Add(int x, int y);
//int (*p1)(int, int) = &Add;//p1是【函数指针】
//int (* p2[4])(int, int);//p2是【函数指针数组】
//int (* (*p3)[4])(int, int) = &p2;//p3是指向【函数指针数组】的指针


/*  ---------------------  8.回调函数  --------------------  */

int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("输入两个操作数:>");
	scanf("%d %d", &x, &y);

	return pf(x, y);

}
//
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		int ret = 0;
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//
//		}
//
//	} while (input);
//
//	return 0;
//}


//冒泡排序

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//
//
//int main()
//{
//  //升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//
//	return 0;
//}


//qsort 库函数

//void qsort(void* base, //base中存放的是待排序数据中第一个对象的地址
//			 size_t num, //排序数据元素的个数
//			 size_t size,//排序数据中一个元素的大小，单位是字节
//			 int (*cmp)(const void* e1, const void* e2)//是用来比较待排序数据中的2个元素的函数
//			);


#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	//使用qsort函数排序整型数据
	int arr[] = { 1,3,5,7,9,2,4,6,8,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
}


struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//使用qsort函数排序结构体数据
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
	int sz = sizeof(s) / sizeof(s[0]);

	//按照年龄来排序
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}


void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


//模仿qsort实现一个冒泡排序的通用算法
void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	//	//冒泡排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test3()
{
	//使用bubble_sort函数排序整型数据
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
}


void test4()
{
	//使用bubble_sort函数排序结构体数据
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
	int sz = sizeof(s) / sizeof(s[0]);

	//按照年龄来排序
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}


int main()
{
	//test1();//使用qsort函数排序整型数据
	//test2();//使用qsort函数排序结构体数据
	//test3();//使用bubble_sort函数排序整型数据
	test4();//使用bubble_sort函数排序结构体数据

	return 0;
}
	
