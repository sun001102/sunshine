#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		int ret = 1;//�������潫�����ϴ�ret���ɵ�ֵ
		for (j = 1; j <=i; j++)
		{
			ret = ret * j;//ret*=i;
		}
		sum = sum + ret;//sum+=ret;
	}
	printf("%d\n", sum);
	return 0;
}