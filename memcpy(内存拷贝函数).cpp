//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void* my_memcpy(void* dest, void* sou, size_t num)
//{
//	assert(dest && sou);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)sou;
//		dest=(char*)dest + 1;
//		sou = (char*)sou + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7};
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 28);
//	return 0;
//}