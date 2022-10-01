#include <stdio.h>
#include "main.h"

/**
 * _strncat - To concatenate two strings using an inputted number of bytes
 *
 * @dest: The string to be appended
 * @src: the second string to be appended
 * @n: The number of time to concatenate
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
