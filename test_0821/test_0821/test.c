#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


/*  --------------------   ָ����ϰ��  -------------------  */


//sizeof(������) - ��������ʾ��������-���������������Ĵ�С
//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���е�����������������Ԫ�صĵ�ַ


//��ϰ1

//int main()
//{
//	//int a[] = { 1,2,3,4 };//4*4=16
// 
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4/8 a + 0 �ǵ�һ��Ԫ�صĵ�ַ��sizeof(a + 0)������ǵ�ַ�Ĵ�С
//	//printf("%d\n", sizeof(*a));//4  *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�صĴ�С
//	//printf("%d\n", sizeof(a + 1));//4/8 a + 1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a+1)������ǵ�ַ�Ĵ�С
//	//printf("%d\n", sizeof(a[1]));//4 - ������ǵڶ���Ԫ�صĴ�С
//
//	//printf("%d\n", sizeof(&a)); //4/8 - &a��Ȼ������ĵ�ַ������Ҳ�ǵ�ַ��sizeof(&a)�������һ����ַ�Ĵ�С
//	//printf("%d\n", sizeof(* &a));//16 - �����������Ĵ�С
//	////&a -- int(*p)[4] = &a;
//	//printf("%d\n", sizeof(&a + 1));//4/8 - &a + 1 ���������Ŀռ�ĵ�ַ
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//
//	
// //�ַ�����
//	//char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));//���ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//
//	//char arr[] = "abcdef";
// 
//	//[a b c d e f \0]
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//[a b c d e f \0] 
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8  char(*)[7]
//	//printf("%d\n", sizeof(&arr + 1));//4/8 
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
// 
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));
//	printf("%d\n", strlen(p + 1));
//	printf("%d\n", strlen(*p));
//	printf("%d\n", strlen(p[0]));
//	printf("%d\n", strlen(&p));
//	printf("%d\n", strlen(&p + 1));
//	printf("%d\n", strlen(&p[0] + 1));
//
//	//printf("%d\n", sizeof(p));
//	//printf("%d\n", sizeof(p + 1));
//	//printf("%d\n", sizeof(*p));
//	//printf("%d\n", sizeof(p[0]));
//	//printf("%d\n", sizeof(&p));
//	//printf("%d\n", sizeof(&p + 1));
//	//printf("%d\n", sizeof(&p[0] + 1));
//
//	return 0;
//}


//��ϰ2

//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4 - a[0][0] - �ǵ�һ�е�һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));// 4/8 ���ͣ�a[0]��Ϊ��������û�е�������sizeof�ڲ���
//	//Ҳûȡ��ַ,����a[0]���ǵ�һ�е�һ��Ԫ�صĵ�ַ��a[0]+1,���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - ���ͣ�*(a[0] + 1)�ǵ�һ�еڶ���Ԫ��
//
//	printf("%d\n", sizeof(a + 1));// 4/8 - ���ͣ�a�Ƕ�ά���������������û��ȡ��ַ
//	//Ҳû�е�������sizeof�ڲ�,����a�ͱ�ʾ��ά������Ԫ�صĵ�ַ��������һ�еĵ�ַ
//	//a + 1���Ƕ�ά����ڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16 ���ͣ�a+1�ǵڶ��еĵ�ַ������*��a+1����ʾ�ڶ���
//	//���Լ���ľ��ǵ�2�еĴ�С
//
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8 ���ͣ�a[0]�ǵ�һ�е���������
//	//&a[0]ȡ���ľ��ǵ�һ�еĵ�ַ,&a[0]+1 ���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  &a[0]+1 ���ǵڶ��еĵ�ַ
//	//*(&a[0]+1) ���ǵڶ��У����Լ�����ǵڶ��еĴ�С
//
//	printf("%d\n", sizeof(*a));//16 ���ͣ�a��Ϊ��ά�������������û��&��û�е�������sizeof�ڲ�
//	//a������Ԫ�صĵ�ַ������һ�еĵ�ַ������*a���ǵ�һ�У�������ǵ�һ�еĴ�С
//
//	printf("%d\n", sizeof(a[3]));//16 ���ͣ�a[3]��ʵ�ǵ����е�������������еĻ���
//	//������ʵ�����ڣ�Ҳ��ͨ�����ͼ����С��
//	printf("%d\n", sizeof(a[-1]));//16
//
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2   sizeof()�ڲ��ı��ʽ���������
//	printf("%d\n", s);//5
//
//	return 0;
//}


//��ϰ3

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//&a�������� int(*)[5]
//    printf("%d,%d", *(a + 1), *(ptr - 1));// 2,5
//
//    return 0;
//}


//��ϰ4

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;//p�ǽṹ��ָ�����
//����p ��ֵΪ0x100000�� ���±��ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�

//int main()
//{
//  //ָ�����;�����ָ�������
//	printf("%p\n", p + 0x1);//+20   0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//+1   0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//+4   0x100004
//	return 0;
//}


//��ϰ5

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };//   01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00  С���ֽ���
//                              //   |  |                                           |
//    int* ptr1 = (int*)(&a + 1);// &a ptr2                                         &a+1
//    //int* ptr2 = (int*)((int)a + 1);//?
//
//    //printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1] = *(ptr1-1)  04 00 00 00 ---> 0x00000004
//	                                   //*ptr2  00 00 00 02 ---> 0x02000000
//	
//	printf("%x\n", ptr1[-1]);//4
//	printf("%#x\n", ptr1[-1]);//0x4
//
//    return 0;
//}


//��ϰ6

//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ {1,3,5}
//	                                         // 1 3
//	                                         // 5 0
//	                                         // 0 0
//    int* p;
//    p = a[0];//a[0]�ǵ�һ�е�һά����������ʾ��Ԫ��1�ĵ�ַ
//    printf("%d", p[0]);// 1   p[0]=*(p+0)
//
//    return 0;
//}


//��ϰ7

//int main()
//{
//    int a[5][5];// [x x x x x][x x x x x][x x x x x][x x x x x][x x x x x]
//                //  |       |        |        |        |   |        |
//                //  p      p+1      p+2      p+3     p+4  &p[4][2]  &a[4][2]
//    int(*p)[4];
//    p = a;//a������������ʾ��ά������Ԫ��(����һ��)�ĵ�ַ�������� int(*)[5]
//          //p�������� int(*)[4]  
//          //ǿ������ת��
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //p[4]=*(p+4)
//    //p[4][2]=*(*(p+4)+2)
//
//    //ָ�����=����ָ��֮��Ԫ�صĸ��� -4
//    //10000000000000000000000000000100
//    //11111111111111111111111111111011
//    //11111111111111111111111111111100 ����
//    //0xFFFFFFFC       %p
//
//    return 0;
//}


//��ϰ8           

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));//*(aa + 1)=aa[1] �ڶ�������������ʾ��Ԫ��6�ĵ�ַ ���;���int*
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//
//    return 0;
//}


//��ϰ9

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}


//��ϰ10

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}

