#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*  ---------------   ָ�����   ----------------  */


//int main()
//{
//	int a = 10;//aռ4���ֽ� 
//	int* pa = &a;//�õ�����a��4���ֽ��е�һ���ֽڵĵ�ַ
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


//ָ�����͵�����
//1. ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2. ָ�����;����ˣ�ָ����һ�������߶�Զ��������

//int main()
//{
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f   1��ʮ������λ��Ӧ4��������λ
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


//Ұָ��

//int main()
//{
//	//1.ָ�����δ��ʼ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ���
//	
//  //2.Խ�����
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


//3.ָ��ָ��Ŀռ��ͷ�
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


//��ι��Ұָ��

//int main()
//{
//	//1.ָ���ʼ��
//    //��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;
// 
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//	
//    //2.С��ָ��Խ��
//	//C���Ա����ǲ����������Խ����Ϊ��
// 
//    //3.ָ��ָ��Ŀռ��ͷ�,��ʱ��NULL
//	//4.ָ��ʹ��֮ǰ�����Ч��
//	int* p = NULL;
//
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}


//ָ������
//ָ��+-����
//ָ��-ָ��
//ָ��Ĺ�ϵ����

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
//	//ָ��-ָ�� �õ����� ����ָ��֮���Ԫ�ظ���
//
//	//ָ���ָ�������ǰ�᣺����ָ��ָ��ͬһ��ռ�
//
//	return 0;
//}


////���ַ������ȵĵ�3�ַ���
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


//ָ�������

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
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
//	int* p = arr;//������
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//[] ��һ��������  2��arr������������
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


//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//
//	//ppa����һ������ָ�����
//	int** ppa = &pa;//paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
//
//	return 0;
//}


//ָ������
//int main()
//{
//	int arr[10];//�������� - ������͵����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
// 
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ�������
//	char* pch[5];//�ַ�ָ�������
//
//	return 0;
//}

