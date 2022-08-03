////第一版：计数器实现
//#include <stdio.h>
//#include <assert.h>
//size_t my_strlen(const char* str)//size_t(unsigned int 的重命名) 字符串长度不可能为负
//{
//	size_t count = 0;
//	assert(*str);//优化：增加断言：非空指针
//	while(*str != '\0')
//	{
//		count++;//计数
//		str++;
//	}
//	return count;//返回数
//}
//int main()
//{
//	char arr[] = "abcedf";
//	size_t len=my_strlen(arr);
//	printf("%u ", len);
//	return 0;
//}
//第二版 指针-指针
//#include <stdio.h>
//size_t my_strlen(char* str)//size_t(unsigned int 的重命名) 字符串长度不可能为负
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//指针-指针=指针之间元素个数
//}
//int main()
//{
//	char arr[] = "abcedf";
//	size_t len = my_strlen(arr);
//	printf("%u ", len);
//	return 0;
//}
//第三版：递归实现
//#include <stdio.h>
//size_t my_strlen(char* str)//size_t(unsigned int 的重命名) 字符串长度不可能为负
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcedf";
//	size_t len = my_strlen(arr);
//	printf("%zu ", len);
//	return 0;
//}