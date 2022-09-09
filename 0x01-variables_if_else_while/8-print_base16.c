#include <stdio.h>

/**
 * main - print hexadecimal numbers base with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = '0';

	char letter = 'a';

	while (m <= '9')
	{
		putchar(m);
		m++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
