#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: int
 */

int check(int n, int odd)
{
	return (1 + check(n - odd, odd + 2));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check(n, 1));
}
