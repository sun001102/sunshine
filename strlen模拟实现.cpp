////��һ�棺������ʵ��
//#include <stdio.h>
//#include <assert.h>
//size_t my_strlen(const char* str)//size_t(unsigned int ��������) �ַ������Ȳ�����Ϊ��
//{
//	size_t count = 0;
//	assert(*str);//�Ż������Ӷ��ԣ��ǿ�ָ��
//	while(*str != '\0')
//	{
//		count++;//����
//		str++;
//	}
//	return count;//������
//}
//int main()
//{
//	char arr[] = "abcedf";
//	size_t len=my_strlen(arr);
//	printf("%u ", len);
//	return 0;
//}
//�ڶ��� ָ��-ָ��
//#include <stdio.h>
//size_t my_strlen(char* str)//size_t(unsigned int ��������) �ַ������Ȳ�����Ϊ��
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;//ָ��-ָ��=ָ��֮��Ԫ�ظ���
//}
//int main()
//{
//	char arr[] = "abcedf";
//	size_t len = my_strlen(arr);
//	printf("%u ", len);
//	return 0;
//}
//�����棺�ݹ�ʵ��
//#include <stdio.h>
//size_t my_strlen(char* str)//size_t(unsigned int ��������) �ַ������Ȳ�����Ϊ��
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