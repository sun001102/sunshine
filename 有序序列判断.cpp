#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{//����
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int arr[50] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}//�ж�    ����(���� ����)
	int flag1 = 0;//����
	int flag2 = 0;//����
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			if (arr[i] > arr[i-1])
			{
				flag1 = 1;
			}
			else if (arr[i]< arr[i-1])
			{
				flag2 = 1;
			}
			else
			{
				;
			}
		}
	}
	if (flag1 + flag2 <= 1)//С�ڣ����Ҳ������
		printf("sorted");
	else
		printf("unsorted");
	return 0;
}