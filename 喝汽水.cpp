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
		total += empty / 2;//空瓶换的水+总=目前总拿到的水
		empty=empty / 2 + empty % 2;//手里的空瓶总数为=空瓶换的瓶+空瓶不够换余下来的瓶
	}
	printf("%d", total);
	return 0;
}