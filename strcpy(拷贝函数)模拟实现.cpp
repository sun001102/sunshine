//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest,const char* sou)//定义
//{
//	assert(dest);
//	assert(sou);
//	char* ret = dest;
//	while(*sou)
//	{
//		*dest++ = *sou++;
//	}
//	*dest = *sou;//\0
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefgh";//源头
//	char arr2[20] = { 0 };//目标
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//优化版
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* sou)//定义
//{
//	assert(dest);
//	assert(sou);
//	char* ret = dest;
//	while (*dest++ = *sou++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefgh";//源头
//	char arr2[20] = { 0 };//目标
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//
