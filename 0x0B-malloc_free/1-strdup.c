#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - To define the length of a string
 * @s: string
 * Return: length of string which is i
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
 * _strdup - function to return pointer to string
 * @str: str to be duplicated
 * Return: pointer to the string created
 */
char *_strdup(char *str)
{
	int len;
	int size;
	char *dup;

/* Allocate memory for suplicate */
	size = _strlen(str) + 1;
	dup = malloc(sizeof(char) * size);
	if (dup == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (len < size)
	{
		if (dup == 0)
		{
			return (NULL);
		}
		dup[len] = str[len];
		len++;
	}
	return (dup);
}
