//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest,const char* sou)
//{
//	char* ret = dest;
//	assert(dest && sou);//ȷ��ָ�����Ч��
//	//1.�ҵ�Ŀ��ռ��ĩβ\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.����
//	//while(*sou)//\0����
//	//{
//	//	*dest++ = *sou++;
//	//}
//	//*dest =*sou;//\0
//	////�Ż���
//	while(*dest++ = *sou++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";//Ŀ��ռ��㹻��
//	my_strcat(arr1, "bit");
//	printf("%s\n", arr1);
//	return 0;
//}