#include  <stdio.h>
#include <assert.h>
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);//��ָ֤����Ч��
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)//��p��Ϊ��
	{
		s1 = p;
		s2 = str2;
		//�Ƚ�  �ܶ������ѭ��
		while (*s1!='\0' && *s2!='\0' && * s1 == *s2)//����Ѱ��  ���*s1=\0 ������ *s2=\0 ����ͣ
		{
			s1++;
			s2++;
		}//���ֲ����
		if (*s2 == '\0')//s2�������� �ҵ���
		{
			return (char*)p;//�ҵ�����ʼ��ַ
		}
		p++;//��ʼλ�ú���Ѱ��   
	}//ѭ������ û�ҵ�
	return NULL;
}
int main()
{
	char arr1[] = "abbbcedf";
	char arr2[] = "bbcq";
	char* ret=my_strstr(arr1, arr2);//��arr1 �����ַ���arr2
	if (ret == NULL)
	{
		printf("�ַ����Ҳ���\n");
	}
	else
		printf("%s\n", ret);
	return 0;
}