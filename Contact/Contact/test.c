#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"


//ͨѶ¼-��̬�汾
//1.ͨѶ¼���ܹ����100���˵���Ϣ
//ÿ���˵���Ϣ������+����+�Ա�+�绰+��ַ
//2. �����˵���Ϣ
//3. ɾ��ָ���˵���Ϣ
//4. �޸�ָ���˵���Ϣ
//5. ����ָ���˵���Ϣ


void menu()
{
	printf("******************************************\n");
	printf("**********  0.exit    1.add     **********\n");
	printf("**********  2.del     3.modify  **********\n");
	printf("**********  4.search  5.print   **********\n");
	printf("******************************************\n");
}


enum Option
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	PRINT

};


int main()
{
	int input = 0;

	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;

		}

	} while (input);

	return 0;
}