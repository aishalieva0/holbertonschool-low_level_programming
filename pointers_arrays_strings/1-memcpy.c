#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: a pointer
 * @src: memory area
 * @n: bytes
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (ptr);
}
