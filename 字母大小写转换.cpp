//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//说明成功读取
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();//处理\0,吃\0;
//	}
//	return 0;
//}
//版本二：不用getchar
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)//说明成功读取
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if(ch>='A'&&ch<='Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		//getchar();//处理\0,吃\0;
//	}
//	return 0;
//}
//版本三
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)!=EOF)//不是读取失败就循环
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		//getchar();//处理\0,吃\0;
//	}
//	return 0;
//}
//版本四 【函数实现】
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>//判断、转大小写的头文件
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)!=EOF)//不是读取失败就循环
//	{
//		if (islower(ch))//函数判断是否小写字母
//		{
//			printf("%c\n",toupper(ch));//函数实现小写字母转大写
//		}
//		else if(isupper(ch))//函数判断是否大写
//		{
//			printf("%c\n", tolower(ch));//大转小
//		}
//		//getchar();//处理\0,吃\0;
//	}
//	return 0;
//}