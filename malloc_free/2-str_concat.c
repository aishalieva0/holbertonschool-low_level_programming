#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *newStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	newStr = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (newStr == NULL)
		return (NULL);

	strcpy(newStr, s1);

	strcat(newStr, s2);

	return (newStr);
}
