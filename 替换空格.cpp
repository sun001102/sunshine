class Solution {
public:
	void replaceSpace(char* str, int length) {
		char* cur = str;//放改变记录
		int space_count = 0;//空格数
		while (*cur)
		{
			if (*cur == ' ')
				space_count++;
			   cur++;
		}
		int end1 = length - 1;
		int end2 = length + space_count * 2 - 1;//原来一个长度1   变为3   增2
		while (end1 != end2)
		{
			if (str[end1] != ' ')
			{
				str[end2--] = str[end1--];
			}
			else
			{
				end1--;
				str[end2--] = '0';
				str[end2--] = '2';
				str[end2--] = '%';
			}
		}
	}
};