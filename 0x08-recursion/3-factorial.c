#include <stdio.h>
#include "main.h"

/**
 * factorial - to print the factorial of a number
 * @n: integer to be printed
 * Return: if error display -1
 * and 1 if success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
