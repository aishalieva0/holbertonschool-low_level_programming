#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) == 1)
			return (j);
	}
	return (-1);
}
