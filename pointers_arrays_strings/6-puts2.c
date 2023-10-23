#include "main.h"
#include "2-strlen.c"
/**
 * puts2 -  prints every other character of a string
 * @str: string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
