//��һ�棺���� �Ƚ�
//#include <stdio.h>
//#include <string.h>
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];//�����һ���ַ�
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];//��ǰ��
//		}
//	    arr1[len - 1] = tmp;//��һ�������
//		if (strcmp(arr2, arr1) == 0)//�Ƚ�
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
//�ڶ��棺׷���Լ���������ת��Ŀ����ԣ�
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int is_left_move(char arr1[], char arr2[])
{
	int len1 = (strlen(arr1));
	int len2 = (strlen(arr2));
	if (len1 != len2)
		return 0;
	strncat(arr1, arr1,len1);//׷��
	char* ret = strstr(arr1, arr2);//����
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