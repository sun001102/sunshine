//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if(*str1=='\0')
//		return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcd";
//	int ret=my_strcmp(arr1, arr2);
//	printf("%d ", ret);
//}
//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d ", ret);
//}