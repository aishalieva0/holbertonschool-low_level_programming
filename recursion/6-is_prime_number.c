#include "main.h"
/**
 * is_prime_number - checks prime n umber
 * @n: number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n == 1 || n == -1)
		return (0);
	else
		return (1);
}
