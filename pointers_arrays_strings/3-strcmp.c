#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	if (s1[i] == s2[i])
	{
		result = 0;
		i++;
	}
	else
	{
		result = s1[i] - s2[i];
	}

	return (result);
}
