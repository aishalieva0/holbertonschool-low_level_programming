#include "main.h"
/**
 * _sqrt_helper - finds square root
 * @low: lower bound of the search range
 * @high: upper bound of the search range
 * @n: number
 *
 * Return: int
 */

int _sqrt_helper(int n, int low, int high)
{
	double mid;
	double square;

	if (low > high)
		return (-1);

	mid = low + (high - low) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt_helper(n, mid + 1, high));
	else
		return (_sqrt_helper(n, low, mid - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1, n / 2));
}
