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
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char replace[] = {4, 3, 0, 7, 1};

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == letters[i] || *str == letters[i] - 32)
				*str = replace[i] + '0';
		}
		str++;
	}
	return (s);
}
