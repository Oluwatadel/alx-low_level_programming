#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * print the last digit of a number
 */

/**
 *  main - This is the entry point for main
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10

	if (x > 5)

	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x % 10);
	}

	else if (x < 6 && x != 0)

	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}

	else

	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}

	return (0);
}
