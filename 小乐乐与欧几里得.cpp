//�汾1:�Գ���
//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d%d", &n, &m) == 2)//��������
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
//		//i�������Լ��
//		while (1)
//		{
//			if (j % n == 0 && j % m == 0)
//			{
//				break;
//			}
//			j++;
//			//j������С������
//		}
//		printf("%d", i + j);
//	}
//	return 0;
//}
//�汾2
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
//		while (r = i % j)//շת�����
//		{
//			i = j;
//			j = r;
//		}//j�������Լ��
//		printf("%d", n * m / j + j);//��С������=n*m/j
//	}
//	return 0;
//}