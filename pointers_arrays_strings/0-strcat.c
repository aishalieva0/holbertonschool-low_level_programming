#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: resulting string
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; src[i]; i++)
	{
		dest[dest_length++] = src[i];
		dest[dest_length + i] = '\0';
	}
	return (dest);
}
