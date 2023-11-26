#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int j;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (j = 0; j < n; j++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
