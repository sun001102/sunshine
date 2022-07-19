#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}﻿
// int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}﻿﻿
//n！函数实现
//#include <stdio.h>
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret= Fac(n);
//		printf("%d的阶乘为：%d", n, ret);
//	return 0;
//}
//n！递归
//#include <stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//	    return n*Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d的阶乘为：%d", n, ret);
//	return 0;
//}
//n!的递归
//#include <stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = Fac(n);
//	printf("%d的阶乘为：%d", n, ret);
//	return 0;
//}
//递归方式实现 打印一个整数的每一位
//#include <stdio.h>
//void Print(int i)
//{
//	if (i > 9)
//	{
//		Print(i / 10);
//	}
//	printf("%d ", i%10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Print(i);
//	return 0;
//}
//递归方式实现字符串长度
//#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//注意 不是地址加
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello word";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//打印一个整数的每一位
#include <stdio.h>
void Print(int i)
{
	if (i > 9)
	{
		Print(i / 10);
	}
	printf("%d ", i % 10);
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	Print(i);
	return 0;
}

