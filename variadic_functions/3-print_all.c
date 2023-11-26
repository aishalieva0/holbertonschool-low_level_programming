#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int num;
	float flt;
	const char *form = format;

	va_start(args, format);

	while (*form)
	{
		if (*form == 'c')
			printf("%c", va_arg(args, int));
		else if (*form == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (*form == 'f')
		{
			flt = va_arg(args, double);
			printf("%f", flt);
		}
		else if (*form == 's')
		{
			str = va_arg(args, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}

		if (*(form + 1) && (*(form + 1) == 'c' || *(form + 1) == 'i' ||
					*(form + 1) == 'f' || *(form + 1) == 's'))
			printf(", ");
	form++;
	}

	va_end(args);
	printf("\n");
}
