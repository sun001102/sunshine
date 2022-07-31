#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);//ÊäÈë
	}
	//±È½Ï´æ´¢
	int j = 0;
	int k = 0;
	while(j < n && k < m)
	{
		if (arr1[j] < arr2[k])
		{
			printf("%d ", arr1[j]);
			j++;
		}
		else
		{
			printf("%d ", arr2[k]);
			k++;
		}
	}
	if (j < n)
	{
		for (; j < n; j++)
		{
			printf("%d ", arr1[j]);
		}
	}
	else
	{

		for (; k<m; k++)
		{
			printf("%d ", arr2[k]);
		}
	}
	return 0;
}