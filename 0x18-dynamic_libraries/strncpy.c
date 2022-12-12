#include "main.h"

/**
 * _strncpy - functions to copy strings
 * @dest: string to be copied
 * @src: 2nd string
 * @n: amount of place to copy
 *
 * Return: always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
