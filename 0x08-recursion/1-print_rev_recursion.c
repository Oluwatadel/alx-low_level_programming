#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - function to print the reverse of a string recursively
 * @s: string to be printed re
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
