#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
 *
 * Print the last digit of a number
 *
 *
 **/

/**
 * main -To print the last digit of a number
 */
int main(void)
{
	int n, t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	t = (n % 10)

	if (t > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, t);
	}

	else if (t < 6 && t != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, t);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, t);
	return (0);
}
