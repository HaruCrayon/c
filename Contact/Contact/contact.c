#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"


//������ʵ��


//void InitContact(Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}


void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}

	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;

	//�����ļ�
	LoadContact(pc);

}


void LoadContact(Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	//��ȡ�ļ�
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		CheckCapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}
	
	//�ر��ļ�
	fclose(pf);
	pf = NULL;

}


void CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("������ϵ��ʧ��");
			return;
		}
	}
}


//void AddContact(Contact* pc)
//{
//	if (pc->sz == MAX_PEO)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	//����һ���˵���Ϣ
//	printf("����������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("������绰:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("�������ַ:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;
//	printf("���ӳɹ�\n");
//}


void AddContact(Contact* pc)
{
	//��������
	CheckCapacity(pc);
	
	//����һ���˵���Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("���ӳɹ�\n");
}


void PrintContact(Contact* pc)
{
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}

}


static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}

	return -1;//�Ҳ���
}


void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	printf("����Ҫɾ������ϵ������:>");
	scanf("%s", name);
	//1.����Ҫɾ������: ��/��
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("��ϵ�˲����ڣ�����ɾ��\n");
		return;
	}
	//2.ɾ��
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�\n");
}


void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ���ҵ���ϵ������:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("%-10s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

		printf("%-10s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}


void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("����Ҫ�޸ĵ���ϵ������:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}

}


void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc -> capacity = 0;

}


void SaveContact(Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//д���ļ�
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

