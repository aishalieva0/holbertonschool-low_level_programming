#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
