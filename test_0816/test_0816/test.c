#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


//��ϰ��

//��ϰ1.
//int i;//i��ȫ�ֱ���������ʼ����Ĭ����0
//int main()
//{
//    i--;//-1
//    //sizeof���������������Ľ����������unsigned int
//    if (i > sizeof(i))//i���з������ͣ����޷������ͱȽ�ʱ����ת��Ϊ�޷�������
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}


//��ϰ2.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//��ϰ3.
//��0-100000֮�����е�������
//��������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//	    //1.����i��λ�� n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//
//		//2.����i�ĸ�λ���ֵ�n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//	
//	return 0;
//}


//��ϰ4. ��ӡ����

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//
//	//�ϲ���
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//NULL
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//�²���
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//NULL
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//��ϰ5.
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ�����ʵ�֣���

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	//��ʼ�û�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//
//	}
//	printf("%d\n", total);
//
//	return 0;
//}


//��ϰ6.
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//		//��ǰ������һ��ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}


//��ϰ7.���ݴ洢
//int main()
//{
//	//unsigned char 0~255
//
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100
//
//	unsigned char c = 0;
//
//	//a��b��������
//	//00000000000000000000000011001000  a
//	//00000000000000000000000001100100  b
//	//00000000000000000000000100101100  a+b
//
//	c = a + b;
//	//00101100
//	//00000000000000000000000000101100
//	//
//	printf("%d %d", a + b, c);
//	//              300   44
//	return 0;
//}


//��ϰ8.
//��32λ���ģʽ�������ϱ���b���ڣ� ��
//
//��Ŀ���ݣ�
//A.0x00
//B.0x12
//C.0x34
//D.0x1234
//
//int main()
//{
//	unsigned int a = 0x1234; //00 00 12 34
//	unsigned char b = *(unsigned char*)&a;
//
//	return 0;
//}


//��ϰ9.�������
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1

//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//��ϰ10.�ҳ�����
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//
//	return 0;
//}

