#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: nothng
 */

void puts_half(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
