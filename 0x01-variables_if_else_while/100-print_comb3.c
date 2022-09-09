#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	digit1 = 0;
	digit2 = 0;

	while (digit1 < 10)
	{
		if (digit1 == 9)
		{
			putchar(',');
			putchar(' ');
		}
			putchar((digit1 % 10) + '0');

			digit1++;
	}

	while (digit2 < 10)
        {
                if (digit2 == 9)
                {
                        putchar(',');
                        putchar(' ');
                }
                        putchar((digit2 % 10) + '0');

                        digit2++;
        }

	putchar('\n')

	return (0);
}
