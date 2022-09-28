#include <stdio.h>
#include "main.h"


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
