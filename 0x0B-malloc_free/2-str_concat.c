#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 * @src: source of string
 * @n: int type for size of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	a = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i + a] = src[i];
	return (dest);
}

/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size, size1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = _strlen(s1);
	size1 = _strlen(s2);

	ptr = malloc((size + size1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	_strncat(ptr, s1, size);
	_strncat(ptr, s2, size1);
	ptr += '\0';
	return (ptr);
}

