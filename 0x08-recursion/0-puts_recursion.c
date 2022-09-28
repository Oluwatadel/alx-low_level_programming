#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - To display str using recursion
 * @s: string to be printed recursively
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
