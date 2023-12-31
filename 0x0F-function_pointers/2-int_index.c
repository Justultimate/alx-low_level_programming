#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an interger.
 * @array: Array.
 * @size: number of elemet in the array.
 * @cmp: pointer to the function to be used to compare values
 * Return: the first element of cmp.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
