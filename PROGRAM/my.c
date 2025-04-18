#include <stdio.h>

int main(void)
{
	long long result;
	
	result = 1LL << 31;

	printf("2の31乗は %11d です。 \n", result);

	return 0;
}

