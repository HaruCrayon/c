#pragma once

#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX_PEO 100


//类型的定义
//函数的声明


typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


typedef struct Contact
{
	PeoInfo data[MAX_PEO];//存放添加进来的人的信息
	int sz;//记录当前通讯录中有效信息的个数
}Contact;


//初始化通讯录
void InitContact(Contact* pc);
//增加联系人
void AddContact(Contact* pc);
//打印所有联系人信息
void PrintContact(Contact* pc);
//删除指定联系人
void DelContact(Contact* pc);
//查找指定联系人
void SearchContact(Contact* pc);
//修改指定联系人信息
void ModifyContact(Contact* pc);



