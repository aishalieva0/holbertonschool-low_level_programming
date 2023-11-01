#include <stdio.h>
/**
 * main - prints its name
 * @argc: size of the argv array
 * @argv: array containing the program command line arguments
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
