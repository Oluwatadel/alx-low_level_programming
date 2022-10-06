#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat- to concatenate two string
 * @s1: 1st string
 * @s2: Second string
 * @n: amount of bite
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1, len2;

	if (s2 == NULL)
		s2 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	while (s1[len1] != '\0')
		len1++;
	if (n >= len2++)
		n = len2;
	s = malloc(sizeof(char) * n + len1 + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[i + len1] = s2[i];
	s[i + len1] = '\0';
	return (s);
}

