#include "main.h"

/**
 * print_sign - To print - or + if a number is greater than 0 or less
 *
 * @n: To check if c is lower case and return eith 1 or zero
 *
 * Return: 1 and prints +
 *
 * 0 and print 0 if n is zero
 *
 */

int print_sign(int n)
{
	if (n > 0)

	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
