#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - to return the value x raised to raised to the power of y
 * @x: x the first value
 * @y: y the value of power to use
 * Return: Value of return is 1 if successful
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
