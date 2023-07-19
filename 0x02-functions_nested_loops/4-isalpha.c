#include "main.h"
/**
 * _isalpha - checks for alphabetic characters.
 * @c: character to be checked for.
 * Return: 1 if the c is a letter, lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
