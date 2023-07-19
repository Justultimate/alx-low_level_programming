#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 1; n <= 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
