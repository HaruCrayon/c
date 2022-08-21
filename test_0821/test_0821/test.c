#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


/*  --------------------   指针练习题  -------------------  */


//sizeof(数组名) - 数组名表示整个数组-计算的是整个数组的大小
//&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址


//练习1

//int main()
//{
//	//int a[] = { 1,2,3,4 };//4*4=16
// 
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4/8 a + 0 是第一个元素的地址，sizeof(a + 0)计算的是地址的大小
//	//printf("%d\n", sizeof(*a));//4  *a是数组的第一个元素，sizeof(*a)计算的是第一个元素的大小
//	//printf("%d\n", sizeof(a + 1));//4/8 a + 1是第二个元素的地址，sizeof(a+1)计算的是地址的大小
//	//printf("%d\n", sizeof(a[1]));//4 - 计算的是第二个元素的大小
//
//	//printf("%d\n", sizeof(&a)); //4/8 - &a虽然是数组的地址，但是也是地址，sizeof(&a)计算的是一个地址的大小
//	//printf("%d\n", sizeof(* &a));//16 - 计算的是数组的大小
//	////&a -- int(*p)[4] = &a;
//	//printf("%d\n", sizeof(&a + 1));//4/8 - &a + 1 是数组后面的空间的地址
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//
//	
// //字符数组
//	//char arr[] = { 'a','b','c','d','e','f' };
//
//	//printf("%d\n", strlen(arr));//随机值
//	//printf("%d\n", strlen(arr + 0));//随机值
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//随机值
//	//printf("%d\n", strlen(&arr + 1));//随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
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
//	//printf("%d\n", strlen(&arr + 1));//随机值
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


//练习2

//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4 - a[0][0] - 是第一行第一个元素
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));// 4/8 解释：a[0]作为数组名并没有单独放在sizeof内部，
//	//也没取地址,所以a[0]就是第一行第一个元素的地址，a[0]+1,就是第一行第二个元素的地址
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - 解释：*(a[0] + 1)是第一行第二个元素
//
//	printf("%d\n", sizeof(a + 1));// 4/8 - 解释：a是二维数组的数组名，并没有取地址
//	//也没有单独放在sizeof内部,所以a就表示二维数组首元素的地址，即：第一行的地址
//	//a + 1就是二维数组第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));//16 解释：a+1是第二行的地址，所以*（a+1）表示第二行
//	//所以计算的就是第2行的大小
//
//	printf("%d\n", sizeof(&a[0] + 1));// 4/8 解释：a[0]是第一行的数组名，
//	//&a[0]取出的就是第一行的地址,&a[0]+1 就是第二行的地址
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  &a[0]+1 就是第二行的地址
//	//*(&a[0]+1) 就是第二行，所以计算的是第二行的大小
//
//	printf("%d\n", sizeof(*a));//16 解释：a作为二维数组的数组名，没有&，没有单独放在sizeof内部
//	//a就是首元素的地址，即第一行的地址，所以*a就是第一行，计算的是第一行的大小
//
//	printf("%d\n", sizeof(a[3]));//16 解释：a[3]其实是第四行的数组名（如果有的话）
//	//所以其实不存在，也能通过类型计算大小的
//	printf("%d\n", sizeof(a[-1]));//16
//
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2   sizeof()内部的表达式不参与计算
//	printf("%d\n", s);//5
//
//	return 0;
//}


//练习3

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//&a的类型是 int(*)[5]
//    printf("%d,%d", *(a + 1), *(ptr - 1));// 2,5
//
//    return 0;
//}


//练习4

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;//p是结构体指针变量
//假设p 的值为0x100000。 如下表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节

//int main()
//{
//  //指针类型决定了指针的运算
//	printf("%p\n", p + 0x1);//+20   0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//+1   0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//+4   0x100004
//	return 0;
//}


//练习5

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };//   01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00  小端字节序
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


//练习6

//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式 {1,3,5}
//	                                         // 1 3
//	                                         // 5 0
//	                                         // 0 0
//    int* p;
//    p = a[0];//a[0]是第一行的一维数组名，表示首元素1的地址
//    printf("%d", p[0]);// 1   p[0]=*(p+0)
//
//    return 0;
//}


//练习7

//int main()
//{
//    int a[5][5];// [x x x x x][x x x x x][x x x x x][x x x x x][x x x x x]
//                //  |       |        |        |        |   |        |
//                //  p      p+1      p+2      p+3     p+4  &p[4][2]  &a[4][2]
//    int(*p)[4];
//    p = a;//a是数组名，表示二维数组首元素(即第一行)的地址，类型是 int(*)[5]
//          //p的类型是 int(*)[4]  
//          //强制类型转换
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //p[4]=*(p+4)
//    //p[4][2]=*(*(p+4)+2)
//
//    //指针相减=两个指针之间元素的个数 -4
//    //10000000000000000000000000000100
//    //11111111111111111111111111111011
//    //11111111111111111111111111111100 补码
//    //0xFFFFFFFC       %p
//
//    return 0;
//}


//练习8           

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));//*(aa + 1)=aa[1] 第二行数组名，表示首元素6的地址 类型就是int*
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//
//    return 0;
//}


//练习9

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}


//练习10

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

