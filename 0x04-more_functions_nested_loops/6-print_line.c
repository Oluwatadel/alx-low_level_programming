#include "main.h"
/**
 * print_line - To print a straight line
 * @n:	number of times character _ will appear
 * @i: the parameter for ieteration
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
