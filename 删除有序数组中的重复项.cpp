int  removeDuplicates(int* nums, int numsSize)
{
	int src = 0, dst = 0;
	while (src < numsSize)
	{
		if (nums[src] == nums[dst])
		{
			++src;
	     }
		else
		{
			++dst;
			nums[dst] = nums[src];
			++src;
		}
	}
	return dst + 1;//³¤¶È
}