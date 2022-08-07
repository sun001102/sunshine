//第一版
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void left_remote(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	k %= len;
	for (i = 0; i < k; i++)
	{
		//旋转1个字符
		char tmp= arr[0];
		int j = 0;
		for (j = 0; j < len-1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 0;//左旋个数
	scanf("%d", &k);
	left_remote(arr, k);
	printf("%s\n", arr);
	return 0;
}
//第二版 逆序字符串
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse(char* left, char* right)
{
	assert(left && right);//指针有效性
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_remote(char arr[], int k)
{
	int len = strlen(arr);
	k %= len;
	reverse(arr, arr+k-1);//左
	reverse(arr + k, arr+(len - 1));//右
	reverse(arr, arr+(len - 1));//整
}
int main()
{
	char arr[] = "abcdef";
	int k = 0;//左旋个数
	scanf("%d", &k);
	left_remote(arr, k);
	printf("%s\n", arr);
	return 0;
}