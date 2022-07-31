#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>  //system()
#include <string.h>  //strlen()  strcmp()
#include <Windows.h> //Sleep()
#include <math.h>    //sqrt()


/*     循环：while、for、do while     */


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//break;
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//练习1.计算n的阶乘
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	
//	return 0;
//}


//练习2.计算1！+2！+3！+...+10!
//int main()
//{
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	
//	printf("%d", sum);
//
//	return 0;
//}


//练习3.在一个有序数组中查找某一个值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]> k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}


//练习4.多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to here!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1秒
//		//system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//练习5.模拟用户登录场景，密码最多输入三次
//int main()
//{
//	//假设正确的密码是字符串"123456"
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) //两个字符串比较，不能使用==，应该使用strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序！\n");
//	}
//
//	return 0;
//}


//练习6.猜数字游戏
//void menu()
//{
//	printf("*******************\n");
//	printf("***** 1.play *************\n");
//	printf("***** 0.exit *************\n");
//	printf("*******************\n");
//}
//
//
//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//	//rand()函数返回一个0-32767之间的数字
//	int ret = rand() % 100 + 1; //%100的余数是0-99，然后+1，范围就是1-100
//	//printf("%d\n", ret);
//	
//	//2.猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //time()返回时间戳
//
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}


////练习7.将三个整数按从大到小输出
//int main()
//{
//	//输入
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//调整顺序
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出-大到小
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}


////练习8.给定两个数，求这两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;//假设最大公约数max就是m和n的较小值
//	if (m < n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是:%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

////辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//	//最小公倍数 = m*n/最大公约数;
//
//	return 0;
//}


////练习9.打印1000年到2000年之间的闰年
//		//判断y是不是闰年
//		//1. 被4整除，不能被100整除是闰年
//		//2. 能被400整除是闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//
//	return 0;
//}


//练习10.打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);//素数
//		}
//	}
//
//	return 0;
//}

////优化
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		int flag = 1;//假设i是素数
//  	    //m = a*b，a和b中一定至少有一个数字是 <= 开平方m的
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//素数
//		}
//	}
//	printf("\n%d\n", count);
//
//	return 0;
//}


////练习11.关机程序
////C语言提供了一个函数：system()- 执行系统命令的
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：NO，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "NO") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}