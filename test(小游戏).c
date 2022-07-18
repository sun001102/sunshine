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
//		//生成随机数
//	int guess = 0;
//	int ret = rand()%100+1;
//	//printf("%d", ret);
//	//开始猜数字
//	while (1)
//	{
//		printf("猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case  1:
//			//整个猜数字逻辑
//			game();
//			break;
//		case  0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//猜数字小游戏
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
//	//生成一到一百的随机值
//	int guess = 0;
//	int ret = rand()%100+1;//32767
//	///*printf("%d", ret
//	while (1)
//	{
//	printf("猜数字\n");
//	scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择->\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		//开始猜数字
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("输入错误，请重新输入：\n");
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
		printf("猜数字—>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择->:");
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
			printf("退出游戏\n");
			break;
		   }
		default:
		  {
			printf("输入错误，请重新输入：\n");
			break;
		  }
		}
	} while (input);
		return 0;
}