#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int num;
	int sign = 1;
	int i = 0;
	long result = 0;
	int signCount = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signCount++;
		i++;
	}

	if (signCount % 2 != 0)
		sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			result = result * 10 + num;
		}
		else
		{
			if (result != 0)
			{
				break;
			}
		}
		i++;
	}

	return (result * sign);
}
