#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//�ļ��Ĵ򿪺͹ر�

//int main()
//{
//	//���ļ�
//	//FILE* pf = fopen("text.dat", "r");
//	FILE* pf = fopen("C:\\code_gitee\\c_language\\test_0829\\text.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//��д�ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�ļ���˳���д

//����/��ȡ  fgetc()  fgets()  fscanf()   fread()
//���/д��  fputc()  fputs()  fprintf()  fwrite()

//c���Գ���ֻҪ������������Ĭ�ϴ���3����������FILE*����
//stdin ��׼������ -��Ļ 
//stdout ��׼����� -��Ļ
//stderr ��׼������ -��Ļ

//FILE* pf �ļ��� -�ļ�


//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("text.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д���ļ�
//	fputc('h', pf);
//	fputc('e', pf);
//	fputc('l', pf);
//	fputc('l', pf);
//	fputc('o', pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//  //�������Ļ
//	fputc('h', stdout);
//	fputc('e', stdout);
//	fputc('l', stdout);
//	fputc('l', stdout);
//	fputc('o', stdout);
//
//	return 0;
//}


//ʹ��fgetc���ļ�����ȡ
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("text.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//��ȡ�ļ�
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//ʹ��fgetc�ӱ�׼��������ȡ
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
//	//д�ļ�-��������д
//	fputs("abcdef\n", pf);
//	fputs("stxyz\n", pf);
//	
//  //�ر��ļ�
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
//	//��ȡ�ļ� -����
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�Ը�ʽ�������ݽ���д�ļ�
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
//	//д�ļ� 
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
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
//	//���ļ� 
//	fscanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//	fprintf(stdout, "%s %d %f\n", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�����ƵĶ�д

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
//	//д�ļ� 
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�ر��ļ�
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
//	//���ļ� 
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
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
//	//sprintf ��һ����ʽ�������ݣ�ת�����ַ���
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//
//	//sscanf ��buf�ַ����л�ԭ��һ���ṹ������
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//
//	return 0;
//}


//�ļ��������д
//fseek()  ftell()  rewind()

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�   abcdef
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	//�����ļ�ָ��
//	fseek(pf,2,SEEK_CUR);//SEEK_END  SEEK_SET
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ļ�ָ�뵱ǰ�����ʼλ��ƫ����
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�ı��ļ��Ͷ������ļ�

//int main()
//{
//	int a = 10000;
//	//10000                                    ʮ����
//	//0000 0000 0000 0000 0010 0111 0001 0000  ������
//	//00 00 27 10                              ʮ������
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&a, sizeof(int), 1, pf);
//	//10 27 00 00  С���ֽ���
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�ж��ļ���ȡ������ԭ�� feof()

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
//	//��д�ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//	//�ж��ļ���ȡ������ԭ��
//	if (feof(pfread))
//	{
//		printf("�����ļ�������־���ļ���������\n");
//
//	}
//	else if (ferror)
//	{
//		printf("�ļ���ȡʧ�ܽ���\n");
//	}
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}


//�ļ�������

#include <windows.h>

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������

	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�

	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);

	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;

	return 0;
}


