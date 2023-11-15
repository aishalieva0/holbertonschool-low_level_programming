#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - llocates memory for an array
 * @nmemb: nmemb elements
 * @size: size bytes
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	memset(array, 0, nmemb * size);

	return (array);
}
