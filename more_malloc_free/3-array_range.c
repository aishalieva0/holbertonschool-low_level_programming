#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: array starts from
 * @max: where array ends
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
