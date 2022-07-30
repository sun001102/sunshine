#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (left < right)
		{
			//从左向右找奇数
			while ((left<right)&& arr[left] % 2 == 1)//防止越界(若为全奇数一直循环 越界）
			{
				left++;
			}
			//从右向左找偶数
			while ((left<right)&& arr[right] % 2 == 0)
			{
				right--;
			}
			//交换奇数 偶数
			if (left < right)
			{
				int tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;
				left++;
				right--;
			}
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	move_odd_even(arr, sz);
	//输出
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}