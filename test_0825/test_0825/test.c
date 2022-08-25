#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>


//字符串函数
//求字符串长度 strlen
//长度不受限制的字符串函数 strcpy  strcat  strcmp
//长度受限制的字符串函数 strncpy  strncat  strncmp
//字符串查找 strstr  strtok
//错误信息报告 strerror

//字符分类函数 iscntrl  isspace  isdigit  isxdigit  islower  isupper  isalpha  isalnum  ispunct  isgraph  isprint
//字符转换函数 tolower  toupper

//内存函数 memcpy  memmove  memset  memcmp


//strlen() 求字符串长度
int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str++)
	{
		count++;
	}

	return count;
}


//int main()
//{
//	char arr[] = "abcd";
//	//char arr[] = { 'a','b','c','d'};
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//strcpy() 字符串拷贝
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;

	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}


//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "qwer";
//
//	//my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//strcat() 字符串追加(连接)
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//1.找目标字符串中的\0
	while (*dest)
	{
		dest++;
	}
	//2.追加源字符串，包含\0
	while (*dest++ = *src++)
	{
		;
	}

	return ret;//返回的目标空间的起始地址
}


//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	//my_strcat(arr1, arr2);
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);//?
//	printf("%s\n", arr);
// 
//	return 0;
//}


//strcmp() 字符串比较大小
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}

	return *s1 - *s2;
}


//int main()
//{
//	char* p = "abce";
//	char* q = "abcdef";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q");
//	}
//	else
//	{
//		printf("p==q");
//	}
//
//	return 0;
//}


//strncpy()

//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "qwer";
//
//	//strcpy(arr1, arr2);
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strncat()

//int  main()
//{
//	char arr1[20] = "hello ";
//	               //hello wor\0
//	char arr2[] = "world";
//
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//strncmp()

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	
//	int ret = strncmp(p, q, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}


//strstr() 字符串查找
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;

	if (*str2 == '\0')
	{
		return (char*)str1;
	}

	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		//abcdef
		//  cdef
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}

	return NULL;
}


//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	//在arr1中查找是否包含arr2数组
//	char* ret = my_strstr(arr1, arr2);
//
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//
//	return 0;
//}


//strtok() 字符串切割

//int main()
//{
//	char arr[] = "lee123@qq.com";
//	char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//strerror() 错误信息报告 

//使用库函数时
//调用库函数失败时，都会设置错误码
//全局的错误码
//int errno;

#include <errno.h>

//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));*/
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//
//		return 1;
//	}
//	//...
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//字符分类函数

#include <ctype.h>

//int main()
//{
//	char ch = 'a';
//	
//	//int ret = isdigit(ch);//如果是数字字符返回非0的值，如果不是数字字符，返回0
//	int ret = islower(ch);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//字符转换函数

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//内存操作函数

//memcpy() 内存拷贝,应该拷贝不重叠的内存

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;

	}

	return ret;
}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	//my_memcpy(arr2, arr1, 20);
//	my_memcpy(arr1 + 2, arr1, 20);//内存重叠
//
//	return 0;
//}


//memmove() 可以处理内存重叠的情况

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	if (dest < src)
	{
		//前->后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//后->前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}

	return ret;
}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//my_memmove(arr+2, arr, 20);
//	my_memmove(arr, arr+2, 20);
//
//	return 0;
//}


//memcmp() 内存比较

//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}


//memset()

//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);//以字节为单位设置内存的
//	//01 00 00 00
//	//01 01 01 01
//
//	return 0;
//}


