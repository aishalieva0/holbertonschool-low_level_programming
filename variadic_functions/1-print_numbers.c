#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(args, int));
		if (j != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
