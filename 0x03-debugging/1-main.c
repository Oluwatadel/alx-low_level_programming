#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;
	printf("Infinite loop incoming :(\n");
	i = 0;
	while (i < 10)
	{
		putchar(i);
/* There should be an increment for i which will make reference 
 * to i less than 10
 */
	}
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
