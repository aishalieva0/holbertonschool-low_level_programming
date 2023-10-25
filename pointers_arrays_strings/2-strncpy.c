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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
