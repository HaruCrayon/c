#define _CRT_SECURE_NO_WARNINGS

#include "contact.h"


//通讯录-静态版本
//1.通讯录中能够存放100个人的信息
//每个人的信息：名字+年龄+性别+电话+地址
//2. 增加人的信息
//3. 删除指定人的信息
//4. 修改指定人的信息
//5. 查找指定人的信息


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

	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
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
			printf("退出程序\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;

		}

	} while (input);

	return 0;
}