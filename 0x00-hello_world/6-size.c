#include <stdio.h>

/**
 * main - Entry point
 *
 * prinf to print the size of data type
 *
 * Return: always 0
 *
 *
 */

int main(void)
{

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long int: %d bytes\n", sizeof(long long int));
	printf("Size of a float: %d bytes\n", sizeof(float));

	return (0);
}
