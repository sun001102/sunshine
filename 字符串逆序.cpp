#include <stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return count;
}
void reverse(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	*(str) = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) >= 2)
		reverse(str + 1);
	*(str + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}
//还没完全消化