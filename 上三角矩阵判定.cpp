#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//输入
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	int flag = 1;//是上三角
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//判断
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;//不是上三角 跳出循环
				goto end;
			}
		}
	}//输出
	end:
	if (flag == 1)
	{
		printf("是上三角");
	}
	else
	{
		printf("不是上三角");
	}
	return 0;
}