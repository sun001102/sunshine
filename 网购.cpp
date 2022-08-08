#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double price = 0;
	int m = 0;
	int d = 0;
	int flag = 0;
	scanf("%lf %d %d %d", &price,&m,&d,&flag);
	if (m == 11 && d == 11)
	{
		price = price*0.7-flag*50;
	}
	else if (m== 12 && d== 12)
	{
		price =price*0.8-flag*50;
	}
	//Êä³ö
	if (price < 0.0)
	{
		printf("%.2lf\n",0);
	}
	else
	{
		printf("%.2lf\n", price);
	}
	return 0;
}