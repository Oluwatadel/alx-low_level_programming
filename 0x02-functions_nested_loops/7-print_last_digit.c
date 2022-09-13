#include "main.h"
/**
 * print_last_digit - print the last digit of an integer
 *
 * @i: integer to compute
 *
 * Return: last digit of number
 */


int print_last_digit(int i)
{
	int digit = i % 10;

	if (digit < 0)

		digit *= -1;

	_putchar(digit + '0');


	return (digit);
}
