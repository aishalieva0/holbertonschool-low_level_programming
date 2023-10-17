#include "main.h"
/**
 * _isalpha - Prints alphabet
 * @c: character which is checked
 *
 * Return: int
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
