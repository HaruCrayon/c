#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

/*   ---------       ����      ----------- */

////��ϰ1.���������ͱ��������ֵ 
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
//	int max = get_max(a, b);//��ֵ����
//	printf("max=%d\n", max);
//
//	return 0;
//}


////��ϰ2.����2�����ͱ�����ֵ
////�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
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
//	printf("����ǰ:a=%d, b=%d\n", a, b);
//	swap(&a, &b);//��ַ����
//	printf("������:a=%d, b=%d\n", a, b);
//
//	return 0;
//}


////��ϰ3.��ӡ100-200֮�������
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


////��ϰ4.��ӡ1000-2000������
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


////��ϰ5.ʵ��һ��������������Ķ��ֲ���
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
//		printf("�Ҳ���\n");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}


////��ϰ6.ÿ����һ�κ�����num��ֵ��һ
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


/*   ---------       ������Ƕ�׵���      ----------- */

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


/*   ---------       ��������ʽ����      ----------- */

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


/*   ---------       �����������Ͷ���      ----------- */

////test.h ���ú���������
//int Add(int x, int y);
////test.c �����Ķ��壨�����Ĺ���ʵ�֣�
//int Add(int x, int y)
//{
//	return x + y;
//}


/*    ------------------       �����ݹ�        ----------------*/

////��ϰ1.����һ�����޷��ţ�����ֵ������˳���ӡ����ÿһλ
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


////��ϰ2.��д��������������ʱ���������ַ����ĳ���
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
//	//arr�������������δ���ȥ��������arr��һ��Ԫ��'a'���ڴ��ַ
//
//	return 0;
//}


////��ϰ3.��n�Ľ׳�
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


////��ϰ4.���n��쳲�����������������������ݹ�Ч�ʵͣ��õ�����ѭ����
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


/*    ------------------       ������ҵ��        ----------------*/

////��ϰ1.��ӡ�˷��ھ���
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


////��ϰ2.�ַ������򣨵ݹ�ʵ�֣�
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
//////�ǵݹ鷽��
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
////�ݹ�
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
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);
//
//	return 0;
//}


////��ϰ3.����һ���Ǹ�������ÿλ֮��
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


////��ϰ4.��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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

