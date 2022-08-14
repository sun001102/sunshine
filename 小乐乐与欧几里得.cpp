#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{//输入
	int n = 0;
	int m = 0;
	scanf("%d %d", &n,&m);
	//计算  1最大公约数与2最小公倍数之和3
	//1 	int i = (n > m ? n : m);//判断输入两数中的最大值24 18   6
	int r = 0;
	int i = (n > m ? n : m);//判断输入两数中的最大值
	while (n % m)
	{
		r = n %m;//6
		n = m;//n=18
		m = r;//m=6;
	}
	int sum1 = m;
	//2.最小公倍数
    //int i=(n > m ? n: m);//判断输入两数中的最大值
	while (1)
	{
			if (i % n == 0 && i % m == 0)
			{
				break;
			}
			i++;
	}
	int sum2 = i;
	int sum = sum1 + sum2;
	printf("%d ", sum);
	return 0;
}