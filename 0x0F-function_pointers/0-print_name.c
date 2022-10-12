#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function to print a name
 * @name: name to be printed
 * @f: a pointer function that prints a name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
