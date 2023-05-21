#include <stdio.h>
/**
 * main - entry point
 * Description: print the alphabet in lowercase
 * and in uppercase, followed by a new lone
 * Return: 0 success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
