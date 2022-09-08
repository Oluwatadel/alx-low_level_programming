#include <stdio.h>

/**
 * Main -Entry point
 *
 * prinf to print the size of data type
 *
 * return always zero
 *
 *
 */

int main(void)
{

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of a float: %lu bytes\n", sizeof(float));

	return (0);
}
