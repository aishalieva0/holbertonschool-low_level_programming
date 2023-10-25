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
	int i = 0;
	int sign = 0;
	int result = 0;
	int length = 0;
	int flag = 0;
	int digit = 0;


	while (s[length] != '\0')
		length++;

	while (i < length && flag == 0)
	{
		if (s[i] == '-')
			++sign;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2)
				digit = -digit;
			result = result * 10 + digit;
			flag = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			flag = 0;
		}
		i++;
	}
	if (flag == 0)
		return (0);

	return (result);
}
