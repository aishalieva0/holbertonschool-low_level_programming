#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (strlen(s2) == n || strlen(s2) < n)
		n = strlen(s2);

	newStr = (char *)malloc(strlen(s1) + n + 1);

	if (newStr == NULL)
		return (NULL);

	strcpy(newStr, s1);
	strncat(newStr, s2, n);

	return (newStr);
}
