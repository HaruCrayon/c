#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//��̬�ڴ����


//��̬�ڴ溯�� 

//��̬�ڴ濪��
//  void* malloc(size_t size)  
//  void* calloc(size_t num, size_t size)
//��̬�ڴ���ͷźͻ��� void free(void* p) 
//�ڴ��С�ĵ��� void* realloc(void* p, size_t size)


//int main()
//{
//	//���迪��10�����͵Ŀռ�   10*sizeof(int)
//	
//	//int arr[10] = { 10 };//ջ��
//
//	//��̬�ڴ濪�� 
//	//void* p = malloc(10 * sizeof(int));//����
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");//main:xxxxxx
//		return 0;
//	}
//	//ʹ��
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
//	int* p = (int*)realloc(NULL, 40);//���﹦��������malloc������ֱ���ڶ�������40���ֽ�
//
//	return 0;
//}


//��̬�ڴ濪�ٳ����Ĵ���

//1. ��NULLָ��Ľ����ò���
//2. �Զ�̬���ٿռ��Խ�����
//3. ʹ��free�ͷŷǶ�̬���ٵĿռ�
//4. ʹ��free�ͷŶ�̬�ڴ��е�һ����
//5. ��ͬһ�鶯̬���ٵĿռ䣬����ͷ�
//6. ��̬���ٵĿռ������ͷ�-  �ڴ�й© - �Ƚ����ص�


//������

//��Ŀ1

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

//str����GetMemory������ʱ����ֵ���Σ�����GetMemory�������β�p��str��һ����ʱ������
//��GetMemory�����ڲ���̬����ռ�ĵ�ַ�������p�У�����Ӱ�����str��
//��GetMemory��������֮��str��Ȼ��NULL������strcpy��ʧ�ܡ�
// 
//��GetMemory��������֮���β�p���٣�ʹ�ö�̬���ٵ�100���ֽڴ����ڴ�й©���޷��ͷš�

//��1
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

//��2
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


//��Ŀ2

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

//GetMemory �����ڲ���������������ջ���ϴ�����
//���˺�����p����Ŀռ�ͻ����˲���ϵͳ
//���صĵ�ַû��ʵ�����壬���ͨ�����صĵ�ַ��ȥ�����ڴ���ǷǷ������ڴ档


//��������

struct S
{
	int n;//4
	int arr[];//��Сδ֪
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
	//����arr�Ĵ�С��10������
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	if (ps == NULL)
	{
		perror("malloc");
		return 0;
	}
	//ʹ��
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	//����
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//ʹ��
	for (i = 10; i < 20; i++)
	{
		ps->arr[i] = i;
	}

	//�ͷ�
	free(ps);
	ps = NULL;

	return 0;
}