#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while(empty >= 2)
	{
		total += empty / 2;//��ƿ����ˮ+��=Ŀǰ���õ���ˮ
		empty=empty / 2 + empty % 2;//����Ŀ�ƿ����Ϊ=��ƿ����ƿ+��ƿ��������������ƿ
	}
	printf("%d", total);
	return 0;
}