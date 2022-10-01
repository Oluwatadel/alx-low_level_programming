#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	int coins = 0;

	if (argc == 2)
	{
		int curren;

		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}

		curren = atoi(argv[argc - 1]);

		while (curren > 0)
		{
			if (curren % 25 == 0)
			{
				curren -= 25;
			} else if (curren % 10 == 0)
			{
				curren -= 10;
			} else if (curren % 5 == 0)
			{
				curren -= 5;
			} else if (curren % 2 == 0)
			{
				curren -= 2;
			} else
			{
				curren--;
			}
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
