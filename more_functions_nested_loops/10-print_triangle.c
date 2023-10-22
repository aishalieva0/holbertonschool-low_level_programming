#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: is the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int space;
	int i, j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			space = size - i - 1;
			while (j < size)
			{
				if (space > j)
				{
					_putchar(32);
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			i++;
			j = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
