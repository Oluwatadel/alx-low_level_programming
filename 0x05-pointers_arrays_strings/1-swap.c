#include "main.h"
#include <stdio.h>

/**
 * swap_int - To swap the value of two integers
 *
 * @a: interger 1 to swap
 * @b: integert= 2 to swap with 1
 *
 * Return value: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
