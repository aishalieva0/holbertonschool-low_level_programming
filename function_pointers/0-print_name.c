#include <stddef.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
