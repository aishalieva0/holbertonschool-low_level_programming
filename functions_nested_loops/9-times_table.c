#include "main.h"
/**
 * times_table - Prints alphabet
 *
 * Return: void
 */

void times_table(void)
{
	int num1, num2, result;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			result = num1 * num2;
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				if (num2 != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				if (num2 != 0)
				{
					_putchar(32);
				}
				_putchar(result + '0');
				if (num2 != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
