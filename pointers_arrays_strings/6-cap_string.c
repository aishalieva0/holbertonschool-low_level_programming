#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	int str_len = 0;
	int len = 0;
	char seperator[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (str[i++])
		str_len++;
	while (seperator[j++])
		len++;

	for (i = 0; i < str_len; i++)
	{
		if (i == 0 && str[i] > 'a' && str[i] < 'z')
			str[i] -= 32;
		else
		{
		for (j = 0; j < len; j++)
		{
			if (str[i] == seperator[j] && str[i + 1] > 'a' && str[i + 1] < 'z')
				str[i + 1] -= 32;
		}
		}
	}
	return (str);
}
