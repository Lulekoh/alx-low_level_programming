#include "main.h"
/**
 * _print_rev_recursion - prints a strung in reverse.
 * @s: The string to print
 *
 * Return: 0 on sucess
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
