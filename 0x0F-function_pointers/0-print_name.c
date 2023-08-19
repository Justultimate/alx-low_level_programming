#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name.
 * @name: name to be printed.
 * @f: pointer to the function.
 *
 * return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
