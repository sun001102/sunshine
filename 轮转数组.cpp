void reverse(int* a, int begin, int end)
{
	while (begin < end)
	{
		int tmp = a[begin];
		a[begin] = a[end];
		a[end] = tmp;
		++begin;
		--end;
	}
}
void rotate(int* nums, int numsSize, int k)
{
	if (k >= numsSize)
		k %= numsSize;
	reverse(nums, 0, numsSize - k - 1);
	reverse(nums, numsSize - k, numsSize - 1);
	reverse(nums, 0, numsSize - 1);
}