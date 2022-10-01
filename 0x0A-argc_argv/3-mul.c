#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, m;

	n = atoi(argv[1]);
	m = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", n * m);
		return (0);
	}
	else

		printf("Error\n");
	return (1);
}
