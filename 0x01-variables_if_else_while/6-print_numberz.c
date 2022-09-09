#include <stdio.h>

/**
 * main - print 0-9 using putchar
 *
 * Return: Always 0 (succcess)
 */

int main(void)
{
	int num;
	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar ('\n');

	return (0);
}
