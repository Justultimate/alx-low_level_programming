#include "main.h"

int _putchar(char c);

/**
 * print_numbers - prints number from 0 to 9.
 * Return: always 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
