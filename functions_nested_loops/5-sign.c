#include "main.h"
/**
 * print_sign - Prints alphabet
 * @n: number
 *
 * Return: int
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		_putchar('0');
		result = 0;
	}

	return (result);
}
