#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passsed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv; /* ignore argv */
	printf("%d\n", argc - 1);

	return (0);
}
