#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the character a to z to stdout
 *
 * Description: To print out using a to z ten times
 *
 * Return: On success 0.
 */


void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char x = 'a';

		while (x <= 'z')

		{
			_putchar(x);

			x++;
		}
		_putchar('\n');

		i++;
	}
}
