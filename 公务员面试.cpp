#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int score= 0;
	int n = 0;
	int m = 0;
	int max = 0;
	int min = 100;
	int sum = 0;
	while (scanf("%d", &score) == 1)
	{
		n++;
		if (max < score)
			max = score;
		if (min > score)
			min = score;
		sum += score;
		if (n == 7)
		{
			printf("%.2lf\n", (sum - min - max) / 5.0);
			 n = 0;
			 max = 0;
			 min = 100;
			 sum = 0;
		}
	}
	return 0;
}