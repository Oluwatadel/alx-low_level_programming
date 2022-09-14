#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: To compute and print the sum of natural numbers
 * of multiples of 3 or 5 below 1024
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m, mn;

	int a

	n = 0;
	m = 0;
	mn = 0;

	for (a = 0; a < 1024; a++)

	{
		if ((a % 3) == 0)

		{
			n = n + a;

		} else if ((a % 5) == 0)

		{

			m = m + a;

		}
	}

	mn = n + n;

	prinf("%d\n", mn);

	return (0);
}
