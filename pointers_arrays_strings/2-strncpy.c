#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: string
 * @src: satring
 * @n: bytes
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	for (i = 0; i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
