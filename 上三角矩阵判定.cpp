#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//����
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	int flag = 1;//��������
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//�ж�
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				flag = 0;//���������� ����ѭ��
				goto end;
			}
		}
	}//���
	end:
	if (flag == 1)
	{
		printf("��������");
	}
	else
	{
		printf("����������");
	}
	return 0;
}