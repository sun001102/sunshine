//#include <stdio.h>
//int main()
//{
//	int a = 1;//8���ֽ�
//	int ret = *(char*)&a;
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}
// //������
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
//	int a = 1;//8���ֽ�
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}
 //�����Ż���
//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	return (*(char*)&a);
//}
//int main()
//{
//	int a = 1;//8���ֽ�
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}