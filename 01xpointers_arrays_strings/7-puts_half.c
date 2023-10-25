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
	int start = _strlen(str) / 2;

	if (_strlen(str) % 2 == 0)
		start = _strlen(str) / 2;
	else
		start = (_strlen(str) + 1) / 2;

	for (i = start; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
