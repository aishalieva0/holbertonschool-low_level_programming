#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: string
 * @src: string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int length = _strlen(src);
	int i;

	for (i = 0; i < length && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

