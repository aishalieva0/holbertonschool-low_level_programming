#include "main.h"
#define NULL ((void *)0)
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
