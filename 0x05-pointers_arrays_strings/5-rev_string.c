#include "main.h"

/**
 * rev_string - a funcrion that reverse a string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	imt len = 0, imdex = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
