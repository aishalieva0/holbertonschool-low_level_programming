#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int cents = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			count++;
			if ((cents - 25) >= 0)
			{
				cents -= 25;
				continue;
			}
			if ((cents - 10) >= 0)
			{
				cents -= 10;
				continue;
			}
			if ((cents - 5) >= 0)
			{
				cents -= 5;
				continue;
			}
			if ((cents - 2) >= 0)
			{
				cents -= 2;
				continue;
			}
			cents--;
		}
	printf("%d\n", count);
	return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
