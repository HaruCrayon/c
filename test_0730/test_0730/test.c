#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

/*   ---------       函数      ----------- */

////练习1.求两个整型变量的最大值 
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//
//	return z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//传值调用
//	printf("max=%d\n", max);
//
//	return 0;
//}


////练习2.交换2个整型变量的值
////函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//void swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前:a=%d, b=%d\n", a, b);
//	swap(&a, &b);//传址调用
//	printf("交换后:a=%d, b=%d\n", a, b);
//
//	return 0;
//}


////练习3.打印100-200之间的素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}


////练习4.打印1000-2000的闰年
//int is_leap_year(int n)
//{
//	return (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0));
//	
//}
//
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


////练习5.实现一个整型有序数组的二分查找
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}


////练习6.每调用一次函数，num的值加一
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}


/*   ---------       函数的嵌套调用      ----------- */

//void test2()
//{
//	printf("hi");
//}
//
//
//int test1()
//{
//	test2();
//	return 0;
//}
//
//
//int main()
//{
//	test1();
//	return 0;
//}


/*   ---------       函数的链式访问      ----------- */

//int main()
//{
//	//printf("%d\n", strlen("abc"));
//
//	/*char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	printf("%s\n", strcpy(arr1, arr2));*/
//
//	//printf("%d", printf("%d", printf("%d", 56)));
//
//	return 0;
//}


/*   ---------       函数的声明和定义      ----------- */

////test.h 放置函数的声明
//int Add(int x, int y);
////test.c 函数的定义（函数的功能实现）
//int Add(int x, int y)
//{
//	return x + y;
//}


/*    ------------------       函数递归        ----------------*/

////练习1.接受一个（无符号）整型值，按照顺序打印它的每一位
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//	return 0;
//}


////练习2.编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcd";
//	printf("%d\n", my_strlen(arr));
//	//arr是数组名，传参传进去的是数组arr第一个元素'a'的内存地址
//
//	return 0;
//}


////练习3.求n的阶乘
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


////练习4.求第n个斐波那契数（不考虑溢出）。递归效率低，用迭代（循环）
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


/*    ------------------       函数作业题        ----------------*/

////练习1.打印乘法口诀表
//void print_table(n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}


////练习2.字符串逆序（递归实现）
//int my_strlen(char* str)
//{
//	int count = 0;
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
//////非递归方法
////void reverse_string(char* str)
////{
////	int left = 0;
////	int right = my_strlen(str) - 1;
////
////	while (left < right)
////	{
////		int tmp = str[left]; //*(str + left)
////		str[left] = str[right]; //*(str + right)
////		str[right] = tmp;
////		left++;
////		right--;
////	}
////}
//
//
////递归
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//
//	*(str + len - 1) = tmp;
//	
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);
//
//	return 0;
//}


////练习3.计算一个非负整数的每位之和
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}


////练习4.编写一个函数实现n的k次方，使用递归实现
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

