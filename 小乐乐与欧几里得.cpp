#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{//����
	int n = 0;
	int m = 0;
	scanf("%d %d", &n,&m);
	//����  1���Լ����2��С������֮��3
	//1 	int i = (n > m ? n : m);//�ж����������е����ֵ24 18   6
	int r = 0;
	int i = (n > m ? n : m);//�ж����������е����ֵ
	while (n % m)
	{
		r = n %m;//6
		n = m;//n=18
		m = r;//m=6;
	}
	int sum1 = m;
	//2.��С������
    //int i=(n > m ? n: m);//�ж����������е����ֵ
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