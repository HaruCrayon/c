#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


/*  ---------------------  5.����ָ��  --------------------  */

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
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ
//
//	//����ָ�� - ��ŵ��Ǻ����ĵ�ַ
//	//&������ - ȡ�����Ǻ����ĵ�ַ
//	
//	int (*pf)(int, int) = &Add;//pf��һ������ָ�����
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
//	//����0��ַ���ĺ���
//	//�ú����޲Σ�����������void
//	//1. void(*)() - ����ָ������
//	//2. (void(*)())0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3. *(void(*)())0 - ��0��ַ�����˽����ò���
//	//4. (*(void(*)())0)() - ����0��ַ���ĺ���
//	//<c�����ȱ��>
//
//	return 0;
//}


//void (* signal(int, void(*)(int) ) )(int);//д��1
//
////typedef - �����ͽ����ض���
////typedef unsigned int uint;
//
//typedef void(*pfun_t)(int) ;//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//pfun_t signal(int, pfun_t);//д��2

//1. signal ��()�Ƚ�ϣ�˵��signal�Ǻ�����
//2. signal�����ĵ�һ��������������int,�ڶ��������������Ǻ���ָ��
// �ú���ָ�룬ָ��һ����������Ϊint,����������void�ĺ���
//3. signal�����ķ�������Ҳ��һ������ָ��
// �ú���ָ�룬ָ��һ����������Ϊint,����������void�ĺ���
// signal��һ������������


/*  ---------------------  6.����ָ������  --------------------  */

//����ָ������ - ��ź���ָ�������
// 
//����ָ�� int*
//����ָ������ int* arr[5];


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
//	int (*pfArr[2])(int, int) = {Add, Sub};//pfArr���Ǻ���ָ������
//
//	return 0;
//}


//������

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
//	//������-�������ͱ����ļӡ������ˡ���
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret=%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//	} while (input);
//
//	return 0;
//}


/*  ---------------------  7.ָ����ָ�������ָ��  --------------------  */

//int arr[10];
//int ����Ԫ�ص�����
//int [10] ���������

//int arr[5];//��������
//int(*p1)[5] = &arr;//p1��ָ���������顿��ָ��
//
//int* arr[5];//����ָ������
//int* (*p2)[5] = &arr;//p2��ָ������ָ�����顿��ָ��
//
//int Add(int x, int y);
//int (*p1)(int, int) = &Add;//p1�ǡ�����ָ�롿
//int (* p2[4])(int, int);//p2�ǡ�����ָ�����顿
//int (* (*p3)[4])(int, int) = &p2;//p3��ָ�򡾺���ָ�����顿��ָ��


/*  ---------------------  8.�ص�����  --------------------  */

int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("��������������:>");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//
//		}
//
//	} while (input);
//
//	return 0;
//}


//ð������

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
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
//  //����
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


//qsort �⺯��

//void qsort(void* base, //base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//			 size_t num, //��������Ԫ�صĸ���
//			 size_t size,//����������һ��Ԫ�صĴ�С����λ���ֽ�
//			 int (*cmp)(const void* e1, const void* e2)//�������Ƚϴ����������е�2��Ԫ�صĺ���
//			);


#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	//ʹ��qsort����������������
	int arr[] = { 1,3,5,7,9,2,4,6,8,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
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
	//ʹ��qsort��������ṹ������
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
	int sz = sizeof(s) / sizeof(s[0]);

	//��������������
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
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


//ģ��qsortʵ��һ��ð�������ͨ���㷨
void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	//	//ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test3()
{
	//ʹ��bubble_sort����������������
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}


void test4()
{
	//ʹ��bubble_sort��������ṹ������
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };
	int sz = sizeof(s) / sizeof(s[0]);

	//��������������
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}


int main()
{
	//test1();//ʹ��qsort����������������
	//test2();//ʹ��qsort��������ṹ������
	//test3();//ʹ��bubble_sort����������������
	test4();//ʹ��bubble_sort��������ṹ������

	return 0;
}
	
