#include <stdio.h>
/**
 * main -Entry point
 *
 *
 * Return: always return 0
 *
 */

int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

		putchar('\n');

	return (0);
}
