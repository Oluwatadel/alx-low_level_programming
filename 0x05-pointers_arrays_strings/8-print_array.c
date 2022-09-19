#include "main.h"
#include <stdio.h>

/**
 * print_array - Function to print n element of an array
 *
 * @n: number of element to printElement to print
 * @a: array to print
 *
 * Return: Alway 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
