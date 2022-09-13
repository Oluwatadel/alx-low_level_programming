#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the character a to z to stdout
 *
 * Description: To printed out because of the _putchar function
 *
 * Return: On success 0.
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')

	{
		_putchar(i);

		i++;
	}
	_putchar('\n');

}
