#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
//n��k�η�
#include <stdio.h>
double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 /Pow(n, -k);//ע���������
	}
 }
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret=Pow(n, k);
	printf("%lf", ret);
	return 0;
}