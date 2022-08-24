//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;//Fib(0)
//	int b = 1;//Fib(1)
//	int c = a + b;
//	while (1)//很多斐波那契额  分情况讨论
//	{
//		if (n == b)
//		{
//			printf("0\0");
//			break;
//		}
//		else if (n < b)//a b之间
//		{
//			if (abs(a - n) > abs(b - n))//绝对值
//			{
//				printf("%d\0",abs(b-n));
//			}
//			else
//			{
//				printf("%d\0", abs(a - n));
//			}
//			break;
//		}
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}