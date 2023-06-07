#include "main.h"
/**
 * _strlen_recursion - function that returns the length ofva string.
 * @s: String to be returned
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recusion(s) + 1);
}
