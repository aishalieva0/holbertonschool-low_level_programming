#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: is a digit
 *
 * Return: int
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
