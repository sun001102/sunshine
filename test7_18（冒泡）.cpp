#include <stdio.h>
int main()
{
	int arr[10]={9,2,4,5,8,1,3,6,7,10};
	//int i = 0;//����
	int i = 0;
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i < sz - 1;i++)//����
	{
		//ÿһ��
		int j = 0;
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}