#include<stdio.h>
#include <string.h>
int main()
{
	char arr[10001]={0};//Áô×ã¹»¿Õ¼ä£¬¸ø\0
	gets_s(arr);
	int left = 0;
	int right = strlen(arr) - 1;
	while(left<right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("%s\n", arr);
	return 0;
}