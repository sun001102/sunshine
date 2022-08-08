//结构体实现
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Point
{
	int x = 0;
	int y = 0;
};
struct Point find_num(int arr[3][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;//右上角锁定
	struct Point p = { -1,-1 };
	while (x <= r - 1 && y>=0)//二维
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if(k>arr[x][y])
		{
			x++;
		}
		else
		{
			p.x = x;
			p.y = y;
			return p;//等（坐标）
		}
	}
	return p;//找不到
}
int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int k = 0;
	scanf("%d", &k);
	struct Point ret = find_num(arr, 3, 3, k);
	printf("%d %d\n", ret.x, ret.y);
	return 0;
}