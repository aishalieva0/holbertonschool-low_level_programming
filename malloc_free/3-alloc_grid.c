#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **)malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}

	if (array == NULL)
		return (NULL);

	return (array);
}
