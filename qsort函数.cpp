//第一版：冒泡排序
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		//每一趟
//		for (j = 0; j <sz-1-i; j++)
//		{//交换
//			if(arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	//只能实现对整型数组
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//第二版：qsort函数
//#include <stdio.h>
//#include <stdlib.h>
//int cmp_int(const void* e1,const void* e2)
//{
//	if (*(int*)e1 >*(int*)e2)//因为e1 e2类型为泛型 所以进行强制类型转换
//	{
//		return 1;
//	}
//	else if (*(int*)e1 == *(int*)e2)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//	return (*(int*)e1-(*(int*)e2));//qsort 默认升序  
//	//若想实现降序 e2-e1
//}
//
//第三版：qsort实现排结构体
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stu
{
	char name[20];
	int age = 0;
};
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
int main()
{
	struct Stu s[] = { {"zhangsan,15"},{"lisi,30"},{"wangwu,20"} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//按照名字排序
	return 0;
}