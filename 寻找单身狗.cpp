void find_signal_dog(int arr[], int sz, int* pd1, int* pd2)
{
	int i = 0;
	int ret = 0;
	//1.异或  所有数字异或
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2.计算ret的二进制中最右边的第几位是1
	int pos = 0;//位置
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*pd1 ^= arr[i];
		}
		else
		{
			*pd2 ^= arr[i];
		}
	}
}
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int dog1 = 0;
	int dog2 = 0;
	find_signal_dog(arr, sz, &dog1, &dog2);
	printf("单身狗：%d %d\n", dog1, dog2);
	return 0;
}