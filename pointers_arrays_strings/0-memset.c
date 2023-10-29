#include "main.h"
#define NULL ((void *)0)
/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to the memory area
 * @b: constant byte
 * @n: bytes of the memory area
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	if (s == NULL || n == 0)
		return (s);

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (ptr);
}
