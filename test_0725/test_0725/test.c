#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>  //system()
#include <string.h>  //strlen()  strcmp()
#include <Windows.h> //Sleep()
#include <math.h>    //sqrt()


/*     ѭ����while��for��do while     */


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//break;
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//��ϰ1.����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	
//	return 0;
//}


//��ϰ2.����1��+2��+3��+...+10!
//int main()
//{
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	
//	printf("%d", sum);
//
//	return 0;
//}


//��ϰ3.��һ�����������в���ĳһ��ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]> k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}


//��ϰ4.����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "welcome to here!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��1��
//		//system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//��ϰ5.ģ���û���¼���������������������
//int main()
//{
//	//������ȷ���������ַ���"123456"
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) //�����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��������������룡\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//
//	return 0;
//}


//��ϰ6.��������Ϸ
//void menu()
//{
//	printf("*******************\n");
//	printf("***** 1.play *************\n");
//	printf("***** 0.exit *************\n");
//	printf("*******************\n");
//}
//
//
//void game()
//{
//	//��������Ϸ��ʵ��
//	//1.���������
//	//rand()��������һ��0-32767֮�������
//	int ret = rand() % 100 + 1; //%100��������0-99��Ȼ��+1����Χ����1-100
//	//printf("%d\n", ret);
//	
//	//2.������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //time()����ʱ���
//
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}


////��ϰ7.�������������Ӵ�С���
//int main()
//{
//	//����
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//����˳��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//���-��С
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}


////��ϰ8.���������������������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;//�������Լ��max����m��n�Ľ�Сֵ
//	if (m < n)
//	{
//		max = m;
//	}
//	else
//	{
//		max = n;
//	}
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ����:%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//}

////շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d\n", n);
//	//��С������ = m*n/���Լ��;
//
//	return 0;
//}


////��ϰ9.��ӡ1000�굽2000��֮�������
//		//�ж�y�ǲ�������
//		//1. ��4���������ܱ�100����������
//		//2. �ܱ�400����������
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//
//	return 0;
//}


//��ϰ10.��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);//����
//		}
//	}
//
//	return 0;
//}

////�Ż�
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		int flag = 1;//����i������
//  	    //m = a*b��a��b��һ��������һ�������� <= ��ƽ��m��
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//i��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
//		}
//	}
//	printf("\n%d\n", count);
//
//	return 0;
//}


////��ϰ11.�ػ�����
////C�����ṩ��һ��������system()- ִ��ϵͳ�����
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺NO����ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "NO") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}