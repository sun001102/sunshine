//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//˵���ɹ���ȡ
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();//����\0,��\0;
//	}
//	return 0;
//}
//�汾��������getchar
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//˵���ɹ���ȡ
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if(ch>='A'&&ch<='Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		//getchar();//����\0,��\0;
//	}
//	return 0;
//}
//�汾��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)!=EOF)//���Ƕ�ȡʧ�ܾ�ѭ��
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		//getchar();//����\0,��\0;
//	}
//	return 0;
//}
//�汾�� ������ʵ�֡�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>//�жϡ�ת��Сд��ͷ�ļ�
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)!=EOF)//���Ƕ�ȡʧ�ܾ�ѭ��
//	{
//		if (islower(ch))//�����ж��Ƿ�Сд��ĸ
//		{
//			printf("%c\n",toupper(ch));//����ʵ��Сд��ĸת��д
//		}
//		else if(isupper(ch))//�����ж��Ƿ��д
//		{
//			printf("%c\n", tolower(ch));//��תС
//		}
//		//getchar();//����\0,��\0;
//	}
//	return 0;
//}