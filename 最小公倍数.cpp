//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m=(a > b ? a : b);//判断输入两数中的最大值
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d ", m);
//	return 0;
//}
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (1)
//	{
//		if ((a * i) % b == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%d ", a*i);
//	return 0;
//}
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = 1;
	while ((a * i) % b)//意思是a*i%b 为非0时 循环（不能整除就继续循环，整除为0，直接跳出循环）
	{
		i++;
	}
	printf("%d ", a * i);
	return 0;
}