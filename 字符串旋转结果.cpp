//第一版：左旋 比较
//#include <stdio.h>
//#include <string.h>
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];//保存第一个字符
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];//后前移
//		}
//	    arr1[len - 1] = tmp;//第一移至最后
//		if (strcmp(arr2, arr1) == 0)//比较
//		{
////			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 0)
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//第二版：追加自己（所有旋转后的可能性）
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int is_left_move(char arr1[], char arr2[])
{
	int len1 = (strlen(arr1));
	int len2 = (strlen(arr2));
	if (len1 != len2)
		return 0;
	strncat(arr1, arr1,len1);//追加
	char* ret = strstr(arr1, arr2);//查找
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("ok\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}