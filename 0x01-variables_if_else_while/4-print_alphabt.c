#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char a;

	while (a = 'a', a <= 'z')

	{
		if (a == 'e' || a == 'q')
		{

			continue;
		}

		putchar(a);
	}

	putchar('\n');


		return (0);
}
