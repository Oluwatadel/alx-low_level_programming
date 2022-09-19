#include "main.h"
#include <stdio.h>


/**
 * print_rev - To print a string in reverse order
 *
 * @s: String to print
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i, j, lengt;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	lengt = i;

	for (j = lengt - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
