#include  <stdio.h>
#include <assert.h>
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);//保证指针有效性
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)//当p不为空
	{
		s1 = p;
		s2 = str2;
		//比较  很多次所以循环
		while (*s1!='\0' && *s2!='\0' && * s1 == *s2)//遍历寻找  如果*s1=\0 ，结束 *s2=\0 找完停
		{
			s1++;
			s2++;
		}//发现不相等
		if (*s2 == '\0')//s2被找完了 找到了
		{
			return (char*)p;//找到的起始地址
		}
		p++;//起始位置后移寻找   
	}//循环完了 没找到
	return NULL;
}
int main()
{
	char arr1[] = "abbbcedf";
	char arr2[] = "bbcq";
	char* ret=my_strstr(arr1, arr2);//在arr1 查找字符串arr2
	if (ret == NULL)
	{
		printf("字符串找不到\n");
	}
	else
		printf("%s\n", ret);
	return 0;
}