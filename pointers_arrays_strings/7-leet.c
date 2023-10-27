#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 *
 * Return: char
 */

char *leet(char *str)
{
	char *s = str;
	int i = 0;
	int len = 0;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char replace[] = {4, 3, 0, 7, 1};

	while (letters[i++])
		len++;

	while (*str)
	{
		for (i = 0; i < len; i++)
		{
			if (*str == letters[i] || *str == letters[i] - 32)
				*str = replace[i] + '0';
		}
		str++;
	}
	return (s);
}
