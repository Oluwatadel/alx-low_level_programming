#include "main.h"

/**
 * _isdigit - To check for a digit
 * @c: c to be check if it is a digit
 *
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);

}
