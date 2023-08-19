#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates an array.
 * @size: size of the array.
 * @action:  is a pointer to the function you need to use.
 * @array: array.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
