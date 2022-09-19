#include "main.h"
#include <stdio.h>

/**
 * rev_string - The function to print the reverse of a string
 *@s: String to print in reverse order
 * Return: Always zero
 */
void rev_string(char *s)
{
	char k;
	int i, leng, lengt;

	leng = 0;
	lengt = 0;

	while (s[leng] != '\0')
	{
		leng++;
	}

	lengt = leng - 1;

	for (i = 0; i < leng / 2; i++)
	{
		k = s[i];
		s[i] = s[lengt];
		s[lengt--] = k;
	}
}
