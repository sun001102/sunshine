#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>     //�ú�ɫΪ  ��ɫΪ��0  ��ɫ����01     ��֮
#define SWAP_BIT(n)    n=(((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))
int main()
{
	int n = 0;
	scanf("%d", &n);
	SWAP_BIT(n);
	printf("%d\n", n);
	return 0;
}