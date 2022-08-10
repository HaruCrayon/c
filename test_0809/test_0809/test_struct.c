#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//	struct B sb;
//} s1, s2; //s1和s2也是结构体变量
////s1,s2是全局变量
//
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { "张三",30,"202208",{'w',5,3.14} };//对象
//	//printf("%s\n", s.name);
//	//printf("%c\n", s.sb.c);
//
//	struct Stu* ps = &s;
//	//printf("%s\n", (*ps).name);
//	//printf("%c\n", (*ps).sb.c);
//
//	printf("%s\n", ps->name);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}


//结构体传参
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//	struct B sb;
//};
//
//
//void print1(struct Stu t)
//{
//	printf("%s %d %s %c %d %lf\n", t.name, t.age, t.id, t.sb.c, t.sb.s, t.sb.d);
//
//}
//
//
//void print2(struct Stu* ps)
//{
//	printf("%s %d %s %c %d %lf\n", ps->name, ps->age, ps->id, ps->sb.c, ps->sb.s, ps->sb.d);
//
//}
//
//
//int main()
//{
//	struct Stu s = { "张三",30,"202208",{'w',5,3.14} };
//	//写一个函数打印s 的内容
//	print1(s);//传值调用
//	print2(&s);//传址调用
//
//	return 0;
//}

