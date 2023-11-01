#include "main.h"
#include "2-strlen_recursion.c"
/**
 * check_pal - checks palindrome string
 * @str: string
 * @s: one character
 * @l: number
 * Return: int
 */

int check_pal(char *str, int s, int l)
{
	if (s == l)
		return (1);

	if (str[s] != str[l])
		return (0);

	if (s < l + 1)
		return (check_pal(str, s + 1, l - 1));

	return (1);
}

/**
 * is_palindrome - checks palindrome string
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	return (check_pal(s, 0, len - 1));
}
