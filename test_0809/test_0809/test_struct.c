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
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//	struct B sb;
//} s1, s2; //s1��s2Ҳ�ǽṹ�����
////s1,s2��ȫ�ֱ���
//
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { "����",30,"202208",{'w',5,3.14} };//����
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


//�ṹ�崫��
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
//	struct Stu s = { "����",30,"202208",{'w',5,3.14} };
//	//дһ��������ӡs ������
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//
//	return 0;
//}

