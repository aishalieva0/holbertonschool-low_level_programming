#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, temp;
	int count = _strlen(s) - 1;

	for (i = 0; i < count; i++)
	{
		temp =  s[i];
		s[i] = s[count];
		s[count] = temp;
		count--;
	}
}
