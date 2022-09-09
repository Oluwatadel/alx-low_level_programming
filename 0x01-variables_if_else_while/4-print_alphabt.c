#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')

	{
		if (a != 'e') && (a != 'q')
		{

			putchar(a)
		}

		a++;

	}

	putchar('\n');


		return (0);
}
