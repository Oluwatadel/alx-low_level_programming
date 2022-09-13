#include "main.h"
/**
 * _isalpha - writes the character c to stdout
 *
 * @c: To printed out because of the _putchar function
 *
 * Return: On success 0.
 *
 */




int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	
	{
		return (1);
	}
	
	else

	{
		return (0);
		
	}
	_putchar('\n');

}
