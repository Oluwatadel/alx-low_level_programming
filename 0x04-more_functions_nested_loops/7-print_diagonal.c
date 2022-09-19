#include "main.h"
/**
 * print_diagonal - To print diagonal line
 * @i: To ieterate
 * @n: The number of occurence
 * Return: always 0
 */
void print_diagonal(int n)
{
	int spa, lnt;

	if (n > 0)
	{
		for (spa = 0; spa < n; spa++)
		{
			for (lnt = 0; lnt < spa; lnt++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (spa == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
