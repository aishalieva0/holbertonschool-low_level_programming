#include "main.h"

/**
 * _islower - check the code.
 * @c: character.
 *
 * Return: returns int.
 */

int _islower(int c)
{
	int result;

		if (c <= 'Z')
		{
			result = 0;
		}
		else
		{
			result = 1;
		}
	return (result);
}
