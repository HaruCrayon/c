#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//文件的打开和关闭

//int main()
//{
//	//打开文件
//	//FILE* pf = fopen("text.dat", "r");
//	FILE* pf = fopen("C:\\code_gitee\\c_language\\test_0829\\text.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读写文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//文件的顺序读写

//输入/读取  fgetc()  fgets()  fscanf()   fread()
//输出/写入  fputc()  fputs()  fprintf()  fwrite()

//c语言程序，只要运行起来，就默认打开了3个流，都是FILE*类型
//stdin 标准输入流 -屏幕 
//stdout 标准输出流 -屏幕
//stderr 标准错误流 -屏幕

//FILE* pf 文件流 -文件


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("text.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写入文件
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//  //输出到屏幕
//	fputc('h', stdout);
//	fputc('e', stdout);
//	fputc('l', stdout);
//	fputc('l', stdout);
//	fputc('o', stdout);
//
//	return 0;
//}


//使用fgetc从文件流读取
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("text.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读取文件
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//使用fgetc从标准输入流读取
//int main()
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("text.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件-按照行来写
//	fputs("abcdef\n", pf);
//	fputs("stxyz\n", pf);
//	
//  //关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("text.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件 -按行
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//对格式化的数据进行写文件
//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};

//int main()
//{
//	struct S s = { "abcd",20,3.14f };
//
//	FILE* pf = fopen("text.dat", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//写文件 
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("text.dat", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//读文件 
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//	fprintf(stdout, "%s %d %f\n", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//二进制的读写

//int main()
//{
//	struct S s = { "abcdef",20,3.14f };
//
//	FILE* pf = fopen("text.dat", "w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//写文件 
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("text.dat", "r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//读文件 
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//sprintf()  sscanf()

//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//
//int main()
//{
//	struct S s = { "hello", 20, 5.5f };
//	struct S tmp = { 0 };
//
//	char buf[100] = {0};
//	//sprintf 把一个格式化的数据，转换成字符串
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//
//	//sscanf 从buf字符串中还原出一个结构体数据
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}


//文件的随机读写
//fseek()  ftell()  rewind()

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件   abcdef
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	//调整文件指针
//	fseek(pf,2,SEEK_CUR);//SEEK_END  SEEK_SET
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//文件指针当前相对起始位置偏移量
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//让文件指针回到起始位置
//	rewind(pf);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//文本文件和二进制文件

//int main()
//{
//	int a = 10000;
//	//10000                                    十进制
//	//0000 0000 0000 0000 0010 0111 0001 0000  二进制
//	//00 00 27 10                              十六进制
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&a, sizeof(int), 1, pf);
//	//10 27 00 00  小端字节序
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//判断文件读取结束的原因 feof()

//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (NULL == pfread)
//	{
//		return 1;
//	}
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (NULL == pfwrite)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//	//读写文件
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//	//判断文件读取结束的原因
//	if (feof(pfread))
//	{
//		printf("遇到文件结束标志，文件正常结束\n");
//
//	}
//	else if (ferror)
//	{
//		printf("文件读取失败结束\n");
//	}
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}


//文件缓冲区

#include <windows.h>

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区

	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）

	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);

	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;

	return 0;
}


