#include <stdio.h>
#include <string.h>
#include <assert.h>
void* my_memmove(void* dest,const void* sou, size_t num)
{
	assert(dest && sou);
	void* ret = dest;
	if (sou > dest)
	{//前往后
		while (num--)
		{
		*(char*)dest = *(char*)sou;
		dest = (char*)dest + 1;
		sou = (char*)sou + 1;
		}
	}
	else
	{//后往前(防止覆盖)
		while (num--)
		{
		*((char*)dest + num) = *((char*)sou+num);

		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
	my_memmove(arr1+4, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}