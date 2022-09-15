#include "main.h"

/**
 * _isdigit -To check for a digit
 * @c: c to be check if it is a digit
 *
 */
int _isdigit(int c)
{
	if(c >= '0' && c <= '9') && ((c >='a' && c <='z')||(c >='A' && c <='Z'))

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
