#include "main.h"
/**
 * _strncat -  concatenates two strings.
 * @dest: resulting string
 * @src: string
 * @n: bytes
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
