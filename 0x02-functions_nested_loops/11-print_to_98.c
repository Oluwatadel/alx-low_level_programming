#include "main.h"

#include <stdio.h>



/**
 *
 *  * print_to_98 -  prints all natural numbers from n to 98,
 *
 *   * @n: the starting number
 *
 *    * Return: nothing to return.
 *
 *     */

void print_to_98(int n)
{
<<<<<<< HEAD
	int i;
	
	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%i, ", i);
	else
		for (i = n; i < 98; i++)
			printf("%i, ", i);
	printf("98\n");

=======

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
>>>>>>> fb81684455b3955f4b7c5e2d0377fcf9957d0176
}

