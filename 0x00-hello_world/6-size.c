#include <stdio.h>
/**
 * main - is the main function
 *
 * Return: 0
 */

int main(void)
{
	printf("size of char: %lu byte(s)" sizeof(char));
	printf("Size of an int: %lu byte(s)" sizeof(int));
	printf("Size of a long int: %lu byte(s)" sizeof(long int));
	printf("Size of a long long int: %lu byte(s)" sizeof(long long int));
	printf("Size of a float: %lu byte(s)" sizeof(float));
	return (0);
}
