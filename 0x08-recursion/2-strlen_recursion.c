#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion- To display the length of a string
 * @s: String whose length would be determined
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (i += 1);
	}
	return (0);
}
