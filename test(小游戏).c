#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("********  1.play  ***********\n");
//	printf("********  0.exit  ***********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//		//���������
//	int guess = 0;
//	int ret = rand()%100+1;
//	//printf("%d", ret);
//	//��ʼ������
//	while (1)
//	{
//		printf("�����֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case  1:
//			//�����������߼�
//			game();
//			break;
//		case  0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//������С��Ϸ
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("******* 1.play *******\n");
//	printf("******* 0.exit *******\n");
//	printf("**********************\n");
//}
//void game()
//{
//	//����һ��һ�ٵ����ֵ
//	int guess = 0;
//	int ret = rand()%100+1;//32767
//	///*printf("%d", ret
//	while (1)
//	{
//	printf("������\n");
//	scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��->\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		//��ʼ������
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("����������������룺\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("****************************\n");
	printf("********* 1.play ***********\n");
	printf("********* 2.exit ***********\n");
	printf("****************************\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("�����֡�>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)(time(NULL)));
	do
	{
		menu();
		printf("��ѡ��->:");
		scanf("%d", &input);
		switch (input)
		  {
		   case 1:
		   {
			   game();
				break;
		   }
		   case 2:
		  {
			printf("�˳���Ϸ\n");
			break;
		   }
		default:
		  {
			printf("����������������룺\n");
			break;
		  }
		}
	} while (input);
		return 0;
}