////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int main()
////{
////	int N = 0;
////	scanf("%d", &N);//输入N个成绩
////	int n = 0;
////	int arr[100];
////	for (n = 0; n < N; n++)
////	{
////		scanf("%d", &arr[n]);//输入(循环)成绩n
////	}
////	int i = 0;
////	int j = 100;
////	for (n = 0; n < N; n++)
////	{
////		if (arr[n] > i)
////		{
////			i = arr[n];//谦虚找到最高分
////		}
////	   if (arr[n] < j)
////		{
////			j = arr[n];//谦虚找到最低分
////		}
////	}
////	printf("%d \n", i - j);
////	return 0;
////}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);//输入N个成绩
//	int n = 0;
//	int arr[100];
//	int i = 0;
//	int j = 100;//优化版：循环相同，只循环一次实现（在输入是）遍历实现
//	for (n = 0; n < N; n++)
//	{
//		scanf("%d", &arr[n]);//输入(循环)成绩n
//		if(arr[n] > i)
//		{
//			i = arr[n];//谦虚找到最高分
//		}
//		if (arr[n] < j)
//		{
//			j = arr[n];//谦虚找到最低分
//		}
//	}
//	printf("%d \n", i - j);
//	return 0;
//}