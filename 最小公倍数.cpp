//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m=(a > b ? a : b);//�ж����������е����ֵ
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
	while ((a * i) % b)//��˼��a*i%b Ϊ��0ʱ ѭ�������������ͼ���ѭ��������Ϊ0��ֱ������ѭ����
	{
		i++;
	}
	printf("%d ", a * i);
	return 0;
}