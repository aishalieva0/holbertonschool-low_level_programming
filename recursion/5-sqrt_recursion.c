#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * _sqrt_helper - finds square root
 * @n: number
 * @low: equals 1
 * @high: equals n
 *
 * Return: int
 */

int _sqrt_helper(int n, int low, int high)
{
	int mid;
	int square;

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

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1, n / 2));
}
