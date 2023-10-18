#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 *print_alphabet - Prints alphabet
 *@n: number which found last digit
 * Return: void
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -(n % 10);
	}
	else
	{
		lastDigit = n % 10;
	}
	_putchar('0' + lastDigit);

	return (lastDigit);
}
