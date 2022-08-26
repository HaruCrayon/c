#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//自定义类型：结构体、枚举、联合


//结构体类型

struct Book
{
	char name[20];
	int price;
	char id[10];
} b4, b5, b6; //b4, b5, b6是全局变量


//int main()
//{
//	//b1, b2, b3是局部变量
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//
//	return 0;
//}


//匿名结构体类型
//只能使用一次
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
//	ps = &s;//× 不可行
//	
//	return 0;
//}


//结构体的自引用
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


//结构体变量的定义和初始化
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


//结构体内存对齐

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


//在设计结构体的时候，既要满足对齐，又要节省空间
//1.让占用空间小的成员尽量集中在一起
//2.修改默认对齐数

//默认对齐数是8
//把默认对齐数改为2

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


//offsetof宏
//结构体中某变量相对于首地址的偏移

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


//结构体传参
//要传结构体的地址

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


//结构体实现位段

//性别 - 3    两个bit位就足以表示所有性别
//00 男
//01 女
//10 保密
//11

struct C
{
	//4个字节 - 32bit
	int _a : 2;//_a 成员占2个bit位
	int _b : 5;//_b 成员占5个bit位
	int _c : 10;//_c 成员占10个bit位
	//15
	//4个字节 - 32bit
	int _d : 30;//_d 成员占30个bit位
};

//int main()
//{
//	printf("%d\n", sizeof(struct C));//8
//
//	return 0;
//}


//空间是如何开辟的?

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
//	                   //  6    2         0    3         0    4      十六进制展示
//
//	x.a = 10;//1010    010
//	x.b = 12;//1100   1100
//	x.c = 3;//0011   00011
//	x.d = 4;//0100    0100
//
//	return 0;
//}


//枚举类型

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


//使用枚举类型的优点
//增强代码的可读性和可维护性
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			printf("加法\n");
//			break;
//		case SUB:
//			printf("减法\n");
//			break;
//		case MUL:
//			printf("乘法\n");
//			break;
//		case DIV:
//			printf("除法\n");
//			break;
//		case EXIT:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//联合体(共用体)

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


//判断当前计算机的大小端存储

//int check_sys()
//{
//	int a = 1;
//	if ((*(char*)&a) == 1)
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
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
	//返回1 就是小端
	//返回0 就是大端
}


//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


//联合体大小的计算

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


