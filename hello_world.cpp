#include <stdio.h>

int test()
{
	printf("TOP #1 build - %d\n", 1);
	return 0;
}

int main()
{
	printf("Hello world\n");
	test();
	return 0;
}
