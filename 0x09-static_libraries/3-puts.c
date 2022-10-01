#include "main.h"
#include <stdio.h>

/**
 * _puts - To display a str to the stdout
 *
 * @str: the string to be displayed
 * i: To ieterate the display
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
