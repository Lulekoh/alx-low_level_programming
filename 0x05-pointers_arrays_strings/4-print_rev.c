#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * followe by a new line
 * @s: string to pring
 * Reurn: 0
 */
void print_rev(char *s)
{
	int longi = 0;

	int 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (0 = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
