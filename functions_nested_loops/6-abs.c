#include "main.h"
/**
 * _abs - Prints alphabet
 * @n: number which is computed the absolute value
 *
 * Return: int
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	else
	{
		n = 1 * n;
	}

	return (n);
}
