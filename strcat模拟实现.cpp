//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest,const char* sou)
//{
//	char* ret = dest;
//	assert(dest && sou);//确保指针的有效性
//	//1.找到目标空间的末尾\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.拷贝
//	//while(*sou)//\0跳出
//	//{
//	//	*dest++ = *sou++;
//	//}
//	//*dest =*sou;//\0
//	////优化版
//	while(*dest++ = *sou++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";//目标空间足够大
//	my_strcat(arr1, "bit");
//	printf("%s\n", arr1);
//	return 0;
//}