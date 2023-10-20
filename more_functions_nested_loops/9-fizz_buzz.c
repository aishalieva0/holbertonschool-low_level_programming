#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz\n");
			}
		}
		else if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
				printf("%d ", num);
		}
	}
	return (0);
}
