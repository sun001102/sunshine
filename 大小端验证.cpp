//#include <stdio.h>
//int main()
//{
//	int a = 1;//8个字节
//	int ret = *(char*)&a;
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
// //函数版
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;//8个字节
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
 //函数优化版
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//int main()
//{
//	int a = 1;//8个字节
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}