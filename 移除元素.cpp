int removeElement(int* nums, int numsSize, int val)
{
	int dst = 0; int src = 0;
	while (src < numsSize)
	{
		if (nums[src] != val)
		{
			nums[dst] = nums[src];
			++src;
			++dst;
		}
		else
		{
			++src;
		}
	}
	return dst;
}