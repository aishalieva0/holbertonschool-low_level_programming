#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes funct given as parameter on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (action != NULL && array != NULL)
		for (j = 0; j < size; j++)
			action(array[j]);
}
