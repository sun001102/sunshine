#include <stdio.h>
long long Fib(size_t N)
{
	if (N < 3)
		return 1;
	long long f1 = 1, f2 = 1, f3;
	for (size_t i = 3; i <= N; ++i)
	{
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main()
{
	printf("%lld\n", Fib(40));
	return 0;
}