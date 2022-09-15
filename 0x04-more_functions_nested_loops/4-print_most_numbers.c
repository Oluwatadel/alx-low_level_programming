#include "main.h"
/**
 * print_most_numbers - To rpint numbers 0 to 0 excluding 2 and 4
 *
 * @
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
			_putchar (i);
	}
	_putchar(10);
}
