#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

//#define MAX_PEO 100

#define DEFAULT_SZ 3
#define INC_SZ 2


//���͵Ķ���
//����������


typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//typedef struct Contact
//{
//	PeoInfo data[MAX_PEO];//�����ӽ������˵���Ϣ
//	int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
//}Contact;


typedef struct Contact
{
	PeoInfo* data;//ָ��̬����Ŀռ䣬���������ϵ�˵���Ϣ
	int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
	int capacity;//��¼��ǰͨѶ¼���������
}Contact;


//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//������ϵ��
void AddContact(Contact* pc);
//��ӡ������ϵ����Ϣ
void PrintContact(Contact* pc);
//ɾ��ָ����ϵ��
void DelContact(Contact* pc);
//����ָ����ϵ��
void SearchContact(Contact* pc);
//�޸�ָ����ϵ����Ϣ
void ModifyContact(Contact* pc);
//����
void CheckCapacity(Contact* pc);
//����ͨѶ¼
void DestoryContact(Contact* pc);
//������Ϣ���ļ�
void SaveContact(Contact* pc);
//�����ļ�
void LoadContact(Contact* pc);

