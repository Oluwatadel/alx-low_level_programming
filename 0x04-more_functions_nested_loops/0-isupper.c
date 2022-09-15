#include "main.h"
#include <stdio.h>
/**
 * _isupper - To check if a character is an uppercase letter
 *
 * @c: character to be checked
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
