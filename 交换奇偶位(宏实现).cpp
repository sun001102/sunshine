#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>     //拿红色为  绿色为与0  红色保留01     反之
#define SWAP_BIT(n)    n=(((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))
int main()
{
	int n = 0;
	scanf("%d", &n);
	SWAP_BIT(n);
	printf("%d\n", n);
	return 0;
}