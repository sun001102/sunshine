#include <stdio.h>
#include <stddef.h>
struct S
{
	char c1;
	int n;
	char c2;
};                    //³ÉÔ±Ãû
#define OFFSETOF(type,m_name)         (size_t)&(((type*)0)->m_name)

int main()
{
	struct S s = { 0 };
	printf("%zd\n", OFFSETOF(struct S, c1));

	printf("%zd\n",OFFSETOF(struct S, n));
	printf("%zd\n",OFFSETOF(struct S, c2));
	return 0;
}