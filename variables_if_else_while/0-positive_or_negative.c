#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
/*
 * main - is function for find random
 * Return 0
 * function for random n
 */
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positve\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

