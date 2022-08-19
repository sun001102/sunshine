//版本1:试除法
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d%d", &n, &m) == 2)//多组输入
//	{
//		int min = (n < m) ? n : m;
//		int max = (n > m) ? n : m;
//		int i = min;
//		int j = max;
//		while (1)
//		{
//			if (n % i == 0 && m % i == 0)
//			{
//				break;
//		    }
//			i--;
//		}
//		//i就是最大公约数
//		while (1)
//		{
//			if (j % n == 0 && j % m == 0)
//			{
//				break;
//			}
//			j++;
//			//j就是最小公倍数
//		}
//		printf("%d", i + j);
//	}
//	return 0;
//}
//版本2
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d%d", &n, &m) == 2)
//	{
//		int i = n;
//		int j = m;
//		int r = 0;
//		while (r = i % j)//辗转相除法
//		{
//			i = j;
//			j = r;
//		}//j就是最大公约数
//		printf("%d", n * m / j + j);//最小公倍数=n*m/j
//	}
//	return 0;
//}