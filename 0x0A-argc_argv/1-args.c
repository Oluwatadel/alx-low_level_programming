#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
