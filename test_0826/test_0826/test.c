#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//�Զ������ͣ��ṹ�塢ö�١�����


//�ṹ������

struct Book
{
	char name[20];
	int price;
	char id[10];
} b4, b5, b6; //b4, b5, b6��ȫ�ֱ���


//int main()
//{
//	//b1, b2, b3�Ǿֲ�����
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//
//	return 0;
//}


//�����ṹ������
//ֻ��ʹ��һ��
struct
{
	char c;
	int i;
	char ch;
	double d;
} s;

struct
{
	char c;
	int i;
	char ch;
	double d;
}* ps;


//int main()
//{
//	ps = &s;//�� ������
//	
//	return 0;
//}


//�ṹ���������
struct A
{
	int i;
	char c;
};

struct B
{
	char c;
	struct A sa;
	double d;
};


//struct Node
//{
//	int data;
//	struct Node* next;
//};

typedef struct Node
{
	int data;
	struct Node* next;
}Node;


//�ṹ������Ķ���ͳ�ʼ��
struct S
{
	char c;
	int i;
};

struct P
{
	double d;
	struct S s;
	char c;
};


//int main()
//{
//	//struct S s1 = {'x', 20};
//	struct P p = { 3.14, {'w', 100},'q' };
//	//. 
//	//->
//	printf("%lf %c %d %c\n", p.d, p.s.c, p.s.i, p.c);
//
//	return 0;
//}


//�ṹ���ڴ����

struct S1
{
	char c1;
	int i;
	char c2;
};

struct S2
{
	char c1;
	int i;
	double d;//8
};

struct S3
{
	char c1;
	char c2;
	int i;
};

struct S4
{
	double d;
	char c;
	int i;
};

struct S5
{
	char c1;
	struct S4 s4;
	double d;
};


//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	struct S5 s5 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(s3));
//	printf("%d\n", sizeof(s4));
//	printf("%d\n", sizeof(s5));
//
//	return 0;
//}


//����ƽṹ���ʱ�򣬼�Ҫ������룬��Ҫ��ʡ�ռ�
//1.��ռ�ÿռ�С�ĳ�Ա����������һ��
//2.�޸�Ĭ�϶�����

//Ĭ�϶�������8
//��Ĭ�϶�������Ϊ2

#pragma pack(2)
struct S6
{
	char c1;
	int i;
	char c2;
};
#pragma pack()

#pragma pack(1)
struct S7
{
	char c1;
	int i;
	char c2;
};
#pragma pack()

//int main()
//{
//	printf("%d\n", sizeof(struct S7));
//
//	return 0;
//}


//offsetof��
//�ṹ����ĳ����������׵�ַ��ƫ��

#include <stddef.h>

struct S8
{
	char c1;
	int i;
	char c2;
};

//int main()
//{
//	printf("%d\n", offsetof(struct S8, c1));
//	printf("%d\n", offsetof(struct S8, i));
//	printf("%d\n", offsetof(struct S8, c2));
//
//	return 0;
//}


//�ṹ�崫��
//Ҫ���ṹ��ĵ�ַ

struct Stu
{
	char name[20];
	int age;
};

void print_stu(struct Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
}

//int main()
//{
//	struct Stu s = { "zhang",20 };
//	print_stu(&s);
//
//	return 0;
//}


//�ṹ��ʵ��λ��

//�Ա� - 3    ����bitλ�����Ա�ʾ�����Ա�
//00 ��
//01 Ů
//10 ����
//11

struct C
{
	//4���ֽ� - 32bit
	int _a : 2;//_a ��Առ2��bitλ
	int _b : 5;//_b ��Առ5��bitλ
	int _c : 10;//_c ��Առ10��bitλ
	//15
	//4���ֽ� - 32bit
	int _d : 30;//_d ��Առ30��bitλ
};

//int main()
//{
//	printf("%d\n", sizeof(struct C));//8
//
//	return 0;
//}


//�ռ�����ο��ٵ�?

struct X
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

//int main()
//{
//	struct X x = { 0 };// 0 0000 000     000 00000      0000 0000
//	                   // 0 1100 010     000 00011      0000 0100
//					   // 0110 0010      0000 0011      0000 0100
//	                   //  6    2         0    3         0    4      ʮ������չʾ
//
//	x.a = 10;//1010    010
//	x.b = 12;//1100   1100
//	x.c = 3;//0011   00011
//	x.d = 4;//0100    0100
//
//	return 0;
//}


//ö������

enum Color
{
	RED=3,
	GREEN,
	BLUE
};

//int main()
//{
//	enum Color c = BLUE;
//	//printf("%d\n", sizeof(c));//4
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}


//ʹ��ö�����͵��ŵ�
//��ǿ����Ŀɶ��ԺͿ�ά����
void menu()
{
	printf("*****************************\n");
	printf("****  1. add    2. sub  *****\n");
	printf("****  3. mul    4. div  *****\n");
	printf("****  0. exit          *****\n");
	printf("*****************************\n");
}

enum Option
{
	EXIT,//0
	ADD,//1
	SUB,//2
	MUL,//3
	DIV//4
};

//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			printf("�ӷ�\n");
//			break;
//		case SUB:
//			printf("����\n");
//			break;
//		case MUL:
//			printf("�˷�\n");
//			break;
//		case DIV:
//			printf("����\n");
//			break;
//		case EXIT:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("���������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//������(������)

//union Un
//{
//	char c;
//	int i;
//};

//int main()
//{
//	union Un u = {10};
//	u.i = 1000;
//	u.c = 100;
//
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.c));
//	//printf("%p\n", &(u.i));
//
//	//printf("%d\n", sizeof(u));//4
//
//	return 0;
//}


//�жϵ�ǰ������Ĵ�С�˴洢

//int check_sys()
//{
//	int a = 1;
//	if ((*(char*)&a) == 1)
//	{
//		return 1;//С��
//	}
//	else
//	{
//		return 0;//���
//	}
//}


int check_sys()
{
	union U
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
	//����1 ����С��
	//����0 ���Ǵ��
}


//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}


//�������С�ļ���

//union Un
//{
//	char a[5];//1    5
//	//int i;//4
//	char c;//1
//};


union Un
{
	short s[5];//2  10
	int a;//4
};


int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	return 0;
}


